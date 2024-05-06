#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;
typedef struct stack
{
	datatype data;
	struct stack* next;
}stack;

stack* creatnode()
{
	stack* newnode = (stack*)malloc(sizeof(stack));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	printf("请输入入栈的元素\n");
	datatype element;
	scanf("%d", &element);
	newnode->data = element;
	newnode->next = NULL;
	return newnode;
}

void push(stack** s)
{
	stack* newnode = creatnode();
	newnode->next = *s;
	*s = newnode;
}

datatype pop(stack** s)
{
	datatype poped;
	stack* temp;
	temp = *s;
	poped = temp->data;
	*s = temp->next;
	free(temp);
	temp = NULL;
	return poped;
}

int main()
{
	stack* s = NULL;
	printf("有多少元素要入栈\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		push(&s);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", pop(&s));
	}
	return 0;
}