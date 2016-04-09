/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言预处理详解
 * 功能：通过预处理.i文件解释#define和typedef的本质区别
 */

/*	32.preprocess.i文件内容：
# 1 "33.preprocess.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "33.preprocess.c"
# 13 "33.preprocess.c"

typedef char * PCHAR

int main(int argc, char **argv)
{
 char * p1, p2;
 PCHAR p3, p4;

 return 0;
}
*/ 
 
#define pchar char * 
typedef char * PCHAR 

int main(int argc, char **argv)
{
	pchar p1, p2;
	PCHAR p3, p4;
	
	return 0;
}