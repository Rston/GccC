/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ�������ı��ʼ�����ʹ��
 * ���ܣ���ʾ�ݹ�ʵ�ֽ׳˺�쳲��������С�
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 5;
	// The factorial of 5 is 120.
	printf("The factorial of %d is %d.\n", a, factorial(a));	
	
	int b = 3;
	// The 3th's value of fibonacci is 2.
	printf("The %dth's value of fibonacci is %d.\n", b, fibonacci(b));
	
	return 0;
}

// �׳�
int factorial(int n)
{
	if (n < 1)
	{
		printf("The value of n must >= 1.\n");
		return -1;
	}
	
	if (1 == n)
	{
		return 1;
	}
	else 
	{
		return (n * factorial(n-1));
	}
}

// 쳲���������
int fibonacci(int n)
{
	if (n < 0)
	{
		printf("The value of n must >= 0.\n");
		return -1;
	}
	else if (0 == n)
	{
		return 0;
	}
	else if ((1==n) || (2==n))
	{
		return 1;
	}
	else
	{
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}
