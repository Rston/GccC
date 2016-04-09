/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言预处理详解
 * 功能：条件编译#ifdef和#if是使用方法
 */
#include <stdio.h>

#define NUM
#define PRE 1

int main(int argc, char **argv)
{
	// 演示条件编译#ifdef的用法
	int a = 0;
	#ifdef NUM					// 若前面语句中有定义NUM该符号，则执行下面的语句
	a = 11;
	printf("#ifdef NUM.\n");
	#else						// 若前面语句中没有定义NUM该符号，则执行下面的语句
	a = 22;
	printf("#else\n");
	#endif
	printf("a = %d.\n", a);
	
	// 演示条件编译#if的用法
	int b = 0;
	#if (1 == PRE)				// 表达式成立，则执行下面的语句
	b = 55;
	printf("#if (1 == PRE).\n");
	#else						// 若表达式不成立，则执行下面的语句
	b = 66;
	printf("#else\n");
	#endif
	printf("b = %d.\n", b);	
	
	return 0;
}