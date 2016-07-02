/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：数组和指针的姻缘
 * 功能：演示访问数组的实质。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a[5] = {1, 2, 3, 4, 5};
	
	printf("a[1] = %d.\n", a[1]);				// a[1] = 2.	通过下标的方式访问数组
	printf("*(a+1) = %d.\n", *(a+1));			// *(a+1) = 2.	通过指针的方式访问数组
	
	int *p1 = a;								// 数组名a做右值时表示数组首元素的首地址
	printf("*p1 = %d.\n", *p1);					// *p1 = 1.

	int *p2 = &a[0];							// &a[0]做右值时表示数组首元素的首地址
	printf("*p2 = %d.\n", *p2);					// *p2 = 1.
	
	
	int array[5] = {5, 6, 7, 8, 9};
	int *pointer = array;					
	
	// *(array+1) = 6.
	printf("*(array+1) = %d.\n", *(array+1));	
	// *((unsigned char *)array + 1) = 0.
	printf("*((unsigned char *)array + 1) = %d.\n", *((unsigned char *)array + 1));	
	
	return 0;
}