/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：位操作符操作寄存器
 * 功能：演示清零取反置位等位操作符操作寄存器。
 */
#include <stdio.h>

/* 以32位二进制格式打印输出data的值，高位为0不清除 */
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
			printf(" ");	// 没隔4位打印1个空格
		}
	}
	printf("\n");			// 最后打印换行符
	
	return 0;
}

int main(char argc, char **argv)
{
	// 把一个寄存器值的bit4～bit7取反，其它位不变
	unsigned int a = 0x123d0c37;
	print_bin(a);					// 0001 0010 0011 1101 0000 1100 0011 0111 
	a ^= (0xFF << 4);
	print_bin(a);					// 0001 0010 0011 1101 0000 0011 1100 0111 
	
	// 把一个寄存器值的bit4～bit7置1，其它位不变
	unsigned int b = 0x123d0c37;	
	print_bin(b);					// 0001 0010 0011 1101 0000 1100 0011 0111 
	b |= (0xFF << 4);
	print_bin(b);					// 0001 0010 0011 1101 0000 1111 1111 0111			
	
	// 把一个寄存器值的bit4～bit7清0，其它位不变
	unsigned int c = 0x123d0c37;	
	print_bin(c);					// 0001 0010 0011 1101 0000 1100 0011 0111 
	c &= ~(0xFF << 4);
	print_bin(c);					// 0001 0010 0011 1101 0000 0000 0000 0111 
	
	return 0;
}