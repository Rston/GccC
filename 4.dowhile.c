/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：程序结构：do while 
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