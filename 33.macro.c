/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C����Ԥ�������
 * ���ܣ���ʾ�궨��ĸ����÷���
 */
// ��ʾ��ĵݹ��滻
#define M 		10	
#define NUM		M

// �궨��ʾ��1��MAX�꣬��2�����нϴ��һ��
#define MAX(a, b) ((a)>(b) ? (a) : (b))
 
// �궨��ʾ��2��SEC_PER_YEAR�꣬�ú궨���ʾһ�����ж�����
#define SEC_PER_YEAR (365*24*60*60UL)	 

// �궨����ʵ����������
#define DEBUG
//#undef DEBUG		// ע��DEBUG�꣬��ǰ���ж���DEBUG����ȡ���ú�

#ifdef DEBUG
#define debug(x) printf(x) 
#else
#define debug(x)	
#endif

#include <stdio.h> 
 
int main(int argc, char **argv)
{
	// ��ʾ��ĵݹ��滻
	int a = NUM;
	printf("NUM = %d.\n", a);				// NUM = 10.
	
	// �궨��ʾ��1��MAX�꣬��2�����нϴ��һ��
	int b = MAX(5+9, 10-4);
	printf("MAX(5+9, 10-4) = %d.\n", b);	// MAX(5+9, 10-4) = 14.
	
	// �궨��ʾ��2��SEC_PER_YEAR�꣬�ú궨���ʾһ�����ж�����
	unsigned long int c = SEC_PER_YEAR;
	printf("SEC_PER_YEAR = %ld\n", c);		// SEC_PER_YEAR = 31536000

	// �궨����ʵ���������� 
	debug("This is a debug test.\n");
	
	return 0;
}