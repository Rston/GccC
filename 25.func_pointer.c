/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ������ָ��ͺ���ָ�뼰typedef
 * ���ܣ���ʾ����ָ���ָ�����鼰����ָ�뼰typedef�ؼ����÷���
 */
#include <stdio.h>
#include <string.h>

// �����������һ�����ͣ�������������ֽ�pType�������ǣ�char* (*)(char *, const char *);
typedef char* (*pType1)(char *, const char *);

// ����ָ������
typedef char* (*pType2[5])(char *, const char *);

// ����ָ������ָ��
typedef char* (*(*pType3)[5])(char *, const char *);

void func1(void)
{
	printf("This is a test for function pointer.\n");
}

int main(int argc, char **argv)
{
	int array1[5] = {0};
	// ����ָ�����͵�ʵ��
	int *pointer1 = array1;			// ����ƥ�䣬�����ޱ����޴���
	//int *pointer2 = &array1;		// ���Ͳ�ƥ�䣬array1Ϊint *���ͣ�&array1Ϊint (*)[5]����
	int (*pointer3)[5];				// pointer3������Ϊint (*)[5]����
	pointer3 = &array1;				// ����ƥ�䣬�����ޱ����޴���
	
	// �򵥵ĺ���ָ�����
	void (*pFunc)(void);			// ���庯��ָ�����pFunc������ָ������Ϊvoid (*)(void);
	pFunc = func1;					// ����ָ�����pFuncָ��func1������
	pFunc = &func1;					// ����ָ�����pFuncָ��func1������
	pFunc();						// ͨ������ָ����ú�����
	
	// ����������ֵʱ�Ӳ���&Ч�������嶼��һ���ģ�func1 = 0x8048414. &func1 = 0x8048414.
	printf("func1 = %p. &func1 = %p.\n", func1, &func1);	
	
	// ���ӵĺ���ָ�����
	char str[5] = {0};			
	char* (*pFunc1)(char *, const char *);		// ���庯��ָ�����pFunc1������ָ������Ϊchar* (*)(char *, const char *);	
	pFunc1 = stpcpy;
	pFunc1(str, "abc");							// ͨ������ָ����ú�����			
	printf("str= %s.\n", str);					// str= abc.
	
	// ͨ��typedef�ؼ������������ͣ���ʹ�ø����Ͷ�����������ñ���
	char s[5] = {0};				
	pType1 p1 = NULL;							// ʹ��pType1����ָ�����Ͷ���һ������ָ�����p1
	p1 = strcpy;								// ����ָ�����ָ��strcpyָ��
	p1(s, "hehe");								
	printf("s = %s.\n", s);						// s = hehe.
	
	return 0;
}