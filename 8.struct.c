/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：结构体、共用体、枚举
 * 功能：定义结构体并初始化然后引用。
 */
#include <stdio.h>
#include <string.h>
 
// 定义结构体类型，注意不占用内存空间
struct Student
{
	char name[20];		// 姓名
	unsigned int num;	// 学号
	int isMale;			// 性别
};						// 注意这里的;不能少
 
int main(int argc, char **argv)
{
	struct Student s1 = {"Rston", 110, 1};	// 结构体完全初始化，初始化顺序不可颠倒
	
	struct Student s2 = 					// 结构体不完全初始化，初始化顺序可颠倒
	{
		.isMale = 0,						//  注意使用,号，不能使用;号 
		.num = 120,
	};										// 注意这里的;不能少
	
	strcpy(s2.name, "King");				// 给结构体中的元素赋值
	
	printf("s1.name = %s. s1.num = %d. s1.isMale = %d.\n", s1.name, s1.num, s1.isMale);
	printf("s2.name = %s. s2.num = %d. s2.isMale = %d.\n", s2.name, s2.num, s2.isMale);
	
	return 0;
}