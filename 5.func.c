/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C����֮����
 * ���ܣ����׼�������
 */
#include <stdio.h>

// ��������
int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(int argc, char **argv)
{
	int a = 12, b = 10;
	
	// ��������
	printf("a = %d. b = %d. add(a, b) = %d.\n", a, b, add(a, b));
	printf("a = %d. b = %d. sub(a, b) = %d.\n", a, b, sub(a, b));
	printf("a = %d. b = %d. multiply(a, b) = %d.\n", a, b, multiply(a, b));
	printf("a = %d. b = %d. divide(a, b) = %d.\n", a, b, divide(a, b));
	
	return 0;
}

// �������壬ʵ�ּӷ�
int add(int a, int b)
{
	return (a + b);
}

// �������壬ʵ�ּ���
int sub(int a, int b)
{
	return (a - b);
}

// �������壬ʵ�ֳ˷�
int multiply(int a, int b)
{
	return (a * b);
}

// �������壬ʵ�ֳ���
int divide(int a, int b)
{
	return (a / b);
}