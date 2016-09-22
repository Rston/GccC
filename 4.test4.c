/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：结构化程序设计
 * 功能：算一下10！（10*9*8*7*····1）。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int i, val;
	
	for (i=1, val=1; i<11; i++)
	{
		printf("i = %d.\n", i);
		val *= i;
	}
	printf("val = %d.\n", val);
	
	return 0;
}