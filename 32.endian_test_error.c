/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：共用体和大小端及枚举
 * 功能：演示通过位与、移位、强制类型转化测试机器的大小端模式。
 */

#include <stdio.h>

int main(void)
{
	// 位与测试机器大小端模式错误
	int a = 1;
	int b = a & 0xff;		
	if (1 == b)
	{
		printf("当前环境为小端模式\n");
	}
	else
	{
		printf("当前环境为大端模式\n");
	}
	
	// 移位测试机器大小端模式错误
	int c = 1, d = 0;
	d = c >> 1;
	if (0 == d)
	{
		printf("当前环境为小端模式\n");
	}
	else
	{
		printf("当前环境为大端模式\n");
	}
	
	
	// 强制类型转换测试机器大小端模式错误
	int e = 1;
	char f = (char)e;
	if (1 == f)
	{
		printf("当前环境为小端模式\n");
	}
	else
	{
		printf("当前环境为大端模式\n");
	}
	
	return 0;
}
