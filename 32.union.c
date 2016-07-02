/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：共同体和大小端及枚举
 * 功能：测试共用体的基本特性。
 */
#include <stdio.h>

// 结构体类型定义
struct mystruct
{
	int a;
	char b;
};

// 共用体类型定义
union myunion
{
	int a;
	char b;
};

// 使用sizeof测试union
typedef union xx
{
	int a;
	char b;
}xxx;

// 测试同一内存空间使用不同方式去解析
union test
{
	int a;
	float b;
};

int main(int argc, char **argv)
{
	// 测试结构体类型
	struct mystruct s1;
	s1.a = 88;
	printf("s1.b = %d.\n", s1.b);							// s1.b = -119.
	printf("&s1.a = %p. &s1.b = %p.\n", &s1.a, &s1.b);		// &s1.a = 0xbfa5c674. &s1.b = 0xbfa5c678.
	
	// 测试共用体类型
	union myunion u1;
	u1.a = 88;
	printf("u1.b = %d.\n", u1.b);							// u1.b = 88.
	printf("&u1.a = %p. &u1.b = %p.\n", &u1.a, &u1.b);		// &u1.a = 0xbfa5c67c. &u1.b = 0xbfa5c67c.
	
	// 使用sizeof测试
	printf("sizeof(union xx) = %d.\n", sizeof(union xx));	// sizeof(union xx) = 4.
	printf("sizeof(xxx) = %d.\n", sizeof(xxx));				// sizeof(xxx) = 4.
	
	// 测试同一内存空间使用不同方式去解析
	union test t1;
	t1.a = 1123477881;
	printf("t1.b = %f.\n", t1.b);							// t1.b = 123.456001.
	
	// 使用指针和强制类型转换替代共用体 
	int a = 1123477881;
	printf("*((float *)&a) = %f.\n", *((float *)&a));		// *((float *)&a) = 123.456001.
	
	return 0;
}