/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��C�����ַ������ַ�����
 * ���ܣ���ʾ�ַ������ַ��������strlen��sizeof�ľ���
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int mystrlen(const char *str)		
{
	int cnt = 0;
	while (*str++ != '\0')
	{
		cnt++;
	}
	return cnt;
}

char b[] = "hello";

int main(int argc, char **argv)
{
	// strlen�⺯���������Ƿ����ַ����ĳ���
	char *str = "linux";
	int mylen = mystrlen(str);
	int len = strlen(str);
	printf("len = %d. mylen = %d.\n", len, mylen);		// len = 5. mylen = 5.
	
	// �����sizeof�ؼ��ֵ�ʹ��
	int a[4] = {0};
	printf("sizeof(a) = %d.\n", sizeof(a));				// sizeof(a) = 16.
	
	// �ַ�����ʼ����strlen��sizeof�ؼ��ֵ�ʹ��
	char *s = "linux";
	printf("sizeof(s) = %d\n", sizeof(s));				// sizeof(s) = 4
	printf("strlen(s) = %d\n", strlen(s));				// strlen(s) = 5
	
	// �ַ�����������ݶ�
	char *c = b;
	
	// �ַ��������ջ��
	char d[] = "hello";
	char *e = d;
	
	// �ַ�������ڶ���
	char *f = (char *)malloc(10*sizeof(char));
	
	return 0;
}