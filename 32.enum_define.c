/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��������ʹ�С�˼�ö��
 * ���ܣ�ö�ٵĶ����ʹ����⡣
 */
#include <stdio.h>

/*
 ****************************************************************
 * 	enumeration ���Ͷ���
 ****************************************************************
 */
// �������ͺͶ���������뿪
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

// �������͵�ͬʱ�������
enum gender
{
	WOMEN,		// WOMEN = 0 ��û���ֶ�����ԱWOMEN��MAN��ֵ��
	MAN,		// MAN = 1 ����WOMEN��SUN�޷����֣�MAN��MON�޷�����
}rston,lucy; 

// �������͵�ͬʱ�������
enum
{
	APPLE = 23,		// APPLE = 23
	BANANA = 24,	// BANANA = 24
}fruit;
 
// ʹ��typedef����ö�����ͱ��������ں���ʹ�ñ�������ö�ٱ���
typedef enum color
{
	BLUE = 25,		// BLUE = 25
	YELLOW = 26,	// YELLOW = 26
}color;

// ʹ��typedef����ö�����ͱ��������ں���ʹ�ñ�������ö�ٱ��� 
typedef enum 
{
	MOUSE = 27,		// MOUSE = 27
	CAT = 28,		// CAT = 28
}animal;

/*
 ****************************************************************
 *  �������;���
 ****************************************************************
 */ 
#if 0
//ö����������������ʱ����error: conflicting types for ��DAY��
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
// ö�ٳ�Ա����������ʱ����redeclaration of enumerator ��MON��
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

// �ṹ����Ԫ�ؿ�������
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
// �궨������ظ�����(û��error������warning)����������һ�ζ���Ϊ׼
#define MACRO1	12
#define MACRO1	24
#endif
 
int main(int argc, char **argv)
{
	// SUN = 0. WOMEN = 0. APPLE = 23.
	printf("SUN = %d. WOMEN = %d. APPLE = %d.\n", SUN, WOMEN, APPLE);
	// BLUE = 25. MOUSE = 27.
	printf("BLUE = %d. MOUSE = %d.\n", BLUE, MOUSE);
	
	// ʹ��typedef�������ı������������ʹ��
	color c1 = BLUE;
	printf("c1 = %d.\n", BLUE);		// c1 = 25.
	animal a1 = MOUSE;
	printf("a1 = %d.\n", MOUSE);	// a1 = 27.
	
	// �����ۺ�ʹ��ö��
	// �ڶ�������ͬ��ö������ʱ��ע��Ӧ�ֶ���ÿ��ö�ٳ�Ա��ֵ��
	// �Ա��ڳ��������ֲ�ͬö�������е�ÿ����Ա��
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