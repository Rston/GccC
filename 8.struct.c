/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ���ṹ��͹����弰ö��
 * ���ܣ�����ṹ�岢��ʼ��Ȼ�����á�
 */
#include <stdio.h>
#include <string.h>
 
// ����ṹ�����ͣ�ע�ⲻռ���ڴ�ռ�
struct Student
{
	char name[20];		// ����
	unsigned int num;	// ѧ��
	int isMale;			// �Ա�
};						// ע�������;������
 
int main(int argc, char **argv)
{
	struct Student s1 = {"Rston", 110, 1};	// �ṹ����ȫ��ʼ������ʼ��˳�򲻿ɵߵ�
	
	struct Student s2 = 					// �ṹ�岻��ȫ��ʼ������ʼ��˳��ɵߵ�
	{
		.isMale = 0,						//  ע��ʹ��,�ţ�����ʹ��;�� 
		.num = 120,
	};										// ע�������;������
	
	strcpy(s2.name, "King");				// ���ṹ���е�Ԫ�ظ�ֵ
	
	printf("s1.name = %s. s1.num = %d. s1.isMale = %d.\n", s1.name, s1.num, s1.isMale);
	printf("s2.name = %s. s2.num = %d. s2.isMale = %d.\n", s2.name, s2.num, s2.isMale);
	
	return 0;
}