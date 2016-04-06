/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：共用体和大小端及枚举
 * 功能：通过共用体和指针方式分别测试当前环境的大小端模式
 */
#include <stdio.h>

union myunion 
{
	int a;
	char b;
};

// 通过共用体测试当前环境的大小端模式
// 若当前环境是小端模式则返回1，若当前环境是大端模式返回0
int is_little_endian1(void)
{
	union myunion u1;
	u1.a = 1;						// 起始地址处的那个字节内是1（小端）或者0（大端）
	return u1.b;
}

// 通过指针方式测试当前环境的大小端模式
// 若当前环境是小端模式则返回1，若当前环境是大端模式返回0
int is_little_endian2(void)
{
	int a = 1;
	int b = *((char *)&a);			// 共用体的本质即通过指针方式访问同一内存单元
	return b;
}

int main(int argc, char **argv)
{
	int ret = is_little_endian2();
	if (0 == ret)
	{
		printf("当前环境是大端模式\n");
	}
	else 
	{
		printf("当前环境是小端模式\n");
	}
	
	return 0;
}