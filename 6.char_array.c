/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��C����֮����
 * ���ܣ��ַ�����Ķ��塢��ʼ�������á�
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	char str1[] = {97, 98, 99, 100, 101};		// 5 ���岢������ֵ��ʽ��ʼ���ַ�����
	char str2[] = "abcde";						// 6 ���岢���ַ�����ʽ��ʼ���ַ�����
	char str3[] = {'a', 'b', 'c', 'd', 'e'};	// 5 ���岢�Ե����ַ��ķ�ʽ��ʼ������
	char str4[5] = {'a'};						// GCC���еĳ�ʼ���������ȫ�����Ϊ0
	
	// sizeof(str1) = 5. sizeof(str2) = 6. sizeof(str3) = 5.
	printf("sizeof(str1) = %d. sizeof(str2) = %d. sizeof(str3) = %d.\n", sizeof(str1), sizeof(str2), sizeof(str3));
	
	// str1 = abcdeabcde. str2 = abcde. str3 = abcde. str1����Խ������ˡ�
	printf("str1 = %s. str2 = %s. str3 = %s.\n", str1, str2, str3);	// ͨ��%s�����ӡ����ַ�������
	
	// str4 = a.
	printf("str4 = %s.\n", str4);
	
	int i = 0;
	for (i=0; i<5; i++)							// �ַ������е����ַ�����������
	{
		printf("str4[%d] = %c \t %d\n", i, str4[i], str4[i]);
	}
	
	return 0;
}