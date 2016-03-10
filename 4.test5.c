/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：结构化程序设计
 * 功能：打印一张ASCII码表（提示：数字用%d，字符用%c打印）。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	
	printf("----ASCII----\n");
	for (i=0; i<128; i++)				// ASCII数值0到127分别对应的字符
	{
		printf("\t%d \t%c\n", i, i);	// \t制表符用于格式对齐
	}
	printf("----ASCII----\n");
	
	return 0;
}