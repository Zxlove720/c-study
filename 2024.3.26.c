#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define maxsize 10

typedef int datatype;

typedef struct queue
{
	datatype data[maxsize];
	int front;
	int rear;
	int tag;
}queue;

void inqueue(queue* q)
{
	if (q->front == q->rear && q->tag == 1)
	{
		printf("full\n");
		return;
	}
	datatype element;
	scanf("%d", &element);
	q->data[q->rear] = element;
	q->rear = (q->rear + 1) % maxsize;
	q->tag = 1;
}

datatype outqueue(queue* q)
{
	if (q->front == q->rear && q->tag == 0)
	{
		printf("empty\n");
		exit(1);
	}
	datatype temp;
	temp = q->data[q->front];
	q->front = (q->front + 1) & maxsize;
	return temp;
}

int main()
{
	queue q;
	q.front = 0;
	q.rear = 0;
	q.tag = 0;
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		inqueue(&q);
	}
	for (i = 0; i < n; i++)
	{
		datatype number = outqueue(&q);
		printf("%d ", number);
	}
	return 0;
}