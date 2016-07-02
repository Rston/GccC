/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言预处理详解
 * 功能：演示宏定义的各种用法。
 */
// 演示宏的递归替换
#define M 		10	
#define NUM		M

// 宏定义示例1：MAX宏，求2个数中较大的一个
#define MAX(a, b) ((a)>(b) ? (a) : (b))
 
// 宏定义示例2：SEC_PER_YEAR宏，用宏定义表示一年中有多少秒
#define SEC_PER_YEAR (365*24*60*60UL)	 

// 宏定义来实现条件编译
#define DEBUG
//#undef DEBUG		// 注销DEBUG宏，若前面有定义DEBUG宏则取消该宏

#ifdef DEBUG
#define debug(x) printf(x) 
#else
#define debug(x)	
#endif

#include <stdio.h> 
 
int main(int argc, char **argv)
{
	// 演示宏的递归替换
	int a = NUM;
	printf("NUM = %d.\n", a);				// NUM = 10.
	
	// 宏定义示例1：MAX宏，求2个数中较大的一个
	int b = MAX(5+9, 10-4);
	printf("MAX(5+9, 10-4) = %d.\n", b);	// MAX(5+9, 10-4) = 14.
	
	// 宏定义示例2：SEC_PER_YEAR宏，用宏定义表示一年中有多少秒
	unsigned long int c = SEC_PER_YEAR;
	printf("SEC_PER_YEAR = %ld\n", c);		// SEC_PER_YEAR = 31536000

	// 宏定义来实现条件编译 
	debug("This is a debug test.\n");
	
	return 0;
}