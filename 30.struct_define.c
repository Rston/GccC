/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��C���Խṹ��������
 * ���ܣ���ʾ�ṹ�嶨��ͷ��ʼ��ṹ��������⡣
 */
#include <stdio.h>

// ����ṹ������
struct people 
{
	char name[20];
	int age;
};

// ����ṹ�����͵�ͬʱ�������
struct student
{
	char name[20];
	int age;
}s1;

// ʹ��typedef������struct friend������Ϊfriend
// ��������1�����ͣ���2�����֣�struct friend��friend
typedef struct friend
{
	char name[20];
	int age;
}friend;

// ��ʾ�ṹ����ʷ�ʽ�ı���
struct mystruct
{
	int a;
	double b;
	char c;
};

// ������ʾ�ṹ��������
struct align
{
	char c;			// cʵ��ռ4�ֽ��ڴ�ռ�
	int b;			// bʵ��ռ4�ֽ��ڴ�ռ�
};

int main(int argc, char **argv)
{
	struct people person;					// ʹ�ýṹ�����Ͷ������
	
	s1.age = 8;								// ����ṹ�����͵�ͬʱ�������
	printf("s1.age = %d.\n", s1.age);		// s1.age = 8.
	struct student s2;										
	s2.age = 10;
	printf("s2.age = %d.\n", s2.age);		//	s2.age = 10.
	
	friend s3;								// ʹ��typedef������struct student������Ϊstudent
	s3.age = 15;
	printf("s3.age = %d.\n", s3.age);		//	s3.age = 15.
	
	struct mystruct access;
	access.a = 10;							// �ȼ���int *p = (int *)&access; *p = 10;
	int *p1 = (int *)&access;
	printf("*p1 = %d.\n", *p1);				// *p1 = 10.
	
	access.b = 4.40;						// �ȼ���double *p = (double *)((int)&access + 4); *p = 4.40; 
	double *p2 = (double *)((int)&access + 4);
	printf("*p2 = %lf.\n", *p2);			// *p2 = 4.400000.
	
	access.c = 'f';							// �ȼ���char *p = (char *)((int)&access + 12); *p = 'f';
	char *p3 = (char *)((int)&access + 12);
	printf("*p3 = %c.\n", *p3);				// *p3 = f.
	
	struct align t;							// ������ʾ�ṹ��������
	t.c = 'g';
	t.b = 40;
	printf("sizeof(struct align) = %d.\n", sizeof(struct align));
	char *p4 = (char *)&t;					// sizeof(struct align) = 8.
	printf("*p4 = %c.\n", *p4);				// *p4 = g.
	int *p5 = (int *)((int)&t + 4);
	printf("*p5 = %d.\n", *p5);				// *p5 = 40.
	
	return 0;
}