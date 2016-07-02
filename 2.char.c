/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言数据类型
 * 功能：演示字符型的基本特征。
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	char c1 = 'A';						
	printf("c1 = %d. c1 = %c.\n", c1, c1);	// 字符型使用%c打印是字符，使用%d打印是对应的ASCII编码值
	
	c1 += 5;								// 字符型可以与整型进行计算
	printf("c1 = %d. c1 = %c.\n", c1, c1);
	
	return 0;
}