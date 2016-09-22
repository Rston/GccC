/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：单向链表和双向链表
 * 功能：演示双向链表的各种基本算法。
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 构建链表节点类型 */
struct node
{
	int data;				// 有效数据
	struct node *prev;		// 指向上个节点的指针
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
	p->prev = NULL;
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
	new->prev = p; 
	p->next = new;
	
	// 节点个数加1
	pH->data++;
}

/* 从头部插入节点 */
void insert_head(struct node *pH, struct node *new)
{
	// 新节点的next指针指向原来的第1个有效节点的地址
	new->next = pH->next;
	
	// 原来第1个有效节点的prev指针指向新节点的地址
	if (NULL != pH->next)
		pH->next->prev = new;
	
	// 头节点的next指针指向新节点地址
	pH->next = new;
	
	// 新节点的prev指针指向头节点的地址
	new->prev = pH;
	
	// 节点个数加1
	pH->data++;
}

/* 通过头指针向后遍历节点 */
void traversal_next(struct node *pH)
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

/* 通过头指针向前遍历节点 */
void traversal_prev(struct node *pT)
{
	struct node *p = pT;
	
	while (NULL != p->prev)
	{
		printf("node data is %d.\n", p->data);
		// 往前走1个节点
		p = p->prev;
	}
	printf("Traversal Down.\n");
}

/* 根据节点数据找到并删除节点 */
int delete_node(struct node *pH, int data)
{
	struct node *p = pH;		// 指向当前节点
	
	while (NULL != p->next)
	{			 
		p = p->next;			
		
		if (data == p->data)
		{
			if (NULL == p->next)
			{
				// 找到的节点是尾节点
				p->prev->next = NULL;
			}
			else
			{
				// 找到的节点是普通节点
				// 前1个节点的next指针指向后一个节点的首地址
				p->prev->next = p->next;
				// 后一个节点的prev指针指向前一个节点的首地址
				p->next->prev = p->prev;
				
			}
			// 当前节点的prev和next指针都不用管，因为此处会整体销毁整个节点
			free(p);
			
			return 0;
		}
		
		// 节点个数减1
		pH->data--;
	}
	
	printf("can't find the node.\n");
	return -1;
}

int main(int argc, char **argv)
{
	// 创建头指针和头节点并将头指针指向头节点
	struct node *pHeader = creat_node(0);
	
	// 用于测试向前遍历节点算法
	struct node *tail = NULL;
	
	// 测试创建节点+头插入节点+向后遍历节点
	insert_head(pHeader, creat_node(11));
	insert_head(pHeader, creat_node(12));
	insert_head(pHeader, creat_node(13));
	traversal_next(pHeader);
	
	// 测试尾插入节点
	insert_tail(pHeader, creat_node(14));
	insert_tail(pHeader, creat_node(15));
	insert_tail(pHeader, creat_node(16));
	traversal_next(pHeader);
	
	// 测试向前遍历节点
	tail = pHeader->next->next->next->next; 
	traversal_prev(tail);
	
	// 测试删除节点
	delete_node(pHeader, 13);
	delete_node(pHeader, 14);
	traversal_next(pHeader);
	
	return 0;
}