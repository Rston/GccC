/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ������ָ��Ͷ�ά����
 * ���ܣ���ʾ��ά��������ַ��ʷ�ʽ��
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a[2][3] = {{1, 2 ,3}, {4, 5, 6}};
	int i = 0, j = 0;
	
	// ͨ���±���ʶ�ά����
	for (i=0; i<2; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("a[%d][%d] = %d.\n", i, j, a[i][j]);	// a[0][0] = 1. a[0][1] = 2. a[0][2] = 3.
		}												// a[1][0] = 4. a[1][1] = 5. a[1][2] = 6.
	}

	// ͨ��ָ�뷽ʽ���ʶ�ά����
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