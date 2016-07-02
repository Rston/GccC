/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言字符串和字符数组
 * 功能：演示字符串和字符数组的与strlen和sizeof的纠葛。
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mystrlen(const char *str)		
{
	int cnt = 0;
	while (*str++ != '\0')
	{
		cnt++;
	}
	return cnt;
}

char b[] = "hello";

int main(int argc, char **argv)
{
	// strlen库函数的作用是返回字符串的长度
	char *str = "linux";
	int mylen = mystrlen(str);
	int len = strlen(str);
	printf("len = %d. mylen = %d.\n", len, mylen);		// len = 5. mylen = 5.
	
	// 数组和sizeof关键字的使用
	int a[4] = {0};
	printf("sizeof(a) = %d.\n", sizeof(a));				// sizeof(a) = 16.
	
	// 字符串初始化和strlen及sizeof关键字的使用
	char *s = "linux";
	printf("sizeof(s) = %d\n", sizeof(s));				// sizeof(s) = 4
	printf("strlen(s) = %d\n", strlen(s));				// strlen(s) = 5
	
	// 字符串存放在数据段
	char *c = b;
	
	// 字符串存放在栈中
	char d[] = "hello";
	char *e = d;
	
	// 字符串存放在堆中
	char *f = (char *)malloc(10*sizeof(char));
	
	return 0;
}