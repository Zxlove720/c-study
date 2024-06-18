#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// 栈
//typedef struct stack
//{
//	int* data;
//	int top;
//}stack;
//
//void initstack(stack* s, int size)
//{
//	s->top = -1;
//	s->data = (int*)malloc(sizeof(int) * size);
//}
//
//void push(stack* s, int element, int size)
//{
//	if (s->top >= size - 1)
//	{
//		printf("栈已满\n");
//		return;
//	}
//	s->data[++s->top] = element;
//}
//
//int pop(stack* s)
//{
//	if (s->top == -1)
//	{
//		printf("is empty\n");
//		return -5;
//	}
//	return s->data[s->top--];
//}
//
//int main()
//{
//	printf("你想要多大的栈?\n");
//	int size;
//	scanf("%d" , &size);
//	stack s;
//	initstack(&s, size);
//	printf("有多少元素要入栈?\n");
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d个元素\n",i+1
//		);
//		int element;
//		scanf("%d", &element);
//		push(&s, element, size);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", pop(&s));
//	}
//	return 0;
//}


typedef struct stack
{
	int data;
	struct stack* next;
}stack;

bool isempty(stack* top)
{
	if (top == NULL)
	{
		return true;
	}
	return false;

}

stack* creatnewnode(int element)
{
	stack* newnode = (stack*)malloc(sizeof(stack));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	newnode->data = element;
	newnode->next = NULL;
	return newnode;
}

void push(stack** top, int element)
{
	stack* newnode = creatnewnode(element);
	newnode->next = *top;
	*top = newnode;
}

int pop(stack** top)
{
	if (isempty(*top))
	{
		printf("empty\n");
		return -36200;
	}
	stack* temp;
	temp = *top;
	int poped;
	poped = temp->data;
	*top = temp->next;
	return poped;
}

int main()
{
	stack* top = NULL;
	if (!isempty(top))
	{
		printf("init failed\n");
		return - 1;
	}
	printf("请输入有几个元素要入栈?\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		int element;
		scanf("%d", &element);
		push(&top, element);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", pop(&top));
	}
	return 0;
}


