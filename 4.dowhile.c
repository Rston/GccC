/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：结构化程序设计
 * 功能：演示do while程序结构的基本使用。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 1, sum = 0;
	
	do 
	{
		printf("i = %d.\n", i);
		sum += i;
		i += 2;
	}while (i < 100); // 特别注意这里需要加上分号
	printf("sum = %d.\n", sum);
	
	return 0;
}