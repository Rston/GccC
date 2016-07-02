/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：静态链接库和动态链接库
 * 功能：自己制作动态链接库。
 */
#include <stdio.h>

// 简单的加法函数
int add(int a, int b)
{
	printf("func add in rston.c.\n");
	return (a + b);
}