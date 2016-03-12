/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C进阶之变量和常量
 * 功能：静态局部变量和局部变量的区别。
 */
#include <stdio.h>

// 函数声明
int func_auto(void);
int func_static(void);

int main(int argc, char **argv)
{
	int i = 0;
	
	for (i=0; i<5; i++)
	{
		func_auto();		// 分别连续调用5次func_auto和func_static两个函数
		func_static();
		printf("call function times is %d.\n", i);
	}
	
	return 0;
}

int func_auto(void)
{
	int a = 1;				// 定义普通变量a
	
	printf("a = %d.\n", ++a);
	
	return 0;
}

int func_static(void)
{
	static int b = 1;		// 定义静态局部变量b
	
	printf("b = %d.\n", ++b);
	
	return 0;
}