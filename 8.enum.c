/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ���ṹ��͹����弰ö��
 * ���ܣ�����ö������Ȼ�������Ȼ������ö�ٱ�����
 */
#include "stdio.h"

// �������ͺͶ���������뿪
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

// �������͵�ͬʱ�������
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

// �������͵�ͬʱ�������
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

// ��typedef����ö�����ͱ���������ʹ�ñ����������
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

// ��typedef����ö�����ͱ���������ʹ�ñ����������
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

// ö����������������ʱ����error: conflicting types for ��DAY��
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

// ö�ٳ�Ա����������ʱ����redeclaration of enumerator ��MON��
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

// �ṹ���е�Ԫ�ؿ�������
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

// #define������ظ�����(û��error������warning)����������һ�ζ���Ϊ׼��
#if 1
#define MACRO1	12
#define MACRO1	24
#endif

int main(int argc, char **argv)
{
	
	// ���Ժ궨���е��ظ�����
	#if 1
	printf("%d\n", MACRO1);
	#endif
	
	// ������typedef����ö�����ͱ���������ʹ�ñ����������
	#if 0
	week today;
	today = WEN;
	printf("today is the %dth day in week\n", today);
	#endif
	
	// ���Զ������͵�ͬʱ�������
	#if 0
	today = WEN;
	printf("today is the %dth day in week\n", today);
	#endif
	
	// ����enum����������
	#if 0
	enum week w1;
	w1 = TUE;
	printf("%d\n", w1);
	#endif
	
	return 0;
} 