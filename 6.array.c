/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言之数组
 * 功能：定义并初始化数组然后进行引用。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a[4] = {1, 2, 3, 4};	// 定义一个整型数组，里面有4个整型变量
	
	int i;
	
	for (i=0; i<4; i++)			// 通过a[i]引用数组中的整型变量
	{
		printf("a[%d] = %d.\n", i, a[i]);
	}
	
	return 0;
}