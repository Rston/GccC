/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：结构体和共用体及枚举
 * 功能：定义共用体然后赋值并引用。
 */
#include <stdio.h>

union MyUnion				// 构造共用体类型
{
	int a;
	char b;
	float c;
};

int main(int argc, char **argv)
{
	union MyUnion u1;		// 定义具体的共用体类型变量
	
	u1.a = 128;				// 给共用体变量中的元素赋值
	
	// u1.a = 128. u1.b = -128.
	printf("u1.a = %d. u1.b = %d.\n", u1.a, u1.b);
	
	return 0;
}