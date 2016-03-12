/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C进阶之数据类型
 * 功能：空类型变量及空类型指针变量。
 */
#include <stdio.h>

// 函数声明
void test(void);

int main(int argc, char **argv)
{
	int a = 4;
	void *pVoid = &a;						// 定义void *类型指针变量pVoid并初始化，使其指向int型变量a。
	
	test();									// 测试void类型用于函数形参和函数返回值
	
	//printf("a = %d.\n", *pVoid);			// 编译报错，存储和取用时类型不一致。
	printf("a = %d.\n", *(int *)pVoid);		// 正确，存储和取用时类型一致。a = 4.
	printf("a = %f.\n", *(float *)pVoid);	// 编译无提示。错误，存储和取用时类型一致，a = 0.000000.
	
	return 0;
}

// void类型用于函数形参和函数返回值表明不需要传参合返回值。
void test(void)
{
	printf("This is a void test.\n");
}