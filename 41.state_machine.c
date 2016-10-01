/*
 * 公司：XXXX
 * 作者：Rston
 * 博客：http://blog.csdn.net/rston
 * GitHub：https://github.com/rston
 * 项目：内核链表状态机多线程编译器
 * 功能：使用C语言实现简单的状态机。
 */
 
#include <stdio.h>

// 给状态机定义状态集
typedef enum 
{
	STATE1,
	STATE2,
	STATE3,
	STATE4,
	STATE5,
	STATE6,
	STATE7,
}STATE;

int main(int argc, char **argv)
{
	int num = 0;
	
	// current_state记录状态机的当前状态
	STATE current_state = STATE1;		
	
	printf("请输入密码，密码正确开锁.\n");
	while (1)
	{
		scanf("%d", &num);
		
		switch (current_state)
		{
			case STATE1:
				if (num == 1)
				{
					current_state = STATE2;		// 用户输入对了1步，STATE走1步
				}
				else
				{
					current_state = STATE1;		// 用户输入错误，返回初始状态
				}
				break;
			case STATE2:
				if (num == 2)
				{
					current_state = STATE3;		
				}
				else
				{
					current_state = STATE1;
				}
				break;
			case STATE3:
				if (num == 3)
				{
					current_state = STATE4;		
				}
				else
				{
					current_state = STATE1;
				}
				break;
			case STATE4:
				if (num == 4)
				{
					current_state = STATE5;		
				}
				else
				{
					current_state = STATE1;
				}
				break;
			case STATE5:
				if (num == 5)
				{
					current_state = STATE6;		
				}
				else
				{
					current_state = STATE1;
				}
				break;
			case STATE6:
				if (num == 6)
				{
					current_state = STATE7;		
				}
				else
				{
					current_state = STATE1;
				}
				break;
			default:
				current_state = STATE1;
		}
		
		if (STATE7 == current_state)
		{
			printf("锁开了.\n");
			break;
		}
	}
	
	return 0;
}