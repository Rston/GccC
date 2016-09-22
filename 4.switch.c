/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：结构化程序设计
 * 功能：演示switch case程序结构的基本使用。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int num = 3;
	
	switch (num)
	{
		case 1: printf("A\n"); break;
		case 2: printf("B\n"); break;
		case 3: printf("C\n"); break;
		case 4: printf("D\n"); break;
		case 5: printf("E\n"); break;
		default: break;
	}
	
	return 0;
}