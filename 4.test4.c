/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ���ṹ���������
 * ���ܣ���һ��10����10*9*8*7*��������1����
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int i, val;
	
	for (i=1, val=1; i<11; i++)
	{
		printf("i = %d.\n", i);
		val *= i;
	}
	printf("val = %d.\n", val);
	
	return 0;
}