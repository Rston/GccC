/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C����֮�����ͳ���
 * ���ܣ���̬�ֲ������;ֲ�����������
 */
#include <stdio.h>

// ��������
int func_auto(void);
int func_static(void);

int main(int argc, char **argv)
{
	int i = 0;
	
	for (i=0; i<5; i++)
	{
		func_auto();		// �ֱ���������5��func_auto��func_static��������
		func_static();
		printf("call function times is %d.\n", i);
	}
	
	return 0;
}

int func_auto(void)
{
	int a = 1;				// ������ͨ����a
	
	printf("a = %d.\n", ++a);
	
	return 0;
}

int func_static(void)
{
	static int b = 1;		// ���徲̬�ֲ�����b
	
	printf("b = %d.\n", ++b);
	
	return 0;
}