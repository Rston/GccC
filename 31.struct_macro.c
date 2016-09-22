/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��offsetof����container_of��
 * ���ܣ���ʾoffsetof����container_of���ʹ�á�
 */
#include <stdio.h>

// offsetof�꣺����MEMBERԪ�����������TYPE���ͽṹ���׵�ַ��ƫ����
// ������TYPEΪĳ���ṹ�����ͣ�MEMBERΪTYPE���ͽṹ���е�ĳ��Ԫ��
#define offsetof(TYPE, MEMBER) ((int) &((TYPE *)0)->MEMBER)

// container_of�꣺���������ṹ�������ָ��
// ������ptrΪָ��ṹ����memberԪ�ص�ָ�룬typeΪĳ���ṹ�����ͣ�memberΪ�ýṹ���е�ĳ��Ԫ��
#define container_of(ptr, type, member) ({			\
	const typeof(((type *)0)->member) * __mptr = (ptr);	\
	(type *)((char *)__mptr - offsetof(type, member)); })

struct mystruct
{
	char a;			// ƫ����0
	int b;			// ƫ����4
	short c;		// ƫ����8	
};

int main(int argc, char **argv)
{
	// �ֶ�����ƫ������Ȼ��ͨ��ָ�뷽ʽ���ʽṹ��Ԫ��
	struct mystruct s1 = 
	{
		.a = 'c',
		.b = 20,
		.c = 8,
	};
	char *p1 = (char *)&s1;
	int *p2 = (int *)((char *)&s1 + 4);
	short int *p3 = (short int *)((char *)&s1 + 8);
	// *p1 = c. *p2 = 20. *p3 = 8.
	printf("*p1 = %c. *p2 = %d. *p3 = %d.\n", *p1, *p2, *p3);

	// ʹ��offsetof��
	// offsetof(struct mystruct, a) = 0.
	// (char *)&(s1.a) - (char *)&s1 = 0.
	printf("offsetof(struct mystruct, a) = %d.\n", offsetof(struct mystruct, a));
	printf("(char *)&(s1.a) - (char *)&s1 = %d.\n", (char *)&(s1.a) - (char *)&s1);
	// offsetof(struct mystruct, b) = 4.
	// (char *)&(s1.b) - (char *)&s1 = 4.
	printf("offsetof(struct mystruct, b) = %d.\n", offsetof(struct mystruct, b));
	printf("(char *)&(s1.b) - (char *)&s1 = %d.\n", (char *)&(s1.b) - (char *)&s1);
	// offsetof(struct mystruct, c) = 8.
	// (char *)&(s1.c) - (char *)&s1 = 8.
	printf("offsetof(struct mystruct, c) = %d.\n", offsetof(struct mystruct, c));
	printf("(char *)&(s1.c) - (char *)&s1 = %d.\n", (char *)&(s1.c) - (char *)&s1);
	
	// ʹ��container_of��
	struct mystruct s2 = 
	{
		.a = 'd',
		.b = 30,
		.c = 5,
	};
	// pS = 0xbfcc8350. &s2 = 0xbfcc8350.
	struct mystruct *pS = container_of(&(s2.a), struct mystruct, a);
	printf("pS = %p. &s2 = %p.\n", pS, &s2);
	
	return 0;
}