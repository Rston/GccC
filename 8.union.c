/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ���ṹ�塢�����塢ö��
 * ���ܣ����干����Ȼ��ֵ�����á�
 */
#include <stdio.h>

union MyUnion				// ���칲��������
{
	int a;
	char b;
	float c;
};

int main(int argc, char **argv)
{
	union MyUnion u1;		// �������Ĺ��������ͱ���
	
	u1.a = 128;				// ������������е�Ԫ�ظ�ֵ
	
	// u1.a = 128. u1.b = -128.
	printf("u1.a = %d. u1.b = %d.\n", u1.a, u1.b);
	
	return 0;
}