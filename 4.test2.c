/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ���ṹ���������
 * ���ܣ�����90�ּ�����Ϊ�ţ�80�ּ�����Ϊ����60�ּ�����Ϊ��������Ϊ������
 *       Ȼ������һ��ѧ��������Ȼ��printf��ӡ��you�� ��liang�� ��jige�� ��bujige����
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int grade = 78;
	
	if (grade >= 90)
	{
		printf("you\n");
	}
	else if (grade >= 80)
	{
		printf("liang\n");
	}
	else if (grade >= 60)
	{
		printf("jige\n");
	}
	else
	{
		printf("bujige\n");
	}
	
	return 0;
}