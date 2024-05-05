#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//typedef int datatype;
//typedef struct list
//{
//	datatype data;
//	struct list* next;
//}list;
//
//list* creathead()
//{
//	list* head = (list*)malloc(sizeof(list));
//	if (head == NULL)
//	{
//		printf("NULl\n");
//		return NULL;
//	}
//	head->next = NULL;
//	return head;
//}
//
//list* creatnode()
//{
//	printf("请输入节点的值\n");
//	datatype value;
//	scanf("%d", &value);
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	newnode->data = value;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void creatlist(list* head)
//{
//	list* pointer = head;
//	list* newnode = creatnode();
//	while (pointer->next != NULL)
//	{
//		pointer = pointer->next;
//	}
//	pointer->next = newnode;
//}
//
//void displaylist(list* head)
//{
//	list* pointer = head->next;
//	while (pointer != NULL)
//	{
//		printf("%d ", pointer->data);
//		pointer = pointer->next;
//	}
//	printf("\n");
//}
//
//void insertnode(list* head)
//{
//	printf("请输入插入的位置\n");
//	int place;
//	scanf("%d", &place);
//	list* newnode = creatnode();
//	int i = 0;
//	list* pointer = head;
//	while (pointer->next != NULL && i < place - 1)
//	{
//		pointer = pointer->next;
//		i++;
//	}
//	newnode->next = pointer->next;
//	pointer->next = newnode;
//}
//
//void deletenode(list* head)
//{
//	printf("输入删除第几个节点\n");
//	int place;
//	scanf("%d", &place);
//	list* pointer = head;
//	int i = 0;
//	while (pointer->next != NULL && i < place - 1)
//	{
//		pointer = pointer->next;
//		i++;
//	}
//	list* temp = pointer->next;
//	pointer->next = temp->next;
//	free(temp);
//	temp = NULL;
//}
//
//int main()
//{
//	list* head = creathead();
//	printf("有几个元素要入表?\n");
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		creatlist(head);
//	}
//	displaylist(head);
//	insertnode(head);
//	displaylist(head);
//	deletenode(head);
//	displaylist(head);
//	return 0;
//}

//栈

//typedef int datatype;
//typedef struct stack
//{
//	datatype* data;
//	int top;
//}stack;
//
//void initstack(stack* sk)
//{
//	sk->data = (datatype*)malloc(sizeof(datatype) * 100);
//	if (sk->data == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	sk->top = -1;
//}
//
//void push(stack* sk)
//{
//	if (sk->top < 100)
//	printf("请输入入栈的元素\n");
//	datatype element;
//	scanf("%d", &element);
//	sk->data[++sk->top] = element;
//}
//
//datatype pop(stack* sk)
//{
//	if (sk->top != -1)
//	{
//		return sk->data[sk->top--];
//	}
//	return -7;
//}
//
//
//int main()
//{
//	stack sk;
//	initstack(&sk);
//	printf("有多少元素要入栈?\n");
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		push(&sk);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", pop(&sk));
//	}
//	return 0;
//}

//链栈
typedef int datatype;
typedef struct stack
{
	datatype data;
	struct stack* next;
}stack;

stack* creattop()
{
	stack* top = (stack*)malloc(sizeof(stack));
	if (top == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	return top;
}

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

void push(stack** top)
{
	stack* newnode = creatnode(); 
	newnode->next = *top;         
	*top = newnode;
}

datatype pop(stack** top)
{
	datatype poped;
	stack* temp;
	temp = *top;
	poped = temp->data;
	*top = temp->next;
	free(temp);
	temp = NULL;
	return poped;
}


int main()
{
	stack* top = NULL;
	printf("有多少元素要入栈\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		push(&top);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", pop(&top));
	}
	return 0;
}