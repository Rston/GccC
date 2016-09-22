/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：C进阶之数据类型
 * 功能：C语言中的数据类型转换分析。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 3, c = 0;
	float b = 3.5;
	
	c = a + b;
	printf("c = %d.\n", c);					// c = 6. a转换为float与b相加得到的结果为float再转换为int赋值给C。
	printf("a + b = %f.\n", a + b);			// a + b = 6.500000. a转换为float与b相加得到的结果为float直接打印输出
	printf("a + b = %d.\n", (int)(a + b));	// a + b = 6. a转换为float与b相加得到的结果为float再转为int直接打印输出
	printf("a + b = %d.\n", a + b);			// 编译报警，a + b = 0. 结果错误，存取类型不一致所致。
	
	return 0;
}