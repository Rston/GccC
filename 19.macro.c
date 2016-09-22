/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��λ����ʵս����
 * ���ܣ�ʹ�ú궨�����λ���㡣
 */
#include <stdio.h>

// �ú궨�彫32λ��x�ĵ�nλ����mλ���ұ����㣬Ҳ����bit0���1λ��m�Ǹ�λ����λ
#define SET_BIT_N_M(x, n, m) (x | ((~((~0U)<<(m-n+1)))<<(n-1)))

// �ú궨�彫32λ��x�ĵ�nλ����mλ���ұ����㣬Ҳ����bit0���1λ��m�Ǹ�λ������
#define CLEAR_BIT_N_M(x, n, m) (x & (~((~((~0U)<<(m-n+1)))<<(n-1))))
 
/* ��32λ�����Ƹ�ʽ��ӡ���data��ֵ����λΪ0����� */
int print_bin(unsigned int data)
{
    int len = sizeof(data)*8;
    if (0 == len)
    {
		printf("0");
		printf("\n");
		return 0;
    }
  
	for(--len; len>=0; len--)
    {
		printf("%d", (data&(1<<len)) != 0);
		if (!(len%4))
		{
			printf(" ");	// û��4λ��ӡ1���ո�
		}
	}
	printf("\n");			// ����ӡ���з�
	
	return 0;
}

int main(int argc, char **argv)
{
	int x = 0x12345678, n = 5, m = 10;
	print_bin(x);								// 0001 0010 0011 0100 0101 0110 0111 1000 
	print_bin(SET_BIT_N_M(x, n, m));			// 0001 0010 0011 0100 0101 0111 1111 1000  
	print_bin(CLEAR_BIT_N_M(x, n, m));			// 0001 0010 0011 0100 0101 0100 0000 1000 
	print_bin((~0U));							// 1111 1111 1111 1111 1111 1111 1111 1111  
	print_bin(((~0U)<<(m-n+1)));				// 1111 1111 1111 1111 1111 1111 1100 0000 
	print_bin((~((~0U)<<(m-n+1))));				// 0000 0000 0000 0000 0000 0000 0011 1111 
	print_bin((~((~0U)<<(m-n+1)))<<(n-1));		// 0000 0000 0000 0000 0000 0011 1111 0000 
	print_bin((~((~((~0U)<<(m-n+1)))<<(n-1))));	// 1111 1111 1111 1111 1111 1100 0000 1111
	
	return 0;
}