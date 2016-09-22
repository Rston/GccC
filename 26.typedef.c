/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ������ָ��ʵս��typedef
 * ���ܣ���ʾtypedef�ĸ����÷���
 */
#include <stdio.h>

// �������������ͣ�
// 1��Ϊ�ṹ�����ͣ���2�����֣�struct teacher��teacher
// 1��Ϊ�ṹ��ָ�����ͣ���2�����֣�struct teacher *��pTeacher��
typedef struct teacher
{
	char name[20];
	int age;
}teacher, *pTeacher;

// typedef��const���
typedef int *PINT;
typedef int const *CPINT;



int main(int argc, char **argv)
{
	teacher t1 = 			// ����ṹ�����
	{
		.name = "Rston",
		.age = 25,
	};
	pTeacher p = &t1;		// ����ṹ��ָ�����
	
	// p->name = Rston. p->age = 25.
	printf("p->name = %s. p->age = %d.\n", p->name, p->age);	
	
	int a = 5, b = 6;
	const PINT p1 = &a;
	*p1 = 10;
	printf("*p1 = %d.\n", *p1);	// *p1 = 10.
	// p1 = &b;					// error: assignment of read-only variable ��p1��
	
	const PINT p2 = &a;
	*p2 = 15;
	printf("*p2 = %d.\n", *p2);	// *p2 = 15.
	//p2 = &b;					// error: assignment of read-only variable ��p2��
	
	CPINT p3 = &a;			
	//*p3 = 18;					// error: assignment of read-only location ��*p3��
	printf("*p3 = %d.\n", *p3);	// *p3 = 15.
	p3 = &b;
	
	return 0;
}