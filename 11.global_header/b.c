/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：C进阶之多文件C语言项目
 * 功能：跨文件引用全局变量、函数及使用头文件。
 */
#include <stdio.h>
#include "common.h"

// 定义全局变量
int g_val = 0;				

// 实现减法
int sub(int a, int b)
{
	return (a - b);
}