/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C�����ڴ�������
 * ���ܣ���ʾ���ֻ��ƣ�ջ���ѡ����ݶΣ������ڴ�ռ�
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ʹ�öѻ��������ڴ�ռ䣬����ȫ�ֱ���
char str[] = "linux";

int main(int argc, char **argv)
{
	// const������ʵ�ַ�ʽ
	// ��Ƭ����const���εı������ô������ʵ��ֻ��
	// gccͨ�����������ʵ��ֻ��������ʵ�ʴ�������ݶ���
	const int a = 8;
	int *p1 = (int *)(&a);		// �����޾����ޱ���
	*p1 = 10;						
	printf("a = %d.\n", *p1);	// a = 10.
	
	// ʹ��ջ���������ڴ�ռ䣬����ֲ�����
	char b[] = "linux";
	
	// ʹ�öѻ��������ڴ�ռ䣬�ֶ������ڴ���ͷ��ڴ�
	char *p = (char *)malloc(10*sizeof(char));
	if (NULL == p)
	{
		printf("malloc error.\n");
		return -1;
	}
	memset(p, 0, 10*sizeof(char));
	strcpy(p, "linux");
	
	printf("str = %s. b = %s. p = %s.\n", str, b, p);		// str = linux. b = linux. p = linux.
	printf("str = %p. b = %p. p = %p.\n", str, b, p);		// str = 0x804a024. b = 0xbff8cc86. p = 0x8ddc008.

	free(p);
	
	return 0;
}