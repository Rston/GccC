/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��Ұָ���const�ؼ���
 * ���ܣ���ʾҰָ�롣
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int *p;								    // �ֲ�������������ջ�ϣ�ջ������ʹ�ã�����ֵ�������
	
	printf("p = %p. &p = %p.\n", p, &p);	// p = 0xb7730ff4. &p = 0xbfb65c5c.
	//*p = 4;								// Segmentation fault (core dumped)����ʱ�δ���ԭ��ΪҰָ��
	
	
	int *pointer = NULL, a = 10;			// ����ָ��ʱͬʱ��ʼ��ΪNULL		
	pointer = &a;							// ��ָ��ʹ��ǰ�����丳ֵ�󶨸�һ�����õ�ַ
	if (NULL != pointer)					// ��ָ�������ǰ�����жϸ�ָ���Ƿ�ΪNULL
	{
		*pointer = 8;						
	}
	pointer = NULL;							// 	ָ��ʹ����󣬽��丳ֵΪNULL
	
	return 0;
}