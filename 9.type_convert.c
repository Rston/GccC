/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��C����֮��������
 * ���ܣ�C�����е���������ת��������
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 3, c = 0;
	float b = 3.5;
	
	c = a + b;
	printf("c = %d.\n", c);					// c = 6. aת��Ϊfloat��b��ӵõ��Ľ��Ϊfloat��ת��Ϊint��ֵ��C��
	printf("a + b = %f.\n", a + b);			// a + b = 6.500000. aת��Ϊfloat��b��ӵõ��Ľ��Ϊfloatֱ�Ӵ�ӡ���
	printf("a + b = %d.\n", (int)(a + b));	// a + b = 6. aת��Ϊfloat��b��ӵõ��Ľ��Ϊfloat��תΪintֱ�Ӵ�ӡ���
	printf("a + b = %d.\n", a + b);			// ���뱨����a + b = 0. ������󣬴�ȡ���Ͳ�һ�����¡�
	
	return 0;
}