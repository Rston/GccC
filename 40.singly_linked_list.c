/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：单向链表和双向链表
 * 功能：演示单向链表的各种基本算法。
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 构建链表节点类型 */
struct node
{
	int data;				// 有效数据
	struct node *next;		// 指向下个节点的指针
};

/* 创建新的节点 */
struct node *creat_node(int data)
{
	// 申请空间
	struct node *p = (struct node*)malloc(sizeof(struct node));
	if (NULL == p)
	{
		printf("malloc error.\n");
		return NULL;
	}
	
	// 清理空间
	memset(p, 0, sizeof(struct node));
	
	// 填充空间
	p->data = data;
	p->next = NULL;
}

/* 从尾部插入节点 */
void insert_tail(struct node *pH, struct node *new)
{
	struct node *p = pH;
	
	// 找到链表中最后1个节点
	while (NULL != p->next)
	{
		p = p->next;	// 往后走1个节点
	}
	
	// 在最后1个节点后添加新节点
	p->next = new;
	
	// 节点个数加1
	pH->data++;
}

/* 从头部插入节点 */
void insert_head(struct node *pH, struct node *new)
{
	// 新节点中的next指向原先的第1个节点
	new->next = pH->next;
	
	// 头节点的next指向新节点
	pH->next = new;
	
	// 节点个数加1
	pH->data++;
}

/* 通过头指针遍历节点 */
void traversal(struct node *pH)
{
	struct node *p = pH;
	
	printf("The cnts of node is %d.\n", pH->data);
	while (NULL != p->next)
	{
		// 往后走1个节点
		p = p->next;
		printf("node data is %d.\n", p->data);
	}
	printf("Traversal Down.\n");
}

/* 根据节点数据找到并删除节点 */
int delete_node(struct node *pH, int data)
{
	struct node *p = pH;		// 指向当前节点
	struct node *pPrev = NULL;	// 指向当前节点的前1个节点
	
	while (NULL != p->next)
	{
		pPrev = p;				 
		p = p->next;			
		
		if (data == p->data)
		{
			if (NULL == p->next)
			{
				// 找到的节点是尾节点
				pPrev->next = NULL;
			}
			else
			{
				// 找到的节点是普通节点
				pPrev->next = p->next;
			}
			free(p);
			
			return 0;
		}
		
		// 节点个数减1
		pH->data--;
	}
	
	printf("can't find the node.\n");
	return -1;
}

/* 通过冒泡法将链表逆序 */
void reverse_linkedlist(struct node *pH)
{
	struct node *p = pH->next;		// pH指向头节点，p指向第1个有效节点
	struct node *pBack;				// 保存当前节点的后一个节点地址

	// 当链表没有有效节点或者只有一个有效节点时，逆序不用做任何操作
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
	// 创建头指针和头节点并将头指针指向头节点
	struct node *pHeader = creat_node(0);
	
	// 测试创建节点+头插入节点+遍历节点
	insert_head(pHeader, creat_node(11));
	insert_head(pHeader, creat_node(12));
	insert_head(pHeader, creat_node(13));
	traversal(pHeader);
	
	// 测试尾插入节点
	insert_tail(pHeader, creat_node(14));
	insert_tail(pHeader, creat_node(15));
	insert_tail(pHeader, creat_node(16));
	traversal(pHeader);
	
	// 测试删除节点
	delete_node(pHeader, 13);
	delete_node(pHeader, 14);
	traversal(pHeader);
	
	// 测试逆序链表
	reverse_linkedlist(pHeader);
	traversal(pHeader);
	
	return 0;
}