/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：指针到底是什么
 * 功能：演示指针的本质和解引用的注意事项。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;					// 定义1个int类型的变量a，并初始化为0。
	int *p = NULL;				// 定义1个指针变量p，指针变量p所指向的变量为int型，并初始化为NULL
	
	p = 4;						// 将整数4赋值给指针变量，类型不匹配，编译器报警告
	p = (int *)4;				// 将整数4强制类型转换为（int *）类型的4，类型匹配，编译器通过
	
	
	
	// 定义指针变量
	int *pointer = NULL, b = 1;				// 定义1个指针变量P，指针变量P指向的变量为int型；定义int型变量b
	
	// 绑定指针变量
	pointer = &b;							// 给指针变量赋值，将int型变量b的地址值赋给指针变量pointer
	
	// 解引用
	*pointer = 10;							// 通过指针变量pointer进行间接访问整型变量b
	printf("*pointer = %d.\n", *pointer);	// *pointer = 10.
	printf("pointer = %p.\n", pointer);		// pointer = 0xbf854684.该值是指针变量本身数值即整型变量b的地址值
	printf("&b = %p. &pointer = %p.\n", &b, &pointer);	// &b = 0xbf854684. &pointer = 0xbf854680.
	
	// 演示指针未经初始化即进行解引用的危害
	int *p2test;							// 定义了指针变量p2test但并未赋初值，则该指针指向未知的内存空间
	//*p = 888;								// Segmentation fault (core dumped)，段错误，访问了不该访问的地址空间。
	int *p2null = NULL;
	//*p = 999;								// Segmentation fault (core dumped)，段错误，访问了不该访问的地址空间。
	printf("p2null = %p.\n", p2null);		// p2null = (nil). nil表示无值，任何变量在没有被赋值之前的值都为nil
	
	return 0;
}