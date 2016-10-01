/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：内核链表状态机多线程编译器
 * 功能：演示内核链表的基本使用。
 */
 
#include <linux/list.h>

// driver_info结构体用来存储驱动信息
struct driver_info
{
	int data;
};

// driver结构体用来管理内核中的驱动
struct driver
{
	char name[20];				// 驱动名称
	int id;						// 驱动id编号
	struct driver_info info;	// 驱动信息
	struct list_head list;		// 内核链表节点
};