/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C进阶之多文件C语言项目
 * 功能：跨文件引用全局变量、函数及使用头文件。
 */
#ifndef __COMMON_H__
#define __COMMON_H__

// 函数声明
int sub(int a, int b);

// 全局变量声明，注意声明格式
extern int g_val;

#endif