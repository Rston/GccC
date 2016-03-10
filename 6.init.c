/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：数组
 * 功能：数组的初始化。
 */
#include <stdio.h>

int main(char argc, char **argv)
{
	int i = 0;
	
	//int a[3] = {1, 2, 3};		// 完全初始化，a[0]~a[2]为1、2、3
	//int a[3] = {};			// 不完全初始化，a[0]~a[2]为0、0、0
	//int a[3] = {1};			// 不完全初始化，a[0]~a[2]为1、0、0
	//int a[3];					// 无初始化，a[0]~a[2]为随机值
	int a[3] = {1, [2] = 9}; 	// gcc特有的初始化a[0]~a[2]为1、0、9
	
	for (i=0; i<3; i++)
	{
		printf("a[%d] = %d.\n", i, a[i]);
	}
	
	return 0;
}