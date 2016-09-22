/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：C语言常用运算符
 * 功能：演示++、--、/、%运算符的基本使用。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int b = 0, a = 5;
	b = a++;
	printf("a = %d. b = %d.\n", a, b);	// a = 6. b = 5. ++在后先运算在加1
	b = (++a);
	printf("a = %d. b = %d.\n", a, b);  // a = 7. b = 7. ++在前先加1再运算
	
	a = 14;
	b = 3;
	a = a / b;
	printf("a = %d. b = %d.\n", a, b); // a = 4. b = 3 两整型变量相除的结果为整型数
	a = a % b;
	printf("a = %d. b = %d.\n", a, b); // a = 1. b = 3

	return 0;
}