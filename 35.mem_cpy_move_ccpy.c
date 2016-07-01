/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：静态链接库和动态链接库
 * 功能：演示memcoy和memmove和memccoy函数的用法和区别
 */
#include <stdio.h>
#include <string.h>
//#define NDEBUG
#include <assert.h>

// linux下memcpy源码
// void *memcpy(void *dest, const void *src, size_t n);
// 从源src所指的内存地址的起始位置开始拷贝n个字节
// 到目标dest所指的内存地址的起始位置中，返回值为指向dest的指针
void *memcpy1(void *dest, const void *src, size_t n)
{													
	assert((src != NULL) && (dest != NULL));		// 判断参数合法性
	void *rev = dest;								
	while (n--)
	{
		*(char *)dest = *(char *)src;
		dest = (char *)dest + 1; 					// 单个字节进行copy	 
		src = (char *)src + 1;						
	}												
	return rev;										// 返回值为指向dest的指针				
}

// linux下memmove源码
// void *memmove(void *dest, const void *src, size_t n);
// 从源src所指的内存地址的起始位置开始拷贝n个字节
// 到目标dest所指的内存地址的起始位置中，返回值为指向dest的指针
void *memmove1(void *dest, const void *src, size_t n)
{
	assert((src != NULL) && (dest != NULL));		// 判断参数合法性
	void *rev = dest;						
	// 原则：未拷贝的src数据与已拷贝的dest数据不能被改变
	if ((src >= dest) || ((char *)dest >= ((char *)src + n))) 
	{// 若dst和src区域没有重叠，则从起始处开始逐一拷贝
		while (n--)
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest + 1; 				// 正向拷贝	 
			src = (char *)src + 1;
		}
	}
	else 
	{// 若dst和src 区域交叉，则从尾部开始向起始位置拷贝，这样可以避免数据冲突
		dest = (char *)dest + (n - 1);
		src = (char *)src + (n - 1);
		while (n--)
		{
			*(char *)dest = *(char *)src;
			dest = (char *)dest - 1; 				// 反向拷贝	 
			src = (char *)src - 1;
		}
	}
	return rev;										// 返回值为指向dest的指针	
}

// linux下memmccpy源码
// void *memccpy(void *dest, const void *src, int c, size_t n);
// 由src所指内存区域复制不多于n个字节到dest所指内存区域，如果遇到字符ch则停止复制。
// 返回指向dest中值为c的下一个字节的指针，如果src前n个字节中不存在c则返回NULL。c被复制。
void *memccpy1(void *dest, const void *src, int c, size_t n)
{
	assert((src != NULL) && (dest != NULL));		// 判断参数合法性
	while (n)
	{
		*(char *)dest = *(char *)src;
		dest = (char *)dest + 1;
		if (*(char *)src == (char)c)				// 若发现指定的字符，则停止拷贝
		{
			break;
		}
		src = (char *)src + 1;
		n--;
	}
	return (n ? dest : NULL);						// 返回指向字符’c’后的第一个字符的指针；
													// 否则返回NULL，c被复制
}

// 函数关键点：
// (1)以上函数不关心被复制的数据类型（因为函数的参数类型是void*（未定义类型指针）），
// 只是逐字节地进行复制，这给函数的使用带来了很大的灵活性，可以面向任何数据类型进行复制。
// (2)dest指针要分配足够的空间，也即大于等于n字节的空间，
// 如果没有分配空间，会出现段错误。
// (3)若能确定dest和src所指的内存空间不能重叠，则使用memcpy或memccpy，
// 如果发生了重叠，使用memmove会更加安全。
// (4)如果目标destin本身已有数据，执行memcpy后，将覆盖原有数据（最多覆盖n）。
// 如果要追加数据，则每次执行memcpy后，要将目标数组地址增加到你要追加数据的地址。
// (5)memccpy增加了指定字符判断功能，使用时注意添加dest结束标志‘\0’，
// 但是没有考虑内存空间重叠问题。

// 备注：
// (1)如果通过长期的严格测试，能够保证使用者不会使用零地址作为参数调用函数，
// 则希望有简单的方法关掉参数合法性检查，可加#define NDEBUG取消assert()。
// (2)size_t是标准C库中定义的数据类型，32位系统中为unsigned int，
// 在64位系统中为long unsigned int，估计stdio.h中有相应的typedef语句

int main(void)
{
	char src1[] = "hello world";		// 12字节
	char src2[1024] = "hello world";
	char src3[1024] = "hello world";
	char dest1[sizeof(src1)] = {0};
	char dest2[sizeof(src1)] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	char dest3[20] = {0};
	char c;
	char *rev;
	
	// sizeof(src1)=12.strlen(src1)=11.
	printf("sizeof(src1)=%d.strlen(src1)=%d.\n", sizeof(src1), strlen(src1)); 

#if 0
	// 测试memcpy字符串的'/0'问题
	memcpy1(dest1, src1, sizeof(src1));				
	printf("after memcpy dest1 is:%s.\n", dest1);		// after memcpy dest1 is:hello world.
	memcpy1(dest2, src1, strlen(src1));
	printf("after memcpy dest2 is:%s.\n", dest2);		// after memcpy dest2 is:hello world.
#endif
	
#if 0
	// 测试memcpy参数合法性检验
	memcpy1(dest1, NULL, sizeof(src1));					// a.out: memcpy.c:67: memcpy1: Assertion 
	memcpy1(NULL, src1, sizeof(src1));					// `(src != ((void *)0)) && (dest != ((void *)0))' failed.
#endif													// Aborted (core dumped)
	
#if 0	
	// 测试memcpy复制任意连续的字节长度(长度小于等于n),复制wor
	memcpy1(dest1, (src1 + 6), 3);
	printf("after copy dest1 is %s.\n", dest1);			// after copy dest1 is wor.
#endif

#if 0
	// 测试内存重叠对memcpy和memmove的影响
	printf("before memcopy src2 is %s.\n", src2);		// before memcopy src2 is hello world.	
	memcpy1((src2 + 6), src2, strlen(src2));
	printf("after memcopy src2 is %s.\n", src2);		// after memcopy src2 is hello hello hello.
	
	printf("before memmove dest is %s.\n", src3);		// before memmove dest is hello world.
	memmove1((src3 + 6), src3, strlen(src3));
	printf("after memmove dest is %s.\n", src3);		// after memmove dest is hello hello world.
#endif
	
#if 0	
	// 测试memcppy找到/没找到相应字符的情况
	c = 'z';
	rev = memccpy1(dest3, src2, c, strlen(src2));
	if (NULL == rev)
	{
		printf("can not find character %c.\n", c);		// can not find character z.
		printf("after memccpy dest3 is %s.\n", dest3);	// after memccpy dest3 is hello world.
	}
	else 
	{
		printf("find character %c success.\n", c);		// find character r success.
		*rev = '\0';
		printf("after memccpy dest3 is %s.\n", dest3);	// after memccpy dest3 is hello wor.
	}	
#endif
	return 0;
}