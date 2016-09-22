/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ��λ�����������Ĵ���
 * ���ܣ���ʾ����ȡ����λ��λ�����������Ĵ�����
 */
#include <stdio.h>

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

int main(char argc, char **argv)
{
	// ��һ���Ĵ���ֵ��bit4��bit7ȡ��������λ����
	unsigned int a = 0x123d0c37;
	print_bin(a);					// 0001 0010 0011 1101 0000 1100 0011 0111 
	a ^= (0xFF << 4);
	print_bin(a);					// 0001 0010 0011 1101 0000 0011 1100 0111 
	
	// ��һ���Ĵ���ֵ��bit4��bit7��1������λ����
	unsigned int b = 0x123d0c37;	
	print_bin(b);					// 0001 0010 0011 1101 0000 1100 0011 0111 
	b |= (0xFF << 4);
	print_bin(b);					// 0001 0010 0011 1101 0000 1111 1111 0111			
	
	// ��һ���Ĵ���ֵ��bit4��bit7��0������λ����
	unsigned int c = 0x123d0c37;	
	print_bin(c);					// 0001 0010 0011 1101 0000 1100 0011 0111 
	c &= ~(0xFF << 4);
	print_bin(c);					// 0001 0010 0011 1101 0000 0000 0000 0111 
	
	return 0;
}