/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C���Ժ����������
 * ���ܣ���ʾ��ͨ�����ͽṹ������ں����д��Ρ�
 */

#include <stdio.h>

struct A
{
	int e;
	char f;
};

void func2(struct A *b)
{
	printf("&b = %p.\n", &b);		// &b = 0xbffaafb0
	printf("b->e = %d.\n", b->e);	// b->e = 10.
	printf("b->f = %d.\n", b->f);	// b->f = 1.
}

void func1(int b)
{
	printf("b = %d.\n", b);			// &b = 0xbff2adf0.
	printf("&b = %p.\n", &b);		// b = 2.
}

int main(int argc, char **argv)
{
	int a = 2;
	func1(a);
	printf("&a = %p.\n", &a);		// &a = 0xbff2ae0c.
	
	struct A d = 
	{
		.e = 10,
		.f = 1,
	};
	func2(&d);
	printf("&d = %p.\n", &d);		// &d = 0xbffaafc4.
	printf("d.e = %d.\n", d.e);		// d.e = 10.
	printf("d.f = %d.\n", d.f);		// d.f = 1.
	
	return 0;
}