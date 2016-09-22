/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：共用体和大小端及枚举
 * 功能：枚举的定义和使用详解。
 */
#include <stdio.h>

/*
 ****************************************************************
 * 	enumeration 类型定义
 ****************************************************************
 */
// 定义类型和定义变量分离开
enum week
{
	SUN,			// SUN = 0
	MON,			// MON = 1
	TUE,
	WEN,
	THU,
	FRI,
	SAT,
};
enum week today;

// 定义类型的同时定义变量
enum gender
{
	WOMEN,		// WOMEN = 0 因没有手动给成员WOMEN和MAN赋值，
	MAN,		// MAN = 1 导致WOMEN和SUN无法区分，MAN和MON无法区分
}rston,lucy; 

// 定义类型的同时定义变量
enum
{
	APPLE = 23,		// APPLE = 23
	BANANA = 24,	// BANANA = 24
}fruit;
 
// 使用typedef定义枚举类型别名，并在后面使用别名定义枚举变量
typedef enum color
{
	BLUE = 25,		// BLUE = 25
	YELLOW = 26,	// YELLOW = 26
}color;

// 使用typedef定义枚举类型别名，并在后面使用别名定义枚举变量 
typedef enum 
{
	MOUSE = 27,		// MOUSE = 27
	CAT = 28,		// CAT = 28
}animal;

/*
 ****************************************************************
 *  错误类型举例
 ****************************************************************
 */ 
#if 0
//枚举类型重名，编译时报错：error: conflicting types for ‘DAY’
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

#if 0	
// 枚举成员重名，编译时报错：redeclaration of enumerator ‘MON’
typedef enum workday
{
	MON,		
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

// 结构体中元素可以重名
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

#if 0		
// 宏定义可以重复定义(没有error但是有warning)，结果以最后一次定义为准
#define MACRO1	12
#define MACRO1	24
#endif
 
int main(int argc, char **argv)
{
	// SUN = 0. WOMEN = 0. APPLE = 23.
	printf("SUN = %d. WOMEN = %d. APPLE = %d.\n", SUN, WOMEN, APPLE);
	// BLUE = 25. MOUSE = 27.
	printf("BLUE = %d. MOUSE = %d.\n", BLUE, MOUSE);
	
	// 使用typedef重命名的别名定义变量并使用
	color c1 = BLUE;
	printf("c1 = %d.\n", BLUE);		// c1 = 25.
	animal a1 = MOUSE;
	printf("a1 = %d.\n", MOUSE);	// a1 = 27.
	
	// 测试综合使用枚举
	// 在定义多个不同的枚举类型时，注意应手动给每个枚举成员赋值，
	// 以便在程序中区分不同枚举类型中的每个成员。
	today = SUN;					// SUN = 0.
	lucy = WOMEN;					// WOMEN = 0.
	fruit = APPLE;					// APPLE = 23.
	// today = 0. lucy = 0. fruit = 23.
	printf("today = %d. lucy = %d. fruit = %d.\n", today, lucy, fruit);
	switch (fruit)
	{
		case SUN:
			printf("SUN.\n");		
			break;
		/*
		case WOMEN:
			printf("WOMEN.\n");		
			break;
		*/
		case APPLE:
			printf("APPLE.\n");		// APPLE.
			break;
		default:
			printf("default.\n");
			break;
	}
	
	return 0;
}