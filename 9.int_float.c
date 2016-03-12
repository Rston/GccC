/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C进阶之数据类型
 * 功能：变量存储和取出方式必须一致。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 8;
	
	// a = 8. a = -0.000000. 编译器报类型不匹配警告。
	printf("a = %d. a = %f.\n", a, a);
	
	return 0;
}