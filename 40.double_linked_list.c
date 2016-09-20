/*
 * ��˾��XXXX
 * ���ߣ�Rston
 * ��Ŀ�����������˫������
 * ���ܣ���ʾ˫������ĸ��ֻ����㷨��
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ��������ڵ����� */
struct node
{
	int data;				// ��Ч����
	struct node *prev;		// ָ���ϸ��ڵ��ָ��
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
	p->prev = NULL;
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
	new->prev = p; 
	p->next = new;
	
	// �ڵ������1
	pH->data++;
}

/* ��ͷ������ڵ� */
void insert_head(struct node *pH, struct node *new)
{
	// �½ڵ��nextָ��ָ��ԭ���ĵ�1����Ч�ڵ�ĵ�ַ
	new->next = pH->next;
	
	// ԭ����1����Ч�ڵ��prevָ��ָ���½ڵ�ĵ�ַ
	if (NULL != pH->next)
		pH->next->prev = new;
	
	// ͷ�ڵ��nextָ��ָ���½ڵ��ַ
	pH->next = new;
	
	// �½ڵ��prevָ��ָ��ͷ�ڵ�ĵ�ַ
	new->prev = pH;
	
	// �ڵ������1
	pH->data++;
}

/* ͨ��ͷָ���������ڵ� */
void traversal_next(struct node *pH)
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

/* ͨ��ͷָ����ǰ�����ڵ� */
void traversal_prev(struct node *pT)
{
	struct node *p = pT;
	
	while (NULL != p->prev)
	{
		printf("node data is %d.\n", p->data);
		// ��ǰ��1���ڵ�
		p = p->prev;
	}
	printf("Traversal Down.\n");
}

/* ���ݽڵ������ҵ���ɾ���ڵ� */
int delete_node(struct node *pH, int data)
{
	struct node *p = pH;		// ָ��ǰ�ڵ�
	
	while (NULL != p->next)
	{			 
		p = p->next;			
		
		if (data == p->data)
		{
			if (NULL == p->next)
			{
				// �ҵ��Ľڵ���β�ڵ�
				p->prev->next = NULL;
			}
			else
			{
				// �ҵ��Ľڵ�����ͨ�ڵ�
				// ǰ1���ڵ��nextָ��ָ���һ���ڵ���׵�ַ
				p->prev->next = p->next;
				// ��һ���ڵ��prevָ��ָ��ǰһ���ڵ���׵�ַ
				p->next->prev = p->prev;
				
			}
			// ��ǰ�ڵ��prev��nextָ�붼���ùܣ���Ϊ�˴����������������ڵ�
			free(p);
			
			return 0;
		}
		
		// �ڵ������1
		pH->data--;
	}
	
	printf("can't find the node.\n");
	return -1;
}

int main(int argc, char **argv)
{
	// ����ͷָ���ͷ�ڵ㲢��ͷָ��ָ��ͷ�ڵ�
	struct node *pHeader = creat_node(0);
	
	// ���ڲ�����ǰ�����ڵ��㷨
	struct node *tail = NULL;
	
	// ���Դ����ڵ�+ͷ����ڵ�+�������ڵ�
	insert_head(pHeader, creat_node(11));
	insert_head(pHeader, creat_node(12));
	insert_head(pHeader, creat_node(13));
	traversal_next(pHeader);
	
	// ����β����ڵ�
	insert_tail(pHeader, creat_node(14));
	insert_tail(pHeader, creat_node(15));
	insert_tail(pHeader, creat_node(16));
	traversal_next(pHeader);
	
	// ������ǰ�����ڵ�
	tail = pHeader->next->next->next->next; 
	traversal_prev(tail);
	
	// ����ɾ���ڵ�
	delete_node(pHeader, 13);
	delete_node(pHeader, 14);
	traversal_next(pHeader);
	
	return 0;
}