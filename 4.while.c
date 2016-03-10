/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：程序结构：while
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 1, sum = 0;
	
	while (i < 100)
	{
		printf("i = %d.\n", i);
		sum += i;
		i += 2;
	}
	printf("sum = %d.\n", sum);
	
	return 0;
}