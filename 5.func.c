/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：函数
 * 功能：简易计算器。
 */
#include <stdio.h>

// 函数声明
int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(int argc, char **argv)
{
	int a = 12, b = 10;
	
	// 函数调用
	printf("a = %d. b = %d. add(a, b) = %d.\n", a, b, add(a, b));
	printf("a = %d. b = %d. sub(a, b) = %d.\n", a, b, sub(a, b));
	printf("a = %d. b = %d. multiply(a, b) = %d.\n", a, b, multiply(a, b));
	printf("a = %d. b = %d. divide(a, b) = %d.\n", a, b, divide(a, b));
	
	return 0;
}

// 函数定义，实现加法
int add(int a, int b)
{
	return (a + b);
}

// 函数定义，实现减法
int sub(int a, int b)
{
	return (a - b);
}

// 函数定义，实现乘法
int multiply(int a, int b)
{
	return (a * b);
}

// 函数定义，实现除法
int divide(int a, int b)
{
	return (a / b);
}