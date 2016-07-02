/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ��C���Խṹ��������
 * ���ܣ��ṹ�����������⡣
 */
#include <stdio.h>

//#pragma pack(128)

// ���Ƚṹ����ʼ��ַ������4�ֽڶ��룬����ɱ�������֤
// ��1��Ԫ�أ�int���ͱ���Ķ��������4����GCC�У���a����ʼ��ַΪ�����ṹ�����ʼ��ַ����Ȼ4�ֽڶ��룬
// ��a�Ľ�����ַ����һ��Ԫ�ؾ�����
// ��2��Ԫ�أ�char���ͱ���Ķ��������1����GCC�У�����b����ʼ��ַ�������ţ���Ϊa����ռ��4�ֽ��ڴ�ռ䣬
// a�Ѿ�����4�ֽڶ��룬��b��ֱ�ӷţ�����䣩����b�Ľ�����ַ����һ��Ԫ�ؾ�����
// ��3��Ԫ�أ�short���ͱ���Ķ��������2����GCC�У�����c����ʼ��ַ����Ϊż����ַ������c���ܽ�����b����ţ�
// �����������b֮�����1�ֽڵ���䣨padding����Ȼ���ٿ�ʼ��c��c�Ľ�����ַ�������ṹ���������4�ֽڶ��������

//#pragma pack(1)			// ���ñ��������뷽ʽΪ1�ֽڶ���

struct mystruct1
{							// 1�ֽڶ���	4�ֽڶ���
    int a;					// 4			4
    char b;					// 1			2(1+1)
    short c;				// 2			2
};

typedef struct mystruct2
{							// 1�ֽڶ���	4�ֽڶ���
    char a;					// 1			4(1+3)
    int b;					// 4			4
    short c;				// 2			4(2+2)
}MyS2;

typedef struct mystruct5
{							// 1�ֽڶ���	4�ֽڶ���
    int a;					// 4			4
    struct mystruct1 s1;	// 7			8
    double b;				// 8			8
    int c;					// 4			4	
}MyS5;

struct stu
{							// 1�ֽڶ���	4�ֽڶ���
	char sex;				// 1			4(1+3)
	int length;				// 4			4
	char name[10];			// 10			12(10+2)
};

//#pragma()					// ���ñ��������뷽ʽΪ1�ֽڶ���

// ʹ��__attribute__((packed))ָ�����ñ��������뷽ʽΪ1�ֽڶ���
struct mystruct11
{							// 1�ֽڶ���	4�ֽڶ���
    int a;					// 4			4
    char b;					// 1			2(1+1)
    short c;				// 2			2
}__attribute__((packed));	

struct mystruct22
{							// 1�ֽڶ���	4�ֽڶ���
    char a;					// 1			4(1+3)
    int b;					// 4			4
    short c;				// 2			4(2+2)
}__attribute__((packed));

// ʹ��__attribute__((aligned(n)))ָ�����ñ��������뷽ʽ
// ע��ֻ����Խṹ�����������Ҫ1024������룬�����ǽṹ���еĸ���Ԫ�ض�����1024�ֽڶ���
typedef struct mystruct111
{					// 1�ֽڶ���	4�ֽڶ���		2�ֽڶ���
    int a;			// 4			4				4
    char b;			// 1			2(1+1)			2
    short c;		// 2			2				2
	short d;		// 2			4(2+2)			2
}__attribute__((aligned(1024))) My111;

int main(int argc, char **argv)
{
	// sizeof(struct mystruct1) = 8.
	printf("sizeof(struct mystruct1) = %d.\n", sizeof(struct mystruct1));
	// sizeof(struct mystruct2) = 12.
	printf("sizeof(struct mystruct2) = %d.\n", sizeof(struct mystruct2));
	// sizeof(struct mystruct5) = 24.
	printf("sizeof(struct mystruct5) = %d.\n", sizeof(struct mystruct5));
	// sizeof(struct stu) = 20.
	printf("sizeof(struct stu) = %d.\n", sizeof(struct stu));
	
	// sizeof(struct mystruct11) = 7.
	printf("sizeof(struct mystruct11) = %d.\n", sizeof(struct mystruct11));
	// sizeof(struct mystruct22) = 7.
	printf("sizeof(struct mystruct22) = %d.\n", sizeof(struct mystruct22));
	
	// sizeof(My111) = 1024.
	printf("sizeof(My111) = %d.\n", sizeof(My111));
	
	return 0;
}