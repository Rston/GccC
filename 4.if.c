/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ���ṹ���������
 * ���ܣ���ʾif else if����ṹ�Ļ���ʹ�á�
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 333, b = 33, max = 0;
	
	if (a > b)
	{
		max = a;
		printf("ture.\n");
	}
	else if (a == b)
	{
		max = a;
		printf("a==b.\n");
	}
	else
	{
		max = b;
		printf("false.\n");
	}
	printf("max=%d.\n", max);
	
	return 0;
}