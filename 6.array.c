/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C����֮����
 * ���ܣ����岢��ʼ������Ȼ��������á�
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a[4] = {1, 2, 3, 4};	// ����һ���������飬������4�����ͱ���
	
	int i;
	
	for (i=0; i<4; i++)			// ͨ��a[i]���������е����ͱ���
	{
		printf("a[%d] = %d.\n", i, a[i]);
	}
	
	return 0;
}