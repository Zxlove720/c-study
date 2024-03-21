#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;

typedef struct liststack
{
	datatype data;
	struct liststack* next;
}liststack;

//void initstack(liststack** top)
//{
//	*top = NULL;
//}
//
//bool isempty(liststack** top)
//{
//	if (*top == NULL)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//liststack* creatnode(datatype value)
//{
//	liststack* newnode = (liststack*)malloc(sizeof(liststack));
//	if (newnode == NULL)
//	{
//		printf("error\n");
//		exit(1);
//	}
//	newnode->data = value;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void push(liststack** top)
//{
//	printf("vlaue?\n");
//	datatype value;
//	scanf("%d", &value);
//	liststack* newnode = creatnode(value);
//	newnode->next = *top;					
//	*top = newnode;							
//	printf("push\n\n");
//}
//
//datatype pop(liststack** top)
//{
//	liststack* temp;
//	datatype poped;
//	temp = *top;
//	poped = temp->data;
//	*top = temp->next;
//	free(temp);				
//	temp = NULL;			
//	return poped;
//}
//
//int main()
//{
//	liststack* top;
//	initstack(&top);
//	int flag = isempty(&top);
//	if (flag == 0)
//	{
//		printf("in the end\n");
//		return 0;
//	}
//	printf("how much?\n");
//	int number;
//	scanf("%d", &number);
//	int i = 0;
//	for (i = 0; i < number; i++)
//	{
//		push(&top);
//
//	}
//	for (i = 0; i < number; i++)
//	{
//		printf("%d ", pop(&top));
//	}
//	return 0;
//}

void initstack(liststack** top)
{
	*top = NULL;
}

bool isempty(liststack** top)
{
	if (*top == NULL)
	{
		return true;
	}
	return false;
}

liststack* creatnode(datatype value)
{
	liststack* newnode = (liststack*)malloc(sizeof(liststack));
	if (newnode == NULL)
	{
		printf("error\n");
		exit(1);
	}
	newnode->data = value;
	newnode->next = NULL;
	return newnode;
}

void push(liststack** top)
{
	printf("vlaue?\n");
	datatype value;
	scanf("%d", &value);
	liststack* newnode = creatnode(value);
	newnode->next = *top;
	*top = newnode;
	printf("push\n\n");
}

datatype pop(liststack** top)
{
	liststack* temp;
	datatype poped;
	temp = *top;
	poped = temp->data;
	*top = temp->next;
	free(temp);
	temp = NULL;
	return poped;
}

int main()
{
	liststack* top;
	initstack(&top);
	bool flag = isempty(&top);
	if (!flag)
	{
		printf("error\n");
		return 0;
	}
	printf("how much?\n");
	int	number;
	scanf("%d", &number);
	int i = 0;
	for (i = 0; i < number; i++)
	{
		push(&top);
	}
	for (i = 0; i < number; i++)
	{
		printf("%d ", pop(&top));
	}
	return 0;
}