/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ����ͬ��ʹ�С�˼�ö��
 * ���ܣ����Թ�����Ļ������ԡ�
 */
#include <stdio.h>

// �ṹ�����Ͷ���
struct mystruct
{
	int a;
	char b;
};

// ���������Ͷ���
union myunion
{
	int a;
	char b;
};

// ʹ��sizeof����union
typedef union xx
{
	int a;
	char b;
}xxx;

// ����ͬһ�ڴ�ռ�ʹ�ò�ͬ��ʽȥ����
union test
{
	int a;
	float b;
};

int main(int argc, char **argv)
{
	// ���Խṹ������
	struct mystruct s1;
	s1.a = 88;
	printf("s1.b = %d.\n", s1.b);							// s1.b = -119.
	printf("&s1.a = %p. &s1.b = %p.\n", &s1.a, &s1.b);		// &s1.a = 0xbfa5c674. &s1.b = 0xbfa5c678.
	
	// ���Թ���������
	union myunion u1;
	u1.a = 88;
	printf("u1.b = %d.\n", u1.b);							// u1.b = 88.
	printf("&u1.a = %p. &u1.b = %p.\n", &u1.a, &u1.b);		// &u1.a = 0xbfa5c67c. &u1.b = 0xbfa5c67c.
	
	// ʹ��sizeof����
	printf("sizeof(union xx) = %d.\n", sizeof(union xx));	// sizeof(union xx) = 4.
	printf("sizeof(xxx) = %d.\n", sizeof(xxx));				// sizeof(xxx) = 4.
	
	// ����ͬһ�ڴ�ռ�ʹ�ò�ͬ��ʽȥ����
	union test t1;
	t1.a = 1123477881;
	printf("t1.b = %f.\n", t1.b);							// t1.b = 123.456001.
	
	// ʹ��ָ���ǿ������ת����������� 
	int a = 1123477881;
	printf("*((float *)&a) = %f.\n", *((float *)&a));		// *((float *)&a) = 123.456001.
	
	return 0;
}