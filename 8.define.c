/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ���ṹ��͹����弰ö��
 * ���ܣ����궨�弰��ʹ�á�
 */
#include <stdio.h>

#define PI (3.14)

#define L(r) (2 * PI * (r))			// ����Բ���ܳ���
#define S(r) (PI * (r) * (r)) 		// ����Բ�������

int main(int argc, char **argv)
{
	// L(1) = 6.280000. S(1) = 3.140000.
	printf("L(1) = %f. S(1) = %f.\n", L(1), S(1));

	return 0;
}