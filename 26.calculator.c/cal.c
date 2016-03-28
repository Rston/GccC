/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：函数指针实战和typedef
 * 功能：结构体内嵌函数指针实现分层，此文件为下层，主要实现具体的计算器运算。
 */
#include <stdio.h>
#include "framework.h"
#include "cal.h"

int main(int argc, char **argv)
{
	int ret = 0;
	struct cal_t myCal;			// 定义结构体变量
	
	myCal.a = 14;				// 给结构体变量赋值
	myCal.b = 2;
	myCal.func = multiply;		
	
	ret = calculator(&myCal);	// 调用上层接口
	printf("ret = %d.\n", ret);
	
	return 0;
}

// 加法
int add(int a, int b)
{
	return (a + b);
}

// 减法
int sub(int a, int b)
{
	return (a - b);
}

// 乘法
int multiply(int a, int b)
{
	return (a * b);
}

// 除法
int divide(int a, int b)
{
	return (a / b);
}