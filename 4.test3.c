/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：结构化程序设计
 * 功能：计算100以内所有奇数的和。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int i, sum;
	
	for (i=1, sum=0; i<100; i+=2)
	{
		printf("i = %d.\n", i);
		sum += i;
	}
	printf("sum = %d.\n", sum);
	
	return 0;
}