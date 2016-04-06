/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：共用体和大小端及枚举
 * 功能：演示枚举的初步使用及枚举和宏定义的区别和联系
 */

#include <stdio.h>

// 使用宏定义解决函数返回值问题
#define TRUE 	1
#define FALSE 	0

// 该枚举用来表示函数返回值，ERROR表示错误，RIGHT表示正确
enum return_value
{
	ERROR = 20,		// 枚举值是全局的，可直接单独使用
	RIGHT = 25,
};

enum return_value func1(void);

int main(int argc, char **argv)
{
	// 通过枚举判断函数执行正确与否
	enum return_value r = func1();
	if (RIGHT == r)
	{
		printf("函数执行正确\n");
	}
	else 
	{
		printf("函数执行错误\n");
	}
	
	// 枚举中的枚举值都是常量 ERROR = 20. RIGHT = 25.
	printf("ERROR = %d. RIGHT = %d.\n", ERROR, RIGHT);
	
	// 通过宏定义判断函数执行正确与否
	int ret = func2();
	if (TRUE == ret)
	{
		printf("函数执行正确\n");
	}
	else 
	{
		printf("函数执行错误\n");
	}
	
	return 0;
}

// 通过枚举返回函数执行结果
enum return_value func1(void)
{
	enum return_value r = ERROR;
	return r;
}

// 通过宏定义返回函数执行结果
int func2(void)
{
	return TRUE;
}