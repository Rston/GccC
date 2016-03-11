/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：结构体、共用体、枚举
 * 功能：构造枚举类型然后定义变量然后引用枚举变量。
 */
 
#include "stdio.h"

/*		// 定义类型和定义变量分离开
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
*/

/*		// 定义类型的同时定义变量
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
*/

/*		// 定义类型的同时定义变量
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
*/

/*		// 用typedef定义枚举类型别名，后面使用别名定义变量
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
*/

/*		// 用typedef定义枚举类型别名，后面使用别名定义变量
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
*/

/*		// 枚举类型重名，编译时报错：error: conflicting types for ‘DAY’
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
*/

/*		// 枚举成员重名，编译时报错：redeclaration of enumerator ‘MON’
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
*/

/*		// 结构体中的元素可以重名
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
*/

/*		// #define宏可以重复定义(没有error但是有warning)，结果以最后一次定义为准。
#define MACRO1	12
#define MACRO1	24
*/

int main(int argc, char **argv)
{
	// 测试宏定义中的重复定义
	printf("%d\n", MACRO1);

	// 测试用typedef定义枚举类型别名，后面使用别名定义变量
  	week today;
	today = WEN;
	printf("today is the %dth day in week\n", today);

	// 测试定义类型的同时定义变量
	today = WEN;
	printf("today is the %dth day in week\n", today);

	// 测试enum变量的类型
	enum week w1;
	w1 = TUE;
	printf("%d\n", w1);
	
	return 0;
} 