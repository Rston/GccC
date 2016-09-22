/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：C语言内存管理机制
 * 功能：演示三种机制（栈、堆、数据段）申请内存空间。
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 使用堆机制申请内存空间，定义全局变量
char str[] = "linux";

int main(int argc, char **argv)
{
	// const的两种实现方式
	// 单片机将const修饰的变量放置代码段中实现只读
	// gcc通过编译器检查实现只读，变量实际存放在数据段中
	const int a = 8;
	int *p1 = (int *)(&a);		// 编译无警告无报错
	*p1 = 10;						
	printf("a = %d.\n", *p1);	// a = 10.
	
	// 使用栈机制申请内存空间，定义局部变量
	char b[] = "linux";
	
	// 使用堆机制申请内存空间，手动申请内存和释放内存
	char *p = (char *)malloc(10*sizeof(char));
	if (NULL == p)
	{
		printf("malloc error.\n");
		return -1;
	}
	memset(p, 0, 10*sizeof(char));
	strcpy(p, "linux");
	
	printf("str = %s. b = %s. p = %s.\n", str, b, p);		// str = linux. b = linux. p = linux.
	printf("str = %p. b = %p. p = %p.\n", str, b, p);		// str = 0x804a024. b = 0xbff8cc86. p = 0x8ddc008.

	free(p);
	
	return 0;
}