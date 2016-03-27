/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：数组指针和函数指针及typedef
 * 功能：演示数组指针和指针数组及函数指针及typedef关键字用法
 */
#include <stdio.h>
#include <string.h>

// 这句重命名了一种类型，这个新类型名字叫pType，类型是：char* (*)(char *, const char *);
typedef char* (*pType1)(char *, const char *);

// 函数指针数组
typedef char* (*pType2[5])(char *, const char *);

// 函数指针数组指针
typedef char* (*(*pType3)[5])(char *, const char *);

void func1(void)
{
	printf("This is a test for function pointer.\n");
}

int main(int argc, char **argv)
{
	int array1[5] = {0};
	// 数组指针类型的实质
	int *pointer1 = array1;			// 类型匹配，编译无报警无错误
	//int *pointer2 = &array1;		// 类型不匹配，array1为int *类型，&array1为int (*)[5]类型
	int (*pointer3)[5];				// pointer3的类型为int (*)[5]类型
	pointer3 = &array1;				// 类型匹配，编译无报警无错误
	
	// 简单的函数指针举例
	void (*pFunc)(void);			// 定义函数指针变量pFunc，函数指针类型为void (*)(void);
	pFunc = func1;					// 函数指针变量pFunc指向func1函数。
	pFunc = &func1;					// 函数指针变量pFunc指向func1函数。
	pFunc();						// 通过函数指针调用函数。
	
	// 函数名做右值时加不加&效果和意义都是一样的，func1 = 0x8048414. &func1 = 0x8048414.
	printf("func1 = %p. &func1 = %p.\n", func1, &func1);	
	
	// 复杂的函数指针举例
	char str[5] = {0};			
	char* (*pFunc1)(char *, const char *);		// 定义函数指针变量pFunc1，函数指针类型为char* (*)(char *, const char *);	
	pFunc1 = stpcpy;
	pFunc1(str, "abc");							// 通过函数指针调用函数。			
	printf("str= %s.\n", str);					// str= abc.
	
	// 通过typedef关键字重命名类型，并使用该类型定义变量并引用变量
	char s[5] = {0};				
	pType1 p1 = NULL;							// 使用pType1函数指针类型定义一个函数指针变量p1
	p1 = strcpy;								// 函数指针变量指向strcpy指针
	p1(s, "hehe");								
	printf("s = %s.\n", s);						// s = hehe.
	
	return 0;
}