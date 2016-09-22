/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：野指针和const关键字
 * 功能：演示野指针。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int *p;								    // 局部变量，分配在栈上，栈反复被使用，所以值是随机的
	
	printf("p = %p. &p = %p.\n", p, &p);	// p = 0xb7730ff4. &p = 0xbfb65c5c.
	//*p = 4;								// Segmentation fault (core dumped)运行时段错误，原因为野指针
	
	
	int *pointer = NULL, a = 10;			// 定义指针时同时初始化为NULL		
	pointer = &a;							// 在指针使用前，将其赋值绑定给一个可用地址
	if (NULL != pointer)					// 在指针解引用前，先判断该指针是否为NULL
	{
		*pointer = 8;						
	}
	pointer = NULL;							// 	指针使用完后，将其赋值为NULL
	
	return 0;
}