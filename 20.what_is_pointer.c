/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��ָ�뵽����ʲô
 * ���ܣ���ʾָ��ı��ʺͽ����õ�ע�����
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int a = 0;					// ����1��int���͵ı���a������ʼ��Ϊ0��
	int *p = NULL;				// ����1��ָ�����p��ָ�����p��ָ��ı���Ϊint�ͣ�����ʼ��ΪNULL
	
	p = 4;						// ������4��ֵ��ָ����������Ͳ�ƥ�䣬������������
	p = (int *)4;				// ������4ǿ������ת��Ϊ��int *�����͵�4������ƥ�䣬������ͨ��
	
	
	
	// ����ָ�����
	int *pointer = NULL, b = 1;				// ����1��ָ�����P��ָ�����Pָ��ı���Ϊint�ͣ�����int�ͱ���b
	
	// ��ָ�����
	pointer = &b;							// ��ָ�������ֵ����int�ͱ���b�ĵ�ֵַ����ָ�����pointer
	
	// ������
	*pointer = 10;							// ͨ��ָ�����pointer���м�ӷ������ͱ���b
	printf("*pointer = %d.\n", *pointer);	// *pointer = 10.
	printf("pointer = %p.\n", pointer);		// pointer = 0xbf854684.��ֵ��ָ�����������ֵ�����ͱ���b�ĵ�ֵַ
	printf("&b = %p. &pointer = %p.\n", &b, &pointer);	// &b = 0xbf854684. &pointer = 0xbf854680.
	
	// ��ʾָ��δ����ʼ�������н����õ�Σ��
	int *p2test;							// ������ָ�����p2test����δ����ֵ�����ָ��ָ��δ֪���ڴ�ռ�
	//*p = 888;								// Segmentation fault (core dumped)���δ��󣬷����˲��÷��ʵĵ�ַ�ռ䡣
	int *p2null = NULL;
	//*p = 999;								// Segmentation fault (core dumped)���δ��󣬷����˲��÷��ʵĵ�ַ�ռ䡣
	printf("p2null = %p.\n", p2null);		// p2null = (nil). nil��ʾ��ֵ���κα�����û�б���ֵ֮ǰ��ֵ��Ϊnil
	
	return 0;
}