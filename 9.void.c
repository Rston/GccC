/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��C����֮��������
 * ���ܣ������ͱ�����������ָ�������
 */
#include <stdio.h>

// ��������
void test(void);

int main(int argc, char **argv)
{
	int a = 4;
	void *pVoid = &a;						// ����void *����ָ�����pVoid����ʼ����ʹ��ָ��int�ͱ���a��
	
	test();									// ����void�������ں����βκͺ�������ֵ
	
	//printf("a = %d.\n", *pVoid);			// ���뱨���洢��ȡ��ʱ���Ͳ�һ�¡�
	printf("a = %d.\n", *(int *)pVoid);		// ��ȷ���洢��ȡ��ʱ����һ�¡�a = 4.
	printf("a = %f.\n", *(float *)pVoid);	// ��������ʾ�����󣬴洢��ȡ��ʱ����һ�£�a = 0.000000.
	
	return 0;
}

// void�������ں����βκͺ�������ֵ��������Ҫ���κϷ���ֵ��
void test(void)
{
	printf("This is a void test.\n");
}