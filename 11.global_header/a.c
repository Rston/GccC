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

int main(int argc, char **argv)
{
	g_val = sub(8, 2);
	
	printf("sub(8, 2) = %d.\n", g_val);
	
	return 0;
}

