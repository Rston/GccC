/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：待定
 * 功能：演示二重指针的用法
 */
#include <stdio.h>
 
void func(int **p)
{
	*p = (int *)0x12345678;
} 
 
int main(int argc, char **argv)
{
	// 二重指针指向一重指针的地址
	int a = 10;
	int *p1 = &a;		// 一重指针，指针指向的变量类型为int类型
	int **p2 = &p1;		// 二重指针，指针指向的变量类型为int *类型
	printf("*p1 = %d. **p2 = %d.\n", *p1, **p2);	// *p1 = 10. **p2 = 10.
	
	// 二重指针指向指针数组
	int c = 12, d = 15;	
	int *p3 = &c, *p4 = &d;
	int *array[2] = {p3, p4};	// 定义指针数组，数组元素为int *类型
	int **p5 = array;			// 数组名array做右值时表示数组首元素首地址，即int **类型
	printf("**p5 = %d. **(p5+1) = %d.\n", **p5, **(p5+1));	// **p5 = 12. **(p5+1) = 15.
	
	// 在某个函数内部通过二重指针传参改变一重指针的指向
	int f = 20;
	int *p6 = &f;
	printf("p6 = %p.\n", p6);	// p6 = 0xbfd2f3b8.
	func(&p6);
	printf("p6 = %p.\n", p6);	// p6 = 0x12345678.
	
	return 0;
}