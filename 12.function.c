/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ����������Ϊɶ��Ҫ�ڴ�
 * ���ܣ�ʹ�ú������"�������е�Ŀ�ľ��ǵõ���������"��
 */
#include <stdio.h>

// �ú�����ִ�����ڵõ����
int add(int a, int b)
{
	return (a + b);				
}

// �ú�����ִ���������й��̣�����Ҫ����ֵ
void add(int a, int b)
{
	int c = 0;
	
	c = a + b;
	printf("c = %d.\n", c);
}

// �ú�����ִ�м��ؽ�����ع���
int add(int a, int b)
{
	int c = 0;
	
	c = a + b;
	printf("c = %d.\n", c);
	
	return c;
}