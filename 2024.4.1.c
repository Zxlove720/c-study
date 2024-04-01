#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;

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
		printf("error\n");
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
	printf("请输入元素的值\n");
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
	datatype temp;
	list* pointer;
	pointer = q->front->next;
	temp = pointer->data;
	q->front = pointer;
	if (pointer == q->rear)
	{
		q->rear = q->front;
	}
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
	printf("有几个元素要入队\n");
	int n;
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