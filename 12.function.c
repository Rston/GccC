/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ����������Ϊɶ��Ҫ�ڴ�
 * ���ܣ�ʹ�ú������"�������е�Ŀ�ľ��ǵõ���������"��
 */
#include <stdio.h>

// �ú�����ִ�����ڵõ����
#if 0
int add(int a, int b)
{
	return (a + b);				
}
#endif

// �ú�����ִ���������й��̣�����Ҫ����ֵ
#if 0
void add(int a, int b)
{
	int c = 0;
	
	c = a + b;
	printf("c = %d.\n", c);
}
#endif

// �ú�����ִ�м��ؽ�����ع���
#if 0
int add(int a, int b)
{
	int c = 0;
	
	c = a + b;
	printf("c = %d.\n", c);
	
	return c;
}
#endif

int main(int argc, char **argv)
{
	printf("I am Rston.\n");
	
	return 0;
}