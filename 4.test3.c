/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ���ṹ���������
 * ���ܣ�����100�������������ĺ͡�
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int i, sum;
	
	for (i=1, sum=0; i<100; i+=2)
	{
		printf("i = %d.\n", i);
		sum += i;
	}
	printf("sum = %d.\n", sum);
	
	return 0;
}