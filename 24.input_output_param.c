/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C���Ժ����������
 * ���ܣ���ʾ�����Ͳ���������Ͳ���
 */
#include <stdio.h>

void func1(const char *p);
void func2(char *p);

int main(int argc, char **argv)
{
	char *str = "linux";				// �ַ��������������ڴ�����У����ܸ���
	char str_array[] = "linux";			// �ַ�������������������ݶ��У����Ը���
	
	// �����Ĵ���
	func1(str);							// ���뱨�����ڼ�ʱ���ִ���
	printf("str = %s.\n", str);
	func2(str_array);
	printf("str_array = %s.\n", str_array);
	
	// ����Ĵ���
	func2(str);							// ����ľ���κ���ʾ�������г��ֶδ�����ͱȽ������ˡ�
	printf("str_array = %s.\n", str_array);
	
	return 0;
}

/*
void func1(const char *p)
{										// �˴���Ӧ�øı�*p�����ݣ����Ա��뱨�����ڼ�ʱ���ִ���
	*p = 'a';							// error: assignment of read-only location ��*p��
}
*/

void func2(char *p)
{
	*p = 'b';
}