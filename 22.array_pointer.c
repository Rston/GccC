/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ�������ָ�����Ե
 * ���ܣ���ʾ���������ʵ��
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a[5] = {1, 2, 3, 4, 5};
	
	printf("a[1] = %d.\n", a[1]);				// a[1] = 2.	ͨ���±�ķ�ʽ��������
	printf("*(a+1) = %d.\n", *(a+1));			// *(a+1) = 2.	ͨ��ָ��ķ�ʽ��������
	
	int *p1 = a;								// ������a����ֵʱ��ʾ������Ԫ�ص��׵�ַ
	printf("*p1 = %d.\n", *p1);					// *p1 = 1.

	int *p2 = &a[0];							// &a[0]����ֵʱ��ʾ������Ԫ�ص��׵�ַ
	printf("*p2 = %d.\n", *p2);					// *p2 = 1.
	
	
	int array[5] = {5, 6, 7, 8, 9};
	int *pointer = array;					
	
	// *(array+1) = 6.
	printf("*(array+1) = %d.\n", *(array+1));	
	// *((unsigned char *)array + 1) = 0.
	printf("*((unsigned char *)array + 1) = %d.\n", *((unsigned char *)array + 1));	
	
	return 0;
}