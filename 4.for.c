/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ���ṹ���������
 * ���ܣ���ʾfor����ṹ�Ļ���ʹ�á�
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int i, sum;					// ����i�ͱ���sum��ֵ�����ȷ����
	
	for (i=0, sum=0; i<10; i++)	// ��ִ��10��ѭ����
	{
		printf("i = %d.\n", i);
		sum += i;
	}
	
	return 0;
}