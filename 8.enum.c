/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：结构体和共用体及枚举
 * 功能：构造枚举类型然后定义变量然后引用枚举变量。
 */
#include "stdio.h"

// 定义类型和定义变量分离开
#if 0		
enum week
{
	SUN,		// SUN = 0
	MON,		// MON = 1;
	TUE,
	WEN,
	THU,
	FRI,
	SAT,
};

enum week today;
#endif

// 定义类型的同时定义变量
#if 0		
enum week
{
	SUN,		// SUN = 0
	MON,		// MON = 1;
	TUE,
	WEN,
	THU,
	FRI,
	SAT,
}today,yesterday;
#endif

// 定义类型的同时定义变量
#if 0		
enum 
{
	SUN,		// SUN = 0
	MON,		// MON = 1;
	TUE,
	WEN,
	THU,
	FRI,
	SAT,
}today,yesterday;
#endif

// 用typedef定义枚举类型别名，后面使用别名定义变量
#if 0 		
typedef enum week
{
	SUN,		// SUN = 0
	MON,		// MON = 1;
	TUE,
	WEN,
	THU,
	FRI,
	SAT,
}week;
#endif

// 用typedef定义枚举类型别名，后面使用别名定义变量
#if 0		
typedef enum 
{
	SUN,		// SUN = 0
	MON,		// MON = 1;
	TUE,
	WEN,
	THU,
	FRI,
	SAT,
}week;
#endif

// 枚举类型重名，编译时报错：error: conflicting types for ‘DAY’
#if 0		
typedef enum workday
{
	MON,		// MON = 1;
	TUE,
	WEN,
	THU,
	FRI,
}DAY;

typedef enum weekend
{
	SAT,
	SUN,
}DAY;
#endif

// 枚举成员重名，编译时报错：redeclaration of enumerator ‘MON’
#if 0	 	
typedef enum workday
{
	MON,		// MON = 1;
	TUE,
	WEN,
	THU,
	FRI,
}workday;

typedef enum weekend
{
	MON,
	SAT,
	SUN,
}weekend;
#endif

// 结构体中的元素可以重名
#if 0		
typedef struct 
{
	int a;
	char b;
}st1;

typedef struct 
{
	int a;
	char b;
}st2;
#endif

// #define宏可以重复定义(没有error但是有warning)，结果以最后一次定义为准。
#if 1
#define MACRO1	12
#define MACRO1	24
#endif

int main(int argc, char **argv)
{
	
	// 测试宏定义中的重复定义
	#if 1
	printf("%d\n", MACRO1);
	#endif
	
	// 测试用typedef定义枚举类型别名，后面使用别名定义变量
	#if 0
	week today;
	today = WEN;
	printf("today is the %dth day in week\n", today);
	#endif
	
	// 测试定义类型的同时定义变量
	#if 0
	today = WEN;
	printf("today is the %dth day in week\n", today);
	#endif
	
	// 测试enum变量的类型
	#if 0
	enum week w1;
	w1 = TUE;
	printf("%d\n", w1);
	#endif
	
	return 0;
} 