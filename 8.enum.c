/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ���ṹ�塢�����塢ö��
 * ���ܣ�����ö������Ȼ�������Ȼ������ö�ٱ�����
 */
 
#include "stdio.h"

/*		// �������ͺͶ���������뿪
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

/*		// �������͵�ͬʱ�������
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

/*		// �������͵�ͬʱ�������
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

/*		// ��typedef����ö�����ͱ���������ʹ�ñ����������
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

/*		// ��typedef����ö�����ͱ���������ʹ�ñ����������
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

/*		// ö����������������ʱ����error: conflicting types for ��DAY��
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

/*		// ö�ٳ�Ա����������ʱ����redeclaration of enumerator ��MON��
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

/*		// �ṹ���е�Ԫ�ؿ�������
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

/*		// #define������ظ�����(û��error������warning)����������һ�ζ���Ϊ׼��
#define MACRO1	12
#define MACRO1	24
*/

int main(int argc, char **argv)
{
	// ���Ժ궨���е��ظ�����
	printf("%d\n", MACRO1);

	// ������typedef����ö�����ͱ���������ʹ�ñ����������
  	week today;
	today = WEN;
	printf("today is the %dth day in week\n", today);

	// ���Զ������͵�ͬʱ�������
	today = WEN;
	printf("today is the %dth day in week\n", today);

	// ����enum����������
	enum week w1;
	w1 = TUE;
	printf("%d\n", w1);
	
	return 0;
} 