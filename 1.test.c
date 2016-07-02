/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：经典入门hello world
 * 功能：
 *  (1)打印下面图形
 *    *
 *   ***
 *  *****
 *   ***
 *    *
 *  (2)打印下面图形
 *  ------------------------------------------
 *  ** blog/Rston **
 *  ** Rston      **
 *  ------------------------------------------
 */
#include <stdio.h>

int main(int argc, char **argv)
{
#if 0
	printf("version1\n");
	printf("\n");
	printf("  *\n");
	printf(" ***\n");
	printf("*****\n");
	printf(" ***\n");
	printf("  *\n");
	printf("\n");
#endif

#if 0
	printf("version2\n");
	printf("\n  *\n ***\n*****\n ***\n  *\n\n");
#endif

#if 0
	printf("version3\n");
	printf("\n  *	\
	        \n ***	\
			\n*****	\
			\n ***	\
			\n  *	\
			\n\n");
#endif

	printf("version1\n");
	printf("\n------------------------------------------\
			\n** blog/Rston **                          \
			\n** Rston      **                          \
			\n------------------------------------------\
			\n\n");
			
	return 0;
}