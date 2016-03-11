/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：指针
 * 功能：指针和数组结合。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a[5] = {1, 2, 3, 4, 5};
	int *p1;
	int (*p2)[5];
	
	// *p1 = 1. p1 = 0xbfb24c84.
	p1 = a;
	printf("*p1 = %d. p1 = %p.\n", *p1, p1);		 // 数组名a做右值代表该数组首元素首地址
	
	// *p1 = 1. p1 = 0xbfb24c84.
	p1 = &a[0];
	printf("*p1 = %d. p1 = %p.\n", *p1, p1);		 // &a[0]代表该数组首元素首地址
	
	// p2 = -1078834044. p2 = 0xbfb24c84. 编译报警告，结果错误，数组不能整体访问。
	p2 = &a;
	printf("p2 = %d. p2 = %p.\n", *p2, p2);			 // &a代表整个数组的地址，相对应的指针类型应为int (*)[5]
	
	
	// *p1 = 1. p1 = 0xbfb24c84.
	printf("*p1 = %d. p1 = %p.\n", *p1, p1);
	
	// *p1++ = 1. p1 = 0xbfb24c88. *p1 = 2.
 	printf("*p1++ = %d. p1 = %p.\n", *p1++, p1);	 // *p1++，先执行*p1，再执行P1 += 1
	printf("*p1 = %d.\n", *p1);
	
	// *++p1 = 3. p1 = 0xbfb24c8c. *p1 = 3.
	printf("*++p1 = %d. p1 = %p.\n", *++p1, p1);	 // *++p1，先执行P1 += 1，再执行*p1
	printf("*p1 = %d.\n", *p1);
	
	// (*p1)++ = 3. p1 = 0xbfb24c8c. *p1 = 4.
	printf("(*p1)++ = %d. p1 = %p.\n", (*p1)++, p1); // (*p1)++，先执行*p1，再执行(*p1) += 1
	printf("*p1 = %d.\n", *p1);
	
	// ++(*p1) = 5. p1 = 0xbfb24c8c. *p1 = 5.
	printf("++(*p1) = %d. p1 = %p.\n", ++(*p1), p1); // ++(*p1)，先执行执行(*p1) += 1，再执行*p1
	printf("*p1 = %d.\n", *p1);
	
	return 0;
}