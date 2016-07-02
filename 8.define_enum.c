/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：结构体和共用体及枚举
 * 功能：对比宏定义和枚举的不同。
 */
 
#include <stdio.h>

// 使用宏定义定义目标集合
#if 0
#define SUN	0
#define MON 1
#define TUE	2
#define WEN	3
#define THR	4
#define FRI	5
#define SAT	6

#define N 10
#endif

// 构造枚举类型，名字叫enum week
enum week
{
	SUN,		// SUN = 0
	MON,		// MON = 1;
	TUE,
	WEN,
	THR,
	FRI,
	SAT,
};

int main(int argc, char **argv)
{	
	// 定义枚举变量并赋值，枚举变量today的值枚举类型中的某个值，否则会报错。
	enum week today = SAT;		
	
	switch (today)
	{
		case MON:
			printf("hao kun a.\n");
			break;
		case TUE:
			printf("2\n");
			break;
		case WEN:
			printf("3.\n");
			break;
		case THR:
			printf("4\n");
			break;
		case FRI:
			printf("5.\n");
			break;
		case SAT:
			printf("6\n");
			break;
		case SUN:
			printf("7.\n");
			break;
		default:
			printf("NO.\n");
			break;
	}

#if 0
	// 宏定义中N的值可能会超出集合中的数值范围
	int today = N;
	
	switch (today)
	{
		case MON:
			printf("1.\n");
			break;
		case TUE:
			printf("2\n");
			break;
		case WEN:
			printf("3.\n");
			break;
		case THR:
			printf("4\n");
			break;
		case FRI:
			printf("5.\n");
			break;
		case SAT:
			printf("6\n");
			break;
		case SUN:
			printf("7.\n");
			break;
		default:
			printf("NO.\n");
			break;
	}
#endif

	return 0;
}