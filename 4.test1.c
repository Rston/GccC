/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ���ṹ���������
 * ���ܣ�������������ӡ������������
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 5, b = 3, c = 8, max = 0;
	
	if (a >= b)	// �ȱȽ���������Ȼ��ѽϴ������ʣ�µ����Ƚ�
	{
		// a��b�У�a�ϴ�
		if (a >= c)
		{
			max = a;
		}
		else 
		{
			max = c;
		}
	}
	else
	{
		// a��b�У�b�ϴ�
		if (b >= c)
		{
			max = b;
		}
		else 
		{
			max = c;
		}
	}
	printf("a = %d b = %d c = %d max = %d.\n", a, b, c, max);
	
	return 0;
}