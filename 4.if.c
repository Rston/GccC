/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：结构化程序设计
 * 功能：演示if else if程序结构的基本使用。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 333, b = 33, max = 0;
	
	if (a > b)
	{
		max = a;
		printf("ture.\n");
	}
	else if (a == b)
	{
		max = a;
		printf("a==b.\n");
	}
	else
	{
		max = b;
		printf("false.\n");
	}
	printf("max=%d.\n", max);
	
	return 0;
}