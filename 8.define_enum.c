/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ���ṹ��͹����弰ö��
 * ���ܣ��ԱȺ궨���ö�ٵĲ�ͬ��
 */
 
#include <stdio.h>

// ʹ�ú궨�嶨��Ŀ�꼯��
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

// ����ö�����ͣ����ֽ�enum week
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
	// ����ö�ٱ�������ֵ��ö�ٱ���today��ֵö�������е�ĳ��ֵ������ᱨ��
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
	// �궨����N��ֵ���ܻᳬ�������е���ֵ��Χ
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