/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：程序结构：switch case 
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