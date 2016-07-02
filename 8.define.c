/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：结构体和共用体及枚举
 * 功能：理解宏定义及其使用。
 */
#include <stdio.h>

#define PI (3.14)

#define L(r) (2 * PI * (r))			// 计算圆的周长宏
#define S(r) (PI * (r) * (r)) 		// 计算圆的面积宏

int main(int argc, char **argv)
{
	// L(1) = 6.280000. S(1) = 3.140000.
	printf("L(1) = %f. S(1) = %f.\n", L(1), S(1));

	return 0;
}