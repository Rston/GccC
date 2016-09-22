/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：函数指针实战和typedef
 * 功能：通过函数指针指向不同的函数实现多态，即同一个执行，得到不同的执行结果。
 */
#include <stdio.h>

// 函数声明
int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

// 定义函数指针类型pFunc
typedef int (*pFunc)(int, int);

int main(int argc, char **argv)
{
	int a = 0, b = 0, result = 0;
	char c = 0;
	pFunc func = NULL;						// 定义函数指针变量并赋值为NULL
	
	printf("please input two arguments:\n");
	scanf("%d %d", &a, &b);
	
	printf("please input the symbol:\n"); 
	do
	{											
		scanf("%c", &c);
	}while ('\n' == c);						// 清除缓存区
	
	switch (c)								// 通过C决定func指向某个具体的函数
	{
		case '+': 
			func = add; break;
		case '-': 
			func = sub; break;
		case '*': 
			func = multiply; break;
		case '/': 
			func = divide; break;
		default: 
			func = NULL; break;
	}
	
	result = func(a, b);					// 调用函数
	printf("%d %c %d = %d.\n", a, c, b, result);
	
	return 0;
}

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int multiply(int a, int b)
{
	return (a * b);
}

int divide(int a, int b)
{
	return (a / b);
}