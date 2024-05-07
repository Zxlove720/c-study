#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//��ջ

//typedef int datatype;
//typedef struct stack
//{
//	datatype data;
//	struct stack* next;
//}stack;
//
//stack* creatnode()
//{
//	stack* newnode = (stack*)malloc(sizeof(stack));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	printf("��������ջ��Ԫ��\n");
//	datatype element;
//	scanf("%d", &element);
//	newnode->data = element;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void push(stack** s)
//{
//	stack* newnode = creatnode();
//	newnode->next = *s;
//	*s = newnode;
//}
//
//datatype pop(stack** s)
//{
//	datatype poped;
//	stack* temp;
//	temp = *s;
//	poped = temp->data;
//	*s = temp->next;
//	free(temp);
//	temp = NULL;
//	return poped;
//}
//
//int main()
//{
//	stack* s = NULL;
//	printf("�ж���Ԫ��Ҫ��ջ?\n");
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		push(&s);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", pop(&s));
//	}
//	return 0;
//}


//ѭ������
typedef int datatype;
typedef struct queue
{
	datatype* data;
	int size;
	int front;
	int rear;
	int tag;
}queue;

void initqueue(queue* q)
{
	printf("��������еĴ�С\n");
	scanf("%d", &q->size);
	q->data = (datatype*)malloc(sizeof(datatype) * q->size);
	q->front = 0;
	q->rear = 0;
	q->tag = 0;
}

void inqueue(queue* q)
{
	if (q->rear == q->front && q->tag == 1)
	{
		printf("FULL\n");
		return;
	}
	printf("������Ҫ��ӵ�Ԫ��\n");
	datatype element;
	scanf("%d", &element);
	q->data[q->rear] = element;
	q->rear = (q->rear + 1) % q->size;
	q->tag = 1;
}

datatype outqueue(queue* q)
{
	if (q->front == q->rear && q->tag == 0)
	{
		printf("is empty\n");
		return -65535;
	}
	datatype temp;
	temp = q->data[q->front];
	q->front = (q->front + 1) % q->size;
	q->tag = 0;
	return temp;
}

int main()
{
	queue q;
	initqueue(&q);
	printf("�м���Ԫ��Ҫ���?\n");
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		inqueue(&q);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", outqueue(&q));
	}
	printf("\n");
	for (i = 0; i < n; i++)
	{
		inqueue(&q);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", outqueue(&q));
	}
	printf("\n");

	return 0;
}



