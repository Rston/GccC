/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言之数组
 * 功能：字符数组的定义、初始化、引用。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	char str1[] = {97, 98, 99, 100, 101};		// 5 定义并以整型值方式初始化字符数组
	char str2[] = "abcde";						// 6 定义并以字符串方式初始化字符数组
	char str3[] = {'a', 'b', 'c', 'd', 'e'};	// 5 定义并以单个字符的方式初始化数组
	char str4[5] = {'a'};						// GCC特有的初始化，后面的全部填充为0
	
	// sizeof(str1) = 5. sizeof(str2) = 6. sizeof(str3) = 5.
	printf("sizeof(str1) = %d. sizeof(str2) = %d. sizeof(str3) = %d.\n", sizeof(str1), sizeof(str2), sizeof(str3));
	
	// str1 = abcdeabcde. str2 = abcde. str3 = abcde. str1属于越界访问了。
	printf("str1 = %s. str2 = %s. str3 = %s.\n", str1, str2, str3);	// 通过%s整体打印输出字符串数组
	
	// str4 = a.
	printf("str4 = %s.\n", str4);
	
	int i = 0;
	for (i=0; i<5; i++)							// 字符数组中单个字符变量的引用
	{
		printf("str4[%d] = %c \t %d\n", i, str4[i], str4[i]);
	}
	
	return 0;
}