/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��C����ָ֮��
 * ���ܣ�ʹ��ָ�����Ӻ����н�����������ֵ��
 */
#include <stdio.h>

// ��������
int swap(int a, int b);
int swap_pointer(int *p1, int *p2);

int main(int argc, char **argv)
{
	int x =3, y = 5;
	
	printf("bfore swap: x = %d. y = %d.\n", x, y);
	swap(x, y);
	printf("after swap: x = %d. y = %d.\n", x, y);
	
	printf("bfore swap_pointer: x = %d. y = %d.\n", x, y);
	swap_pointer(&x, &y);
	printf("after swap_pointer: x = %d. y = %d.\n", x, y);
	
	return 0;
}

// ͨ����ֵ��ʽ���ν�����������
int swap(int a, int b)
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	
	return 0;
}

// ͨ������ַ��ʽ������������
int swap_pointer(int *p1, int *p2)
{
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	
	return 0;
}