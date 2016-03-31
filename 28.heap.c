/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C�����ڴ�������
 * ���ܣ���ʾ���ڴ�ʹ�÷���
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	// ��1��������Ͱ��ڴ�
	int *p = (int *)malloc(100*sizeof(int));
	
	// ��2�������������ͷųɹ�
	if (NULL == p)
	{
		printf("malloc error.\n");
		return -1;
	}
	
	// ��3����ʹ�����뵽���ڴ�
	*(p+10) = 123;
	*(p+11) = 456;
	printf("*(p+10) = %d.\n", *(p+10));		// *(p+10) = 123.
	printf("*(p+11) = %d.\n", *(p+11));		// *(p+11) = 456.
	
	// ��4�����ͷ����뵽���ڴ�
	free(p);
	
	// free����ڴ滹�ǿɱ�ʹ�ã������շǳ��󣬻���ɲ���Ԥ֪�Ľ��
	*(p+20) = 123;
	*(p+30) = 456;
	printf("*(p+20) = %d.\n", *(p+20));		// *(p+20) = 123.
	printf("*(p+30) = %d.\n", *(p+30));		// *(p+30) = 456.
	
	
	// malloc(0)�ı��֣�������������malloc(0)��Ȼ�󽫷��صĵ�ַ�������
	int *p1 = (int *)malloc(0);
	if (NULL == p1)
	{
		printf("malloc error.\n");
		return -1;
	}
	if (NULL != p1)
	{
		printf("p1 = %p.\n", p1);	// p1 = 0x9a85008.
	}
	int *p2 = (int *)malloc(0);
	if (NULL == p2)
	{
		printf("malloc error.\n");
		return -1;
	}
	if (NULL != p2)
	{
		printf("p2 = %p.\n", p2);	// p2 = 0x9a85018.
	}
	printf("(p2-p1)*sizeof(int) = %d.\n", (p2-p1)*sizeof(int));	// (p2-p1)*sizeof(int) = 16. ����16���ֽڵĶ��ڴ�
	free(p1);
	free(p2);
	
	// ����malloc(4)ʵ�ʵķ���Ч��
	int *p3 = (int *)malloc(4);
	if (NULL == p3)
	{
		printf("malloc error.\n");
		return -1;
	}
	if (NULL != p3)
	{
		printf("p3 = %p.\n", p3);	// p3 = 0x9a85028.
	}
	int *p4 = (int *)malloc(4);
	if (NULL == p4)
	{
		printf("malloc error.\n");
		return -1;
	}
	if (NULL != p4)
	{
		printf("p4 = %p.\n", p4);	// p4 = 0x9a85038.
	}
	printf("(p4-p3)*sizeof(int) = %d.\n", (p4-p3)*sizeof(int));	// (p4-p3)*sizeof(int) = 16. ����16���ֽڵĶ��ڴ�
	free(p3);
	free(p4);
	
	// ����malloc���ڴ��Խ�����
	int *p5 = (int *)malloc(10*sizeof(int));
	if (NULL == p5)
	{
		printf("malloc error.\n");
		return -1;
	}
	*(p5+5) = 123;
	printf("*(p5+5) = %d.\n", *(p5+5));				// *(p5+5) = 123.
	*(p5+100000) = 456;
	printf("*(p5+100000) = %d.\n", *(p5+10000));	// Segmentation fault (core dumped) ���ʵ��˲��÷��ʵ��ڴ�ռ�
	free(p5);
	
	return 0;
}