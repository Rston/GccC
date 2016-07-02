#ifndef __FRAMEWORK_H__
#define __FRAMEWORK_H__

// 定义函数指针类型pFunc
typedef int (*pFunc)(int, int);

// 定义结构体类型struct cal_t
struct cal_t
{
	int a;				// 运算数据a
	int b;				// 运算数据b
	pFunc func;			// 具体函数的封装
};

// 计算器上层函数接口，被下层调用
int calculator(const struct cal_t *p);

#endif