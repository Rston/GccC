/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C����֮����
 * ���ܣ�sizeof�������
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	// sizeof���Ա���ռ���ڴ泤�� 
	double a = 15.0;
	printf("sizeof(a) = %d.\n", sizeof(a));				// sizeof(a) = 8.
	
	// sizeof������������ռ���ڴ泤��
	printf("sizeof(char) = %d.\n", sizeof(char));		// sizeof(char) = 1.
	printf("sizeof(short) = %d.\n", sizeof(short));		// sizeof(short) = 2.
	printf("sizeof(int) = %d.\n", sizeof(int));			// sizeof(int) = 4.
	printf("sizeof(long) = %d.\n", sizeof(long));		// sizeof(long) = 4.
	printf("sizeof(float) = %d.\n", sizeof(float));		// sizeof(float) = 4.
	printf("sizeof(double) = %d.\n", sizeof(double));	// sizeof(double) = 8.
	
	// sizeof��������ռ���ڴ泤�� 
	int b[5];											// sizeof(b) = 20. sizeof(b)/sizeof(b[0]) = 5.
	printf("sizeof(b) = %d. sizeof(b)/sizeof(b[0]) = %d.\n", sizeof(b), sizeof(b)/sizeof(b[0]));
	
	return 0;
}