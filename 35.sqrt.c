/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ����̬���ӿ�Ͷ�̬���ӿ�
 * ���ܣ���ʾ����ĳ����ѧ�⺯����
 */
#include <stdio.h>
#include <math.h>

// ����ʱ�����-lm�������gcc 35.sqrt.c -lm��
// ִ�С�ldd a.out����������
// linux-gate.so.1 =>  (0xb7727000)
// libm.so.6 => /lib/i386-linux-gnu/libm.so.6 (0xb76e7000)
// libc.so.6 => /lib/i386-linux-gnu/libc.so.6 (0xb753d000)
// /lib/ld-linux.so.2 (0xb7728000)

int main(int argc, char **argv)
{
	double a = 16.0;
	// sqrt(16.000000) = 4.000000.
	printf("sqrt(%lf) = %lf.\n", a, sqrt(a));
	
	return 0;
}