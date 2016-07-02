/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言函数传参详解
 * 功能：演示输入型参数和输出型参数。
 */
#include <stdio.h>

#if 0
void func1(const char *p);
#endif
void func2(char *p);

int main(int argc, char **argv)
{
	char *str = "linux";				// 字符串常量，定义在代码段中，不能更改
	char str_array[] = "linux";			// 字符数组变量，定义在数据段中，可以更改
	
	// 正常的传参
	#if 0
	func1(str);							// 编译报错，便于及时发现错误
	printf("str = %s.\n", str);
	#endif
	func2(str_array);
	printf("str_array = %s.\n", str_array);
	
	// 错误的传参
	func2(str);							// 编译木有任何提示，但运行出现段错误，这就比较郁闷了。
	printf("str_array = %s.\n", str_array);
	
	return 0;
}

#if 0
void func1(const char *p)
{										// 此处不应该改变*p的内容，所以编译报错，便于及时发现错误
	*p = 'a';							// error: assignment of read-only location ‘*p’
}
#endif

void func2(char *p)
{
	*p = 'b';
}