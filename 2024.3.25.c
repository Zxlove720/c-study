#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;

#define maxsize 5

typedef struct queue
{
	datatype data[maxsize];
	int front;
	int rear;
	int size;
}queue;

void inqueue(queue* q)
{
	if (q->size >= maxsize)
	{
		printf("队列已满\n");
		return;
	}
	printf("输入想要入队的元素\n");
	datatype element;
	scanf("%d", &element);
	q->data[q->rear] = element;
	q->rear++;
	q->size++;
}

datatype outqueue(queue* q)
{
	if (q->size == 0)
	{
		printf("empty\n");
		exit(1);
	}
	datatype temp;
	temp = q->data[q->front];
	q->front = (q->front + 1) % maxsize;
	q->size--;
	return temp;
}

int main()
{
	queue q;
	q.front = 0;
	q.rear = 0;
	q.size = 0;
	int i = 0;
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		inqueue(&q);
	}
	printf("有几个要出队?\n");
	int number;
	scanf("%d", &number);
	for (i = 0; i < number; i++)
	{
		printf("%d ", outqueue(&q));
	}
	for (i = 0; i < number; i++)
	{
		inqueue(&q);
	}
	return 0;
}