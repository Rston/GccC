/*
 * 公司：XXXX
 * 作者：Rston
 * 项目：C语言结构体对齐访问
 * 功能：结构体对齐问题详解
 */
#include <stdio.h>

//#pragma pack(128)

// 首先结构体起始地址需满足4字节对齐，这个由编译器保证
// 第1个元素：int类型本身的对齐参数是4（在GCC中），a的起始地址为整个结构体的起始地址，自然4字节对齐，
// 但a的结束地址由下一个元素决定。
// 第2个元素：char类型本身的对齐参数是1（在GCC中），则b的起始地址可以随便放，因为a本身占用4字节内存空间，
// a已经满足4字节对齐，则b可直接放（不填充），但b的结束地址由下一个元素决定。
// 第3个元素：short类型本身的对齐参数是2（在GCC中），则c的起始地址必须为偶数地址处，即c不能紧挨着b来存放，
// 解决方案是在b之后添加1字节的填充（padding），然后再开始放c，c的结束地址由整个结构体必须满足4字节对齐决定。

//#pragma pack(1)			// 设置编译器对齐方式为1字节对齐

struct mystruct1
{							// 1字节对齐	4字节对齐
    int a;					// 4			4
    char b;					// 1			2(1+1)
    short c;				// 2			2
};

typedef struct mystruct2
{							// 1字节对齐	4字节对齐
    char a;					// 1			4(1+3)
    int b;					// 4			4
    short c;				// 2			4(2+2)
}MyS2;

typedef struct mystruct5
{							// 1字节对齐	4字节对齐
    int a;					// 4			4
    struct mystruct1 s1;	// 7			8
    double b;				// 8			8
    int c;					// 4			4	
}MyS5;

struct stu
{							// 1字节对齐	4字节对齐
	char sex;				// 1			4(1+3)
	int length;				// 4			4
	char name[10];			// 10			12(10+2)
};

//#pragma()					// 设置编译器对齐方式为1字节对齐

// 使用__attribute__((packed))指令设置编译器对齐方式为1字节对齐
struct mystruct11
{							// 1字节对齐	4字节对齐
    int a;					// 4			4
    char b;					// 1			2(1+1)
    short c;				// 2			2
}__attribute__((packed));	

struct mystruct22
{							// 1字节对齐	4字节对齐
    char a;					// 1			4(1+3)
    int b;					// 4			4
    short c;				// 2			4(2+2)
}__attribute__((packed));

// 使用__attribute__((aligned(n)))指令设置编译器对齐方式
// 注意只是针对结构体整体变量需要1024整体对齐，而不是结构体中的各个元素都按照1024字节对齐
typedef struct mystruct111
{					// 1字节对齐	4字节对齐		2字节对齐
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