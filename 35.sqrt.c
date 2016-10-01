/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：静态链接库和动态链接库
 * 功能：演示调用某个数学库函数。
 */
#include <stdio.h>
#include <math.h>

// 编译时需加上-lm链接命令“gcc 35.sqrt.c -lm”
// 执行“ldd a.out”命令后输出
// linux-gate.so.1 =>  (0xb7727000)
// libm.so.6 => /lib/i386-linux-gnu/libm.so.6 (0xb76e7000)
// libc.so.6 => /lib/i386-linux-gnu/libc.so.6 (0xb753d000)
// /lib/ld-linux.so.2 (0xb7728000)

int main(int argc, char **argv)
{
	double a = 16.0;
	// sqrt(16.000000) = 4.000000.
	printf("sqrt(%lf) = %lf.\n", a, sqrt(a));
	
	return 0;
}