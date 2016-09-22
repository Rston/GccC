/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ���ͣ�http://blog.csdn.net/rston
 * GitHub��https://github.com/rston
 * ��Ŀ�����������˫������
 * ���ܣ���ʾ��������ĸ��ֻ����㷨��
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ��������ڵ����� */
struct node
{
	int data;				// ��Ч����
	struct node *next;		// ָ���¸��ڵ��ָ��
};

/* �����µĽڵ� */
struct node *creat_node(int data)
{
	// ����ռ�
	struct node *p = (struct node*)malloc(sizeof(struct node));
	if (NULL == p)
	{
		printf("malloc error.\n");
		return NULL;
	}
	
	// ����ռ�
	memset(p, 0, sizeof(struct node));
	
	// ���ռ�
	p->data = data;
	p->next = NULL;
}

/* ��β������ڵ� */
void insert_tail(struct node *pH, struct node *new)
{
	struct node *p = pH;
	
	// �ҵ����������1���ڵ�
	while (NULL != p->next)
	{
		p = p->next;	// ������1���ڵ�
	}
	
	// �����1���ڵ������½ڵ�
	p->next = new;
	
	// �ڵ������1
	pH->data++;
}

/* ��ͷ������ڵ� */
void insert_head(struct node *pH, struct node *new)
{
	// �½ڵ��е�nextָ��ԭ�ȵĵ�1���ڵ�
	new->next = pH->next;
	
	// ͷ�ڵ��nextָ���½ڵ�
	pH->next = new;
	
	// �ڵ������1
	pH->data++;
}

/* ͨ��ͷָ������ڵ� */
void traversal(struct node *pH)
{
	struct node *p = pH;
	
	printf("The cnts of node is %d.\n", pH->data);
	while (NULL != p->next)
	{
		// ������1���ڵ�
		p = p->next;
		printf("node data is %d.\n", p->data);
	}
	printf("Traversal Down.\n");
}

/* ���ݽڵ������ҵ���ɾ���ڵ� */
int delete_node(struct node *pH, int data)
{
	struct node *p = pH;		// ָ��ǰ�ڵ�
	struct node *pPrev = NULL;	// ָ��ǰ�ڵ��ǰ1���ڵ�
	
	while (NULL != p->next)
	{
		pPrev = p;				 
		p = p->next;			
		
		if (data == p->data)
		{
			if (NULL == p->next)
			{
				// �ҵ��Ľڵ���β�ڵ�
				pPrev->next = NULL;
			}
			else
			{
				// �ҵ��Ľڵ�����ͨ�ڵ�
				pPrev->next = p->next;
			}
			free(p);
			
			return 0;
		}
		
		// �ڵ������1
		pH->data--;
	}
	
	printf("can't find the node.\n");
	return -1;
}

/* ͨ��ð�ݷ����������� */
void reverse_linkedlist(struct node *pH)
{
	struct node *p = pH->next;		// pHָ��ͷ�ڵ㣬pָ���1����Ч�ڵ�
	struct node *pBack;				// ���浱ǰ�ڵ�ĺ�һ���ڵ��ַ

	// ������û����Ч�ڵ����ֻ��һ����Ч�ڵ�ʱ�����������κβ���
	if ((NULL ==p) || (NULL == p->next))
		return;
	
    while (NULL != p->next)
    {
        pBack = p->next;
        p->next = pBack->next;
        pBack->next = pH->next;
        pH->next = pBack;
    }
}

int main(int argc, char **argv)
{
	// ����ͷָ���ͷ�ڵ㲢��ͷָ��ָ��ͷ�ڵ�
	struct node *pHeader = creat_node(0);
	
	// ���Դ����ڵ�+ͷ����ڵ�+�����ڵ�
	insert_head(pHeader, creat_node(11));
	insert_head(pHeader, creat_node(12));
	insert_head(pHeader, creat_node(13));
	traversal(pHeader);
	
	// ����β����ڵ�
	insert_tail(pHeader, creat_node(14));
	insert_tail(pHeader, creat_node(15));
	insert_tail(pHeader, creat_node(16));
	traversal(pHeader);
	
	// ����ɾ���ڵ�
	delete_node(pHeader, 13);
	delete_node(pHeader, 14);
	traversal(pHeader);
	
	// ������������
	reverse_linkedlist(pHeader);
	traversal(pHeader);
	
	return 0;
}