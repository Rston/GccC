/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ���������ͺ�sizeof�����
 * ���ܣ���ʾ�����������͵Ĵ�ȡ��ʽ����һ�¡�
 */
#include <stdio.h>
 
int main(int argc, char **argv)
{
	int a = 5;
	printf("a = %d.\n", a);					// a = 5.	
	printf("a = %f.\n", (float)a);			// a = -0.000000.���룬����int���ʹ棬����float����ȡ��
	
	int b = 5;
	int *p1 = &b;
	float *p2 = (float *)&b;
	printf("*p1 = %d.\n", *p1);				// *p1 = 5
	printf("*p2 = %f.\n", *p2);				// *p2 = 0.000000. ����*p1��*P2�ֱ���int���ͺ�float����ȡ
	
	int c = 193;
	int *p3 = &c;
	char *p4 = (char *)&c;
	printf("*p3 = %d.\n", *p3);				// *p3 = 193.
	printf("*p4 = %c.\n", *p4);				// *p4 = ?.	��int�ʹ�ŵĶ�������������char�ͷ�Χ����char�ͽ���ʱ����

	int d = 127;
	int *p5 = &d;							
	char *p6 = (char *)&d;					
	printf("*p5 = %d.\n", *p5);				// *p5 = 127.			
	printf("*P6 = %d.\n", *p6);				// *P6 = 127.
	printf("*(p6+1) = %d.\n", *(p6+1));		// *(p6+1) = 0.
	printf("*(p6+2) = %d.\n", *(p6+2));		// *(p6+2) = 0.
	printf("*(p6+3) = %d.\n", *(p6+3));		// *(p6+3) = 0.
	
	return 0 ;
}