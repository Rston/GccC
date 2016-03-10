/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：程序结构：if else if 
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