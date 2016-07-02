/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：静态链接库和动态链接库
 * 功能：演示静态库和动态库所占用空间大小对比。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	// 动态库->gcc 35.library.c->ls -l a.out（大小：7164）
	// 静态库->gcc 35.library.c -static->ls -l a.out（大小：751243）
	printf("hello world.\n");
	
	return 0;
}