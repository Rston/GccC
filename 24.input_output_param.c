/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��C���Ժ����������
 * ���ܣ���ʾ�����Ͳ���������Ͳ�����
 */
#include <stdio.h>

#if 0
void func1(const char *p);
#endif
void func2(char *p);

int main(int argc, char **argv)
{
	char *str = "linux";				// �ַ��������������ڴ�����У����ܸ���
	char str_array[] = "linux";			// �ַ�������������������ݶ��У����Ը���
	
	// �����Ĵ���
	#if 0
	func1(str);							// ���뱨�����ڼ�ʱ���ִ���
	printf("str = %s.\n", str);
	#endif
	func2(str_array);
	printf("str_array = %s.\n", str_array);
	
	// ����Ĵ���
	func2(str);							// ����ľ���κ���ʾ�������г��ֶδ�����ͱȽ������ˡ�
	printf("str_array = %s.\n", str_array);
	
	return 0;
}

#if 0
void func1(const char *p)
{										// �˴���Ӧ�øı�*p�����ݣ����Ա��뱨�����ڼ�ʱ���ִ���
	*p = 'a';							// error: assignment of read-only location ��*p��
}
#endif

void func2(char *p)
{
	*p = 'b';
}