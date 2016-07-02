/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言结构体对齐访问
 * 功能：演示结构体定义和访问及结构体对齐问题。
 */
#include <stdio.h>

// 定义结构体类型
struct people 
{
	char name[20];
	int age;
};

// 定义结构体类型的同时定义变量
struct student
{
	char name[20];
	int age;
}s1;

// 使用typedef将类型struct friend重命名为friend
// 共定义了1种类型，有2个名字：struct friend和friend
typedef struct friend
{
	char name[20];
	int age;
}friend;

// 演示结构体访问方式的本质
struct mystruct
{
	int a;
	double b;
	char c;
};

// 初步演示结构体对齐访问
struct align
{
	char c;			// c实际占4字节内存空间
	int b;			// b实际占4字节内存空间
};

int main(int argc, char **argv)
{
	struct people person;					// 使用结构体类型定义变量
	
	s1.age = 8;								// 定义结构体类型的同时定义变量
	printf("s1.age = %d.\n", s1.age);		// s1.age = 8.
	struct student s2;										
	s2.age = 10;
	printf("s2.age = %d.\n", s2.age);		//	s2.age = 10.
	
	friend s3;								// 使用typedef将类型struct student重命名为student
	s3.age = 15;
	printf("s3.age = %d.\n", s3.age);		//	s3.age = 15.
	
	struct mystruct access;
	access.a = 10;							// 等价于int *p = (int *)&access; *p = 10;
	int *p1 = (int *)&access;
	printf("*p1 = %d.\n", *p1);				// *p1 = 10.
	
	access.b = 4.40;						// 等价于double *p = (double *)((int)&access + 4); *p = 4.40; 
	double *p2 = (double *)((int)&access + 4);
	printf("*p2 = %lf.\n", *p2);			// *p2 = 4.400000.
	
	access.c = 'f';							// 等价于char *p = (char *)((int)&access + 12); *p = 'f';
	char *p3 = (char *)((int)&access + 12);
	printf("*p3 = %c.\n", *p3);				// *p3 = f.
	
	struct align t;							// 初步演示结构体对齐访问
	t.c = 'g';
	t.b = 40;
	printf("sizeof(struct align) = %d.\n", sizeof(struct align));
	char *p4 = (char *)&t;					// sizeof(struct align) = 8.
	printf("*p4 = %c.\n", *p4);				// *p4 = g.
	int *p5 = (int *)((int)&t + 4);
	printf("*p5 = %d.\n", *p5);				// *p5 = 40.
	
	return 0;
}