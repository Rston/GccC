/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：数据类型和sizeof运算符
 * 功能：演示变量数据类型的存取方式必须一致。
 */
#include <stdio.h>
 
int main(int argc, char **argv)
{
	int a = 5;
	printf("a = %d.\n", a);					// a = 5.	
	printf("a = %f.\n", (float)a);			// a = -0.000000.乱码，按照int类型存，按照float类型取。
	
	int b = 5;
	int *p1 = &b;
	float *p2 = (float *)&b;
	printf("*p1 = %d.\n", *p1);				// *p1 = 5
	printf("*p2 = %f.\n", *p2);				// *p2 = 0.000000. 变量*p1和*P2分别按照int类型和float类型取
	
	int c = 193;
	int *p3 = &c;
	char *p4 = (char *)&c;
	printf("*p3 = %d.\n", *p3);				// *p3 = 193.
	printf("*p4 = %c.\n", *p4);				// *p4 = ?.	以int型存放的二进制数超出了char型范围，以char型解析时出错。

	int d = 127;
	int *p5 = &d;							
	char *p6 = (char *)&d;					
	printf("*p5 = %d.\n", *p5);				// *p5 = 127.			
	printf("*P6 = %d.\n", *p6);				// *P6 = 127.
	printf("*(p6+1) = %d.\n", *(p6+1));		// *(p6+1) = 0.
	printf("*(p6+2) = %d.\n", *(p6+2));		// *(p6+2) = 0.
	printf("*(p6+3) = %d.\n", *(p6+3));		// *(p6+3) = 0.
	
	return 0 ;
}