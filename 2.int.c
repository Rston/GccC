/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言数据类型
 * 功能：演示整型的基本特征。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;		// 一次性定义三个整型变量
	
	a = 25;				// 赋值语句，将=右边的整型数值25赋给整型变量a
	b = 5;
	c = a / b;			// 运算式，先a+b，然后将和赋值给c
	
	printf("a = %d. b = %d. c = %d.\n", a, b, c);
	
	b = 4;
	c = a / b;			// 整型变量永远是整数，若给它一个小数，它会舍弃小数部分，保留整数部分。
	printf("a = %d. b = %d. c = %d.\n", a, b, c);
	
	return 0;
}