/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言之指针
 * 功能：使用指针在子函数中交换两个数的值。
 */
#include <stdio.h>

// 函数声明
int swap(int a, int b);
int swap_pointer(int *p1, int *p2);

int main(int argc, char **argv)
{
	int x =3, y = 5;
	
	printf("bfore swap: x = %d. y = %d.\n", x, y);
	swap(x, y);
	printf("after swap: x = %d. y = %d.\n", x, y);
	
	printf("bfore swap_pointer: x = %d. y = %d.\n", x, y);
	swap_pointer(&x, &y);
	printf("after swap_pointer: x = %d. y = %d.\n", x, y);
	
	return 0;
}

// 通过传值方式传参进行两数交换
int swap(int a, int b)
{
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
	
	return 0;
}

// 通过传地址方式进行两数交换
int swap_pointer(int *p1, int *p2)
{
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	
	return 0;
}