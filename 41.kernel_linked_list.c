/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ���ں�����״̬�����̱߳�����
 * ���ܣ���ʾ�ں�����Ļ���ʹ�á�
 */
 
#include <linux/list.h>

// driver_info�ṹ�������洢������Ϣ
struct driver_info
{
	int data;
};

// driver�ṹ�����������ں��е�����
struct driver
{
	char name[20];				// ��������
	int id;						// ����id���
	struct driver_info info;	// ������Ϣ
	struct list_head list;		// �ں�����ڵ�
};