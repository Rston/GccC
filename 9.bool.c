/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：C进阶之数据类型
 * 功能：C语言中的bool类型。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = -12;
	
	if (a)		// 在bool类型的世界，除了0是假之外，其余数都是1，都是真
	{
		printf("a = %d.\n", a);
	}
	
	return 0;
}