/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C����Ԥ�������
 * ���ܣ���������#ifdef��#if��ʹ�÷�����
 */
#include <stdio.h>

#define NUM
#define PRE 1

int main(int argc, char **argv)
{
	// ��ʾ��������#ifdef���÷�
	int a = 0;
	#ifdef NUM					// ��ǰ��������ж���NUM�÷��ţ���ִ����������
	a = 11;
	printf("#ifdef NUM.\n");
	#else						// ��ǰ�������û�ж���NUM�÷��ţ���ִ����������
	a = 22;
	printf("#else\n");
	#endif
	printf("a = %d.\n", a);
	
	// ��ʾ��������#if���÷�
	int b = 0;
	#if (1 == PRE)				// ���ʽ��������ִ����������
	b = 55;
	printf("#if (1 == PRE).\n");
	#else						// �����ʽ����������ִ����������
	b = 66;
	printf("#else\n");
	#endif
	printf("b = %d.\n", b);	
	
	return 0;
}