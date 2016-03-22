/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ���������ͺ�sizeof�����
 * ���ܣ���ʾsizeof����������顢ָ�������һ��ĸ������
 */
 
#include <stdio.h>
#include <string.h>

#define dpChar	char *
typedef char * tpChar;

void func(int str[], int n)
{
	printf("sizeof(str) = %d.\n", sizeof(str));					// 4
	printf("n = %d.\n", n);										// 40
}

int main(int argc, char **argv)
{
	char str1[] = "hello";
	printf("sizeof(str1) = %d.\n", sizeof(str1));				// 6
	printf("sizeof(str1[0]) = %d.\n", sizeof(str1[0]));			// 1
	printf("strlen(str1) = %d.\n", strlen(str1));				// 5
	
	char *str2 = "hello";
	printf("sizeof(str2) = %d.\n", sizeof(str2));				// 4
	printf("sizeof(*str2) = %d.\n", sizeof(*str2));				// 1
	printf("strlen(str2) = %d.\n", strlen(str2));				// 5
	
	int a = 10;
	printf("sizeof(a) = %d. sizeof(int) = %d.\n", sizeof(a), sizeof(int));	// sizeof(a) = 4. sizeof(int) = 4.
	
	double b[10] = {0.0};
	printf("sizeof(b) = %d.\n", sizeof(b));						// sizeof(b) = 80.
	
	int str3[10] = {0};
	func(str3, sizeof(str3));
	
	tpChar p1, p2;												// �ȼ���char *p1, *p2;��char *p1; char *p2;
	dpChar p3, p4;												// �ȼ���char *p3, p4;��char *p3; char p3;
	printf("sizeof(p1) = %d.\n", sizeof(p1));					// 4
	printf("sizeof(p2) = %d.\n", sizeof(p2));					// 4
	printf("sizeof(p3) = %d.\n", sizeof(p3));					// 4
	printf("sizeof(p4) = %d.\n", sizeof(p4));					// 1
	
	int c[3] = {1, 2, 3};									
	int i = 0;
	for (i=0; i<(sizeof(c)/sizeof(c[0])); i++)					// ʹ��sizeof(c)/sizeof(c[0])����������Ԫ�ظ���
	{
		printf("c[%d] = %d.\n", i, c[i]);
	}
	
	return 0;
}