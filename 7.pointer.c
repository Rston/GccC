/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��C����ָ֮��
 * ���ܣ�ָ��Ķ��弰��ʼ���������á�
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 3, b = 4;
	
	int *p1 = &a;	// ����ָ�������ͬʱ���г�ʼ��
	
	int *p2;		// �ȶ���ָ�������ֵ
	p2 = &b;	
	
	// a = 3. b = 4. &a = 0xbffa6790. &b = 0xbffa6794.
	printf("a = %d. b = %d. &a = %p. &b = %p.\n", a, b, &a, &b);
	// *p1 = 3. *p2 = 4. p1 = 0xbffa6790. p2 = 0xbffa6794. &p1 = 0xbffa6798. &p2 = 0xbffa679c.
	printf("*p1 = %d. *p2 = %d. p1 = %p. p2 = %p. &p1 = %p. &p2 = %p.\n", *p1, *p2, p1, p2, &p1, &p2);
	
	return 0;
}