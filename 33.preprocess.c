/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C����Ԥ�������
 * ���ܣ�ͨ��Ԥ����.i�ļ�����#define��typedef�ı�������
 */

/*	32.preprocess.i�ļ����ݣ�
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