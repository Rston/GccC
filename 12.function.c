/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：程序运行为啥需要内存
 * 功能：使用函数类比"程序运行的目的就是得到结果或过程"。
 */
#include <stdio.h>

// 该函数的执行重在得到结果
#if 0
int add(int a, int b)
{
	return (a + b);				
}
#endif

// 该函数的执行重在运行过程，不需要返回值
#if 0
void add(int a, int b)
{
	int c = 0;
	
	c = a + b;
	printf("c = %d.\n", c);
}
#endif

// 该函数的执行既重结果又重过程
#if 0
int add(int a, int b)
{
	int c = 0;
	
	c = a + b;
	printf("c = %d.\n", c);
	
	return c;
}
#endif

int main(int argc, char **argv)
{
	printf("I am Rston.\n");
	
	return 0;
}