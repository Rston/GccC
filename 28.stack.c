/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言内存管理机制
 * 功能：演示栈内存是脏的和爆栈。
 */
#include <stdio.h>

int *func1(void)
{
	int a = 10;
	printf("in func1 &a = %p.\n", &a); 	// in func1 &a = 0xbfa45b2c.
	return &a;							// warning: function returns address of local variable [enabled by default]
}										// 函数试图返回临时变量即栈变量的地址，编译报警
 
void func2(void)
{
	int array[3] = {44, 44, 44};
	printf("in func2 &array[2] = %p.\n", &array[2]);	// int func2 &array[2] = 0xbfa45b2c.
}

// 使用递归爆栈
void func3(void)
{
	int a = 4;
	func3();
}

// 定义数组爆栈
void func4(void)
{
	int array[10000000] = {0};
	array[10000000 - 1] = 44;
}
 
int main(int argc, char **argv)
{
	// 演示栈内存是脏的
	int *p = func1();	
	printf("*p = %d.\n", *p);			// *p = 10.
	func2();							
	printf("*p = %d.\n", *p);			// *p = 44. 说明栈内存是脏的，函数不应该返回栈变量的指针。
	
	// 演示爆栈
	printf("即将爆栈\n");				// 即将爆栈
	//func3();							// Segmentation fault (core dumped)栈被爆了，程序访问到不该访问的内存空间
	func4();							// Segmentation fault (core dumped)
	
	return 0;
}