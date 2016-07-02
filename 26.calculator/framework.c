/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：函数指针实战和typedef
 * 功能：结构体内嵌函数指针实现分层，此文件为上层，主要实现计算器业务逻辑。
 */
#include "framework.h"

// 实现计算器业务逻辑
int calculator(const struct cal_t *p)
{
	return (p->func(p->a, p->b)); 
}