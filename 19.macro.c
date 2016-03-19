/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：位运算实战演练
 * 功能：使用宏定义完成位运算。
 */

#include <stdio.h>

// 用宏定义将32位数x的第n位到第m位（右边起算，也就是bit0算第1位，m是高位）置位
#define SET_BIT_N_M(x, n, m) (x | ((~((~0U)<<(m-n+1)))<<(n-1)))

// 用宏定义将32位数x的第n位到第m位（右边起算，也就是bit0算第1位，m是高位）清零
#define CLEAR_BIT_N_M(x, n, m) (x & (~((~((~0U)<<(m-n+1)))<<(n-1))))
 
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