/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言内存管理机制
 * 功能：演示堆内存使用范例
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	// 第1步：申请和绑定内存
	int *p = (int *)malloc(100*sizeof(int));
	
	// 第2步：检验申请释放成功
	if (NULL == p)
	{
		printf("malloc error.\n");
		return -1;
	}
	
	// 第3步：使用申请到的内存
	*(p+10) = 123;
	*(p+11) = 456;
	printf("*(p+10) = %d.\n", *(p+10));		// *(p+10) = 123.
	printf("*(p+11) = %d.\n", *(p+11));		// *(p+11) = 456.
	
	// 第4步：释放申请到的内存
	free(p);
	
	// free后堆内存还是可被使用，但风险非常大，会造成不可预知的结果
	*(p+20) = 123;
	*(p+30) = 456;
	printf("*(p+20) = %d.\n", *(p+20));		// *(p+20) = 123.
	printf("*(p+30) = %d.\n", *(p+30));		// *(p+30) = 456.
	
	
	// malloc(0)的表现，连续调用两次malloc(0)，然后将返回的地址相减即可
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
	printf("(p2-p1)*sizeof(int) = %d.\n", (p2-p1)*sizeof(int));	// (p2-p1)*sizeof(int) = 16. 分配16个字节的堆内存
	free(p1);
	free(p2);
	
	// 测试malloc(4)实际的分配效果
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
	printf("(p4-p3)*sizeof(int) = %d.\n", (p4-p3)*sizeof(int));	// (p4-p3)*sizeof(int) = 16. 分配16个字节的堆内存
	free(p3);
	free(p4);
	
	// 测试malloc堆内存的越界访问
	int *p5 = (int *)malloc(10*sizeof(int));
	if (NULL == p5)
	{
		printf("malloc error.\n");
		return -1;
	}
	*(p5+5) = 123;
	printf("*(p5+5) = %d.\n", *(p5+5));				// *(p5+5) = 123.
	*(p5+100000) = 456;
	printf("*(p5+100000) = %d.\n", *(p5+10000));	// Segmentation fault (core dumped) 访问到了不该访问的内存空间
	free(p5);
	
	return 0;
}