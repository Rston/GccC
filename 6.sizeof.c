/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：C语言之数组
 * 功能：sizeof运算符。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	// sizeof测试变量占用内存长度 
	double a = 15.0;
	printf("sizeof(a) = %d.\n", sizeof(a));				// sizeof(a) = 8.
	
	// sizeof测试数据类型占用内存长度
	printf("sizeof(char) = %d.\n", sizeof(char));		// sizeof(char) = 1.
	printf("sizeof(short) = %d.\n", sizeof(short));		// sizeof(short) = 2.
	printf("sizeof(int) = %d.\n", sizeof(int));			// sizeof(int) = 4.
	printf("sizeof(long) = %d.\n", sizeof(long));		// sizeof(long) = 4.
	printf("sizeof(float) = %d.\n", sizeof(float));		// sizeof(float) = 4.
	printf("sizeof(double) = %d.\n", sizeof(double));	// sizeof(double) = 8.
	
	// sizeof测试数组占用内存长度 
	int b[5];											// sizeof(b) = 20. sizeof(b)/sizeof(b[0]) = 5.
	printf("sizeof(b) = %d. sizeof(b)/sizeof(b[0]) = %d.\n", sizeof(b), sizeof(b)/sizeof(b[0]));
	
	return 0;
}