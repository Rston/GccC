/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：offsetof宏与container_of宏
 * 功能：演示offsetof宏与container_of宏的使用。
 */
#include <stdio.h>

// offsetof宏：返回MEMBER元素相对于整个TYPE类型结构体首地址的偏移量
// 参数：TYPE为某个结构体类型，MEMBER为TYPE类型结构体中的某个元素
#define offsetof(TYPE, MEMBER) ((int) &((TYPE *)0)->MEMBER)

// container_of宏：返回整个结构体变量的指针
// 参数：ptr为指向结构体中member元素的指针，type为某个结构体类型，member为该结构体中的某个元素
#define container_of(ptr, type, member) ({			\
	const typeof(((type *)0)->member) * __mptr = (ptr);	\
	(type *)((char *)__mptr - offsetof(type, member)); })

struct mystruct
{
	char a;			// 偏移量0
	int b;			// 偏移量4
	short c;		// 偏移量8	
};

int main(int argc, char **argv)
{
	// 手动计算偏移量，然后通过指针方式访问结构体元素
	struct mystruct s1 = 
	{
		.a = 'c',
		.b = 20,
		.c = 8,
	};
	char *p1 = (char *)&s1;
	int *p2 = (int *)((char *)&s1 + 4);
	short int *p3 = (short int *)((char *)&s1 + 8);
	// *p1 = c. *p2 = 20. *p3 = 8.
	printf("*p1 = %c. *p2 = %d. *p3 = %d.\n", *p1, *p2, *p3);

	// 使用offsetof宏
	// offsetof(struct mystruct, a) = 0.
	// (char *)&(s1.a) - (char *)&s1 = 0.
	printf("offsetof(struct mystruct, a) = %d.\n", offsetof(struct mystruct, a));
	printf("(char *)&(s1.a) - (char *)&s1 = %d.\n", (char *)&(s1.a) - (char *)&s1);
	// offsetof(struct mystruct, b) = 4.
	// (char *)&(s1.b) - (char *)&s1 = 4.
	printf("offsetof(struct mystruct, b) = %d.\n", offsetof(struct mystruct, b));
	printf("(char *)&(s1.b) - (char *)&s1 = %d.\n", (char *)&(s1.b) - (char *)&s1);
	// offsetof(struct mystruct, c) = 8.
	// (char *)&(s1.c) - (char *)&s1 = 8.
	printf("offsetof(struct mystruct, c) = %d.\n", offsetof(struct mystruct, c));
	printf("(char *)&(s1.c) - (char *)&s1 = %d.\n", (char *)&(s1.c) - (char *)&s1);
	
	// 使用container_of宏
	struct mystruct s2 = 
	{
		.a = 'd',
		.b = 30,
		.c = 5,
	};
	// pS = 0xbfcc8350. &s2 = 0xbfcc8350.
	struct mystruct *pS = container_of(&(s2.a), struct mystruct, a);
	printf("pS = %p. &s2 = %p.\n", pS, &s2);
	
	return 0;
}