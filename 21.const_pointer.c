/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��Ұָ���const�ؼ���
 * ���ܣ���ʾconst�ؼ��ֺ�ָ���ϵ�4����ʽ��
 */
#include <stdio.h>

int main(int argc, char **argv)
{
/*
	int const *p1; 			// p1Ϊָ�����ָ��ɱ䣬P1ָ��ı���ֻ��
	const int *p2;			// p2Ϊָ�����ָ��ɱ䣬P2ָ��ı���ֻ��
	int * const p3;			// P3Ϊָ�����ֻ����P3ָ��ı�����ֵ�ɱ�
	const int * const p4;	// p4Ϊָ�����ֻ����P4ָ��ı���ֻ��
	
	int a = 5;
	
	*p1 = 10;				// error: assignment of read-only location ��*p1��
	p1 = &a;				// �����޴����޾���
	
	*p2 = 10;				//  error: assignment of read-only location ��*p2��
	p2 = &a;				// �����޴����޾���
	
	*p3 = 10;				// �����޴����޾���
	p3  = &a;				// assignment of read-only variable ��p3��
	
	*p4 = 10;				// assignment of read-only location ��*p4��
	p4 = &a;				// assignment of read-only variable ��p4��
*/	
	
	const int a = 8;
	//a = 6;				//  error: assignment of read-only variable ��a��
	
	int *p = (int *)&a;		// �����޴����޾���
	*p = 100;				// a = 100.
	printf("a = %d.\n", a);
	
	return 0;
}