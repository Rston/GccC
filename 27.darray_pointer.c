/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ������ָ��Ͷ�ά����
 * ���ܣ���ʾ��ά�����ָ��ľ���
 */
#include <stdio.h> 

int main(int argc, char **argv)
{
	int array[3][2] = {{1, 2}, {3, 4}, {5, 6}};
	int i = 0, j = 0;
	
	// ָ��ָ���ά�����������
	int (*p1)[2] = array;
	for (i=0; i<3; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("*(*(p1+%d)+%d) = %d.\n", i, j, *(*(p1+i)+j));
		}
	}
	
	// ָ��ָ���ά����ĵ�һά
	int *p2 = array[0];
	printf("*(p2+1) = %d.\n", *(p2+1));		// *(p2+1) = 2.

	// ָ��ָ���ά����ĵڶ�ά
	int *p3 = &array[0][0];
	printf("*(p3+1) = %d.\n", *(p3+1));		// *(p3+1) = 2.
	
	return 0;
}