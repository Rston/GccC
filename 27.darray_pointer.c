/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：二重指针和二维数组
 * 功能：演示二维数组和指针的纠葛
 */
#include <stdio.h> 

int main(int argc, char **argv)
{
	int array[3][2] = {{1, 2}, {3, 4}, {5, 6}};
	int i = 0, j = 0;
	
	// 指针指向二维数组的数组名
	int (*p1)[2] = array;
	for (i=0; i<3; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("*(*(p1+%d)+%d) = %d.\n", i, j, *(*(p1+i)+j));
		}
	}
	
	// 指针指向二维数组的第一维
	int *p2 = array[0];
	printf("*(p2+1) = %d.\n", *(p2+1));		// *(p2+1) = 2.

	// 指针指向二维数组的第二维
	int *p3 = &array[0][0];
	printf("*(p3+1) = %d.\n", *(p3+1));		// *(p3+1) = 2.
	
	return 0;
}