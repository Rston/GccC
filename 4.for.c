/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：程序结构：for 
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int i, sum;					// 变量i和变量sum的值随机不确定。
	
	for (i=0, sum=0; i<10; i++)	// 共执行10次循环体
	{
		printf("i = %d.\n", i);
		sum += i;
	}
	
	return 0;
}