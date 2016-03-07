/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言数据类型-浮点型
 */
#include <stdio.h>
int main(int argc, char **argv)
{
	float f1 = 3.14159261781;			// float精度不够，会按照精度自动取舍
	printf("f1 = %f.\n", f1);			// f1 = 3.141593.打印使用%f
	printf("f1 = %2.12f.\n", f1);		// f1 = 3.141592502594.
	
	double f2 = 3.141592657812345678; 	// double精度不够，会按照精度自动取舍
	printf("f2 = %lf.\n", f2);			// f2 = 3.141593.打印使用%lf
	printf("f2 = %2.18lf.\n", f2);		// f2 = 3.141592657812345646.
		
	return 0;
}