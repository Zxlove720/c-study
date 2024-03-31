#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define maxsize 50


typedef int datatype;

////顺序栈
//typedef struct stack
//{
//	datatype data[maxsize];
//	int top;
//}stack;
//
//void initstack(stack* s1)
//{
//	s1->top = -1;
//	printf("初始化完成\n");
//	system("pause");
//	system("cls");
//}
//
//bool isempty(stack s1)
//{
//	if (s1.top = -1)
//	{
//		return true;
//	}
//	return false;
//}
//
//void push(stack* s1)
//{
//	if (s1->top == maxsize - 1)
//	{
//		printf("full\n");
//		return;
//	}
//	printf("请输入元素\n");
//	datatype element;
//	scanf("%d", &element);
//	s1->data[++s1->top] = element;
//}
//
//datatype pop(stack* s1)
//{
//	return s1->data[s1->top--];
//}
//
//int main()
//{
//	stack s1;
//	initstack(&s1);
//	bool flag = isempty(s1);
//	if (!flag)
//	{
//		printf("初始化失败\n");
//		return -1;
//	}
//	int i = 0;
//	int n;
//	printf("有多少元素要入栈?\n");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		push(&s1);
//	}
//	int array[maxsize];
//	for (i = 0; i < n; i++)
//	{
//		array[i] = pop(&s1);
//	}
//	for (i = n - 1; i >= 0; i--)
//	{
//		printf("%d ", array[i]);
//	}
//	return 0;
//}


//链栈
//typedef struct stack
//{
//	datatype data;
//	struct stack* next;
//}stack;
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
//	printf("输入入栈的元素\n");
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
//	stack* temp;
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
//	stack* top = NULL;
//	bool flag = isempty(top);
//	if (!flag)
//	{
//		printf("error\n");
//		return -1;
//	}
//	int i = 0;
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		push(&top);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", pop(&top));
//	}
//	return 0;
//}

//循环队列
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
//	q->front = 0;
//	q->rear = 0;
//	q->tag = 0;
//}
//
//bool isempty(queue q)
//{
//	if (q.front == q.rear && q.tag == 0)
//	{
//		return true;
//	}
//	return false;
//}
//
//void enqueue(queue* q)
//{
//	if (q->rear == q->front && q->tag == 1)
//	{
//		printf("full\n");
//		return;
//	}
//	printf("输入想要入队的元素\n");
//	datatype element;
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
//		printf("empty\n");
//		exit(1);
//	}
//	datatype temp = q->data[q->front];
//	q->front = (q->front + 1) % maxsize;
//	q->tag = 0;
//	return temp;
//}
//
//int main()
//{
//	queue q;
//	initqueue(&q);
//	bool flag = isempty(q);
//	if (!flag)
//	{
//		printf("error\n");
//		return -1;
//	}
//	int i = 0;
//	int n;
//	printf("多少元素要入队\n");
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


//typedef struct list//不同的队列中的链表结构
//{
//	datatype data;
//	struct list* next;
//}list;
//
//typedef struct listqueue//创建不同的队列
//{
//	list* front;
//	list* rear;
//}queue;
//
//void initqueue(queue* q)
//{
//	q->front = q->rear = (list*)malloc(sizeof(list));
//	if (q->front == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	q->front->next = NULL;
//}
//
//bool isempty(queue* q)
//{
//	if (q->front->next == NULL || q->front == q->rear)
//	{
//		return true;
//	}
//	return false;
//}
//
//void enqueue(queue* q)
//{
//	datatype element;
//	printf("请输入元素\n");
//	scanf("%d", &element);
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	newnode->data = element;
//	newnode->next = NULL;
//	q->rear->next = newnode;
//	q->rear = newnode;
//	printf("yes\n");
//}
//
//datatype outqueue(queue* q)
//{
//	if (isempty(q))
//	{
//		printf("empty\n");
//		exit(1);
//	}
//	datatype temp;
//	list* temppointer = q->front->next;
//	temp = temppointer->data;
//	q->front->next = temppointer->next;
//	if (temppointer == q->rear)
//	{
//		printf("empty\n");
//		q->rear = q->front;
//	}
//	free(temppointer);
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
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		enqueue(&q);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", outqueue(&q));
//	}
//	return 0;
//}


typedef struct list//创建队列中的链式结构
{
	datatype data;//数据域
	struct list* next;//指针域
}list;

typedef struct queue//创建队列
{
	list* front;//队头
	list* rear;//队尾
}queue;

void initqueue(queue* q)//初始化队列
{
	q->front = q->rear = (list*)malloc(sizeof(list));//使队头和队尾指向同一块内存区域
	if (q->front == NULL)
	{
		printf("error\n");
		return;
	}
	q->front->next = NULL;//队头（队尾）的下一个节点都是空
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
	printf("输入入队的元素值\n");
	datatype element;
	scanf("%d", &element);
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("error\n");
		return;
	}
	newnode->next = NULL;
	newnode->data = element;//12345
	q->rear->next = newnode;//         12345
	q->rear = newnode;    //          f    r
}

datatype outqueue(queue* q)
{
	if (q->front == q->rear || q->front->next == NULL)
	{
		printf("empty\n");
		exit(1);
	}
	list* pointer;
	datatype temp;
	pointer = q->front->next;
	temp = pointer->data;
	q->front->next = pointer->next;           //12345
	if (pointer == q->rear)   //               f
	{                              //          r 
		//printf("empty\n");
		q->rear = q->front;
	}
	return temp;
}

int main()
{
	queue q;
	initqueue(&q);//初始化队列
	bool flag = isempty(&q);
	if (!flag)
	{
		printf("error\n");
		return -1;
	}
	int i = 0;
	printf("要加入几个元素\n");
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		enqueue(&q);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", outqueue(&q));
	}
	return 0;
}















