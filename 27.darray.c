/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：二重指针和二维数组
 * 功能：演示二维数组的两种访问方式。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a[2][3] = {{1, 2 ,3}, {4, 5, 6}};
	int i = 0, j = 0;
	
	// 通过下标访问二维数组
	for (i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("a[%d][%d] = %d.\n", i, j, a[i][j]);	// a[0][0] = 1. a[0][1] = 2. a[0][2] = 3.
		}												// a[1][0] = 4. a[1][1] = 5. a[1][2] = 6.
	}

	// 通过指针方式访问二维数组
	int (*p)[3] = a;
	for (i=0; i<2; i++)
	{
		for (j=0; j<3; j++)									 
		{
			printf("a[%d][%d] = %d.\n", i, j, *(*(a+i)+j));	// a[0][0] = 1. a[0][1] = 2. a[0][2] = 3.
			printf("a[%d][%d] = %d.\n", i, j, *(*(p+i)+j));	// a[1][0] = 4. a[1][1] = 5. a[1][2] = 6.
		}													
	}
	
	return 0;
}