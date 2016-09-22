/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：结构化程序设计
 * 功能：给三个数，打印其中最大的数。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 5, b = 3, c = 8, max = 0;
	
	if (a >= b)	// 先比较两个数，然后把较大的数与剩下的数比较
	{
		// a和b中，a较大
		if (a >= c)
		{
			max = a;
		}
		else 
		{
			max = c;
		}
	}
	else
	{
		// a和b中，b较大
		if (b >= c)
		{
			max = b;
		}
		else 
		{
			max = c;
		}
	}
	printf("a = %d b = %d c = %d max = %d.\n", a, b, c, max);
	
	return 0;
}