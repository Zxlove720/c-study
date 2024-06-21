#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// ˳��ջ
//#define maxsize 10
//
//typedef int datatype;
//
//typedef struct stack
//{
//	datatype data[maxsize];
//	datatype top;
//}stack;
//
//void initstack(stack* s)
//{
//	s->top = -1;
//}
//
//void push(stack* s, int element)
//{
//	if (s->top >= maxsize - 1)
//	{
//		printf("ջ����\n");
//		return;
//	}
//	s->data[++s->top] = element;
//}
//
//void pop(stack* s, int* x)
//{
//	*x = s->data[s->top--];
//}
//
//int main()
//{
//	stack s;
//	initstack(&s);
//	printf("�ж��ٸ�����Ҫ��ջ?\n");
//	int size;
//	scanf("%d", &size);
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		printf("�������%d����ջ������\n", i + 1);
//		int element;
//		scanf("%d", &element);
//		push(&s, element);
//	}
//	int x;
//	for (i = 0; i < size; i++)
//	{
//		pop(&s, &x);
//		printf("%d ", x);
//	}
//	return 0;
//}

// ��ջ
//typedef int datatype;
//typedef struct stack
//{
//	int data;
//	struct stack* next;
//}stack;
//
//stack* initstack()
//{
//	stack* s = NULL;
//	return s;
//}
//
//stack* creatnewnode(datatype element)
//{
//	stack* newnode = (stack*)malloc(sizeof(stack));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	newnode->data = element;
//	newnode->next = NULL;
//	return newnode;
//}
//
//stack* push(stack* s)
//{
//	printf("�������ջԪ��\n");
//	datatype element;
//	scanf("%d", &element);
//	stack* newnode = creatnewnode(element);
//	newnode->next = s;
//	s = newnode;
//	return s;
//}
//
//stack* pop(stack* s, int* x)
//{
//	if (s == NULL)
//	{
//		printf("empty\n");
//		return NULL;
//	}
//	*x = s->data;
//	s = s->next;
//	return s;
//}
//
//int main()
//{
//	stack* s = initstack();
//	printf("�м���Ԫ��Ҫ��ջ?\n");
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		s = push(s);
//	}
//	int x;
//	for (i = 0; i < n; i++)
//	{
//		s = pop(s, &x);
//		printf("%d ", x);
//	}
//	return 0;
//}

// ѭ������
//#define maxsize 3
//
//typedef int datatype;
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
//void inqueue(queue* q, int element, bool* flag)
//{
//	if (q->front == q->rear && q->tag == 1)
//	{
//		*flag = false;
//		printf("��������\n");
//		return;
//	}
//	q->rear = (q->rear + 1) % maxsize;
//	q->data[q->rear] = element;
//	q->tag = 1;
//}
//
//void outqueue(queue* q, int* x, bool* flag)
//{
//	if (q->front == q->rear && q->tag == 0)
//	{
//		printf("����Ϊ��\n");
//		return;
//	}
//	q->front = (q->front + 1) % maxsize;
//	*x = q->data[q->front];
//}
//
//int main()
//{
//	queue q;
//	initqueue(&q);
//	printf("�ж���Ԫ����Ҫ���?\n");
//	int n;
//	scanf("%d", &n);
//	int i;
//	bool flag = true;
//	for (i = 0; i < n; i++)
//	{
//		if (flag)
//		{
//			printf("�������%d��Ԫ��\n", i + 1);
//			datatype element;
//			scanf("%d", &element);
//			inqueue(&q, element, &flag);
//		}
//	}
//	int x;
//	flag = true;
//	for (i = 0; i < n; i++)
//	{
//		outqueue(&q, &x, &flag);
//		printf("%d ", x);
//	}
//	return 0;
//}

// ����
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
		printf("NULL\n");
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

list* creatnewnode(datatype element)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	newnode->data = element;
	newnode->next = NULL;
	return newnode;
}

void inqueue(queue* q)
{
	printf("������Ҫ��ӵ�Ԫ��\n");
	datatype element;
	scanf("%d", &element);
	list* newnode = creatnewnode(element);
	q->rear->next = newnode;
	q->rear = newnode;
}

datatype outqueue(queue* q)
{
	if (isempty(q))
	{
		printf("����Ϊ��\n");
		return -12345;
	}
	list* pointer;
	datatype temp;
	pointer = q->front->next;
	temp = pointer->data;
	q->front->next = pointer->next;
	if (pointer->next == NULL)
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
	printf("�������м���Ԫ��Ҫ���?\n");
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		inqueue(&q);
	}
	int x;
	for (i = 0; i < n; i++)
	{
		x = outqueue(&q);
		printf("%d ", x);
	}
	return 0;
}