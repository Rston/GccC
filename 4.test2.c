/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：结构化程序设计
 * 功能：规则：90分及以上为优，80分及以上为良，60分及以上为及格，以下为不及格。
 *       然后输入一个学生分数，然后printf打印“you” “liang” “jige” “bujige”。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int grade = 78;
	
	if (grade >= 90)
	{
		printf("you\n");
	}
	else if (grade >= 80)
	{
		printf("liang\n");
	}
	else if (grade >= 60)
	{
		printf("jige\n");
	}
	else
	{
		printf("bujige\n");
	}
	
	return 0;
}