/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��C�����ڴ�ӳ��ʹ洢��ؼ���
 * ���ܣ���ʾ������������ϸ�ڡ�
 */
 
#include <stdio.h>

int var = 10;

int main(int argc, char **argv)
{
#if 1
	printf("In main first: var = %d.\n", var);			// In main first: var = 10.
	int var = 8;
	
	if (1)
	{
		int var = 5;
		printf("In if: var = %d.\n", var);				// In if: var = 5.
	}
	printf("After if: var = %d.\n", var);				// After if: var = 8.
#endif
	
#if 0
	int i = 0;
	
	for (i=0; i<10; i++)
	{
		int ret = 5;
		printf("In for: i = %d.\n", ret);
	}
	printf("Outside for: ret = %d.\n", ret);			//  error: ��ret�� undeclared (first use in this function)
#endif	
	
	return 0;
}