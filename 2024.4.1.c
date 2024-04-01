#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;

//typedef struct stack
//{
//	datatype data;
//	struct stack* next;
//}stack;

//void initstack(stack** top)
//{
//	*top = NULL;
//}
//
//bool isempty(stack* top)
//{
//	if (top == NULL)
//	{
//		return true;
//	}
//	return false;
//}
//
//void push(stack** top)
//{
//	printf("请输入入栈的元素\n");
//	datatype element;
//	scanf("%d", &element);
//	stack* newnode = (stack*)malloc(sizeof(stack));
//	if (newnode == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	newnode->data = element;
//	newnode->next = *top;
//	*top = newnode;
//}
//
//datatype pop(stack** top)
//{
//	if (isempty(*top))
//	{
//		printf("is empty\n");
//		exit(1);
//	}
//	datatype poped;
//	stack* temp;
//	temp = *top;
//	poped = temp->data;
//	*top = temp->next;
//	return poped;
//}
//
//int main()
//{
//	stack* top;
//	initstack(&top);
//	bool flag = isempty(top);
//	if (!flag)
//	{
//		printf("error\n");
//		return -1;
//	}
//	printf("多少元素要入栈?\n");
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		push(&top);
//	}
//	printf("要出栈几个元素?\n");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", pop(&top));
//	}
//	return 0;
//}


//void initstack(stack** top)
//{
//	*top = NULL;
//}
//
//bool isempty(stack* top)
//{
//	if (top == NULL)
//	{
//		return true;
//	}
//	return false;
//}
//
//void push(stack** top)
//{
//	datatype element;
//	printf("请输入要入栈的元素\n");
//	scanf("%d", &element);
//	stack* newnode = (stack*)malloc(sizeof(stack));
//	if (newnode == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	newnode->data = element;
//	newnode->next = *top;
//	*top = newnode;
//}
//
//datatype pop(stack** top)
//{
//	if (isempty(*top))
//	{
//		printf("error\n");
//		exit(1);
//	}
//	datatype poped;
//	stack* temp;
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
//	stack* top;
//	initstack(&top);
//	bool flag = isempty(top);
//	if (!flag)
//	{
//		printf("error\n");
//		return -1;
//	}
//	int i = 0;
//	int n;
//	printf("有多少个元素要入栈\n");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		push(&top);
//	}
//	printf("有多少元素要出栈?\n");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", pop(&top));
//	}
//	return 0;
//}
//#define maxsize 100
//
//typedef struct queue
//{
//	datatype data[maxsize];
//	int front;
//	int rear;
//	int tag;
//}queue;
//
//void initqueue(queue* q)
//{
//	q->front = q->rear = 0;
//	q->tag = 0;
//}
//
//bool isempty(queue* q)
//{
//	if (q->front == q->rear && q->tag == 0)
//	{
//		return true;
//	}
//	return false;
//}
//
//void enqueue(queue* q)
//{
//	if (q->front == q->rear && q->tag == 1)
//	{
//		printf("full\n");
//		return;
//	}
//	datatype element;
//	printf("请输入入队的元素\n");
//	scanf("%d", &element);
//	q->data[q->rear] = element;
//	q->rear = (q->rear + 1) % maxsize;
//	q->tag = 1;
//}
//
//datatype outqueue(queue* q)
//{
//	if (q->front == q->rear && q->tag == 0)
//	{
//		printf("is empty\n");
//		exit(1);
//	}
//	datatype temp;
//	temp = q->data[q->front];
//	q->front = (q->front + 1) % maxsize;
//	q->tag = 0;
//	return temp;
//}
//
//int main()
//{
//	queue q;
//	initqueue(&q);
//	bool flag = isempty(&q);
//	if (!flag)
//	{
//		printf("error\n");
//		return -1;
//	}
//	int i = 0;
//	int n;
//	printf("有几个元素要入队?\n");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		enqueue(&q);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", outqueue(&q));
//	}
//	return 0;
//}


typedef struct list
{
	datatype data;
	struct list* next;
}list;

typedef struct queue
{
	list* front;
	list* rear;
}queue;

void initqueue(queue* q)
{
	q->front = q->rear = (list*)malloc(sizeof(list));
	if (q->front == NULL)
	{
		printf("error");
		return;
	}
	q->front->next = NULL;
}

bool isempty(queue* q)
{
	if (q->front == q->rear || q->front->next == NULL)
	{
		return true;
	}
	return false;
}

void enqueue(queue* q)
{
	printf("输入入队的元素\n");
	datatype element;
	scanf("%d", &element);
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("error\n");
		return;
	}
	newnode->data = element;
	newnode->next = NULL;
	q->rear->next = newnode;
	q->rear = newnode;
}

datatype outqueue(queue* q)
{
	if (isempty(q))
	{
		printf("empty\n");
		exit(1);
	}
	list* pointer;
	datatype temp;
	pointer = q->front->next;
	temp = pointer->data;
	q->front->next = pointer->next;
	if (pointer == q->rear)
	{
		q->rear = q->front;
	}
	free(pointer);
	return temp;
}

int main()
{
	queue q;
	initqueue(&q);
	bool flag = isempty(&q);
	if (!flag)
	{
		printf("error\n");
		return -1;
	}
	int n;
	printf("有多少元素要入队\n");
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		enqueue(&q);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", outqueue(&q));
	}
	return 0;
}
