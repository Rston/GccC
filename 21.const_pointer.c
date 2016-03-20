/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：野指针和const关键字
 * 功能：演示const关键字和指针结合的4种形式。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
/*
	int const *p1; 			// p1为指针变量指向可变，P1指向的变量只读
	const int *p2;			// p2为指针变量指向可变，P2指向的变量只读
	int * const p3;			// P3为指针变量只读，P3指向的变量的值可变
	const int * const p4;	// p4为指针变量只读，P4指向的变量只读
	
	int a = 5;
	
	*p1 = 10;				// error: assignment of read-only location ‘*p1’
	p1 = &a;				// 编译无错误无警告
	
	*p2 = 10;				//  error: assignment of read-only location ‘*p2’
	p2 = &a;				// 编译无错误无警告
	
	*p3 = 10;				// 编译无错误无警告
	p3  = &a;				// assignment of read-only variable ‘p3’
	
	*p4 = 10;				// assignment of read-only location ‘*p4’
	p4 = &a;				// assignment of read-only variable ‘p4’
*/	
	
	const int a = 8;
	//a = 6;				//  error: assignment of read-only variable ‘a’
	
	int *p = (int *)&a;		// 编译无错误无警告
	*p = 100;				// a = 100.
	printf("a = %d.\n", a);
	
	return 0;
}