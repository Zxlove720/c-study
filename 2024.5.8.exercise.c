#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//ѭ������
//typedef int datatype;
//typedef struct queue
//{
//	datatype* data;
//	int size;
//	int front;
//	int rear;
//	int tag;
//}queue;
//
//void initqueue(queue* q)
//{
//	printf("��������еĴ�С\n");
//	scanf("%d", &q->size);
//	q->data = (datatype*)malloc(sizeof(datatype) * q->size);
//	if (q->data == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	q->front = 0;
//	q->rear = 0;
//	q->tag = 0;
//}
//
//void inqueue(queue* q)
//{
//	if (q->front == q->rear && q->tag == 1)
//	{
//		printf("full\n");
//		return;
//	}
//	datatype element;
//	printf("������Ԫ�ص�ֵ\n");
//	scanf("%d", &element);
//	q->data[q->rear] = element;
//	q->rear = (q->rear + 1) % q->size;
//	q->tag = 1;
//}
//
//datatype outqueue(queue* q)
//{
//	if (q->front == q->rear && q->tag == 0)
//	{
//		printf("empty\n");
//		return -65535;
//	}
//	datatype temp;
//	temp = q->data[q->front];
//	q->front = (q->front + 1) % q->size;
//	q->tag = 0;
//	return temp;
//}
//
//int main()
//{
//	queue q;
//	initqueue(&q);
//	system("cls");
//	printf("�ж���Ԫ��Ҫ���?\n");
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		inqueue(&q);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", outqueue(&q));
//	}
//	printf("\n");
//	return 0;
//}

//����
//typedef int datatpye;
//typedef struct list
//{
//	datatpye data;
//	struct list* next;
//}list;
//
//typedef struct queue
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
//		printf("NULL\n");
//		return;
//	}
//	q->front->next = NULL;
//}
//
//bool isempty(queue* q)
//{
//	if (q->front == q->rear || q->front->next == NULL)
//	{
//		return true;
//	}
//	return false;
//}
//
//list* creatnode()
//{
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	printf("������Ԫ�ص�ֵ\n");
//	datatpye element;
//	scanf("%d", &element);
//	newnode->data = element;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void inqueue(queue* q)
//{
//	list* newnode = creatnode();
//	q->rear->next = newnode;
//	q->rear = newnode;
//}
//
//datatpye outqueue(queue* q)
//{
//	datatpye temp;
//	list* pointer = q->front->next;
//	temp = pointer->data;
//	q->front = pointer;
//	if (q->front->next==NULL)
//	{
//		q->rear = q->front;
//	}
//	return temp;
//}
//
//int main()
//{
//	queue q;
//	initqueue(&q);
//	if (!isempty(&q))
//	{
//		printf("not empty\n");
//		return -1;
//	}
//	printf("�ж���Ԫ��Ҫ���?\n");
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		inqueue(&q);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", outqueue(&q));
//	}
//	return 0;
//}

//typedef int datatype;
//typedef struct list
//{
//	datatype data;
//	struct list* next;
//}list;
//
//typedef struct queue
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
//		printf("NULL\n");
//		return;
//	}
//	q->front->next = NULL;
//}
//
//bool isempty(queue* q)
//{
//	if (q->front == q->rear || q->front->next == NULL)
//	{
//		return true;
//	}
//	return false;
//}
//
//list* creatnode()
//{
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	printf("������Ԫ�ص�ֵ\n");
//	datatype element;
//	scanf("%d", &element);
//	newnode->data = element;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void inqueue(queue* q)
//{
//	list* newnode = creatnode();
//	q->rear->next = newnode;
//	q->rear = newnode;
//}
//
//datatype outqueue(queue* q)
//{
//	datatype temp;
//	list* pointer = q->front->next;
//	temp = pointer->data;
//	q->front = pointer;
//	if (q->front->next == NULL)
//	{
//		q->rear = q->rear;
//	}
//	return temp;
//}
//
//int main()
//{
//	queue q;
//	initqueue(&q);
//	if (!isempty(&q))
//	{
//		printf("not empty\n");
//		return -1;
//	}
//	printf("�ж���Ԫ��Ҫ���?\n");
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		inqueue(&q);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", outqueue(&q));
//	}
//	return 0;
//}

//typedef	int datatype;
//typedef struct list
//{
//	datatype data;
//	struct list* next;
//}list;
//
//typedef struct queue
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
//		printf("NULL\n");
//		return;
//	}
//	q->front->next = NULL;
//}
//
//list* creatnode()
//{
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	printf("������Ԫ��ֵ\n");
//	datatype element;
//	scanf("%d", &element);
//	newnode->data = element;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void inqueue(queue* q)
//{
//	list* newnode = creatnode();
//	q->rear->next = newnode;
//	q->rear = newnode;
//}
//
//datatype outqueue(queue* q)
//{
//	datatype temp;
//	list* pointer = q->front->next;
//	temp = pointer->data;
//	q->front = pointer;
//	if (q->front->next == NULL)
//	{
//		q->rear = q->front;
//	}
//	return temp;
//}
//
//int main()
//{
//	queue q;
//	initqueue(&q);
//	printf("�ж��ٸ�Ԫ��Ҫ���?\n");
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		inqueue(&q);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", outqueue(&q));
//	}
//	printf("\n");
//	return 0;
//}

typedef int datatype;

typedef struct tree
{
	datatype data;
	struct tree* left;
	struct tree* right;
}tree;

typedef struct list
{
	tree* data;
	struct list* next;
}list;

tree* creatroot()
{
	tree* root = (tree*)malloc(sizeof(tree));
	if (root == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	root->left = NULL;
	root->right = NULL;
	return NULL;
}

tree* creattree(tree* root)
{
	datatype element;
	scanf("%d", &element);
	if (element != 0)
	{
		root = (tree*)malloc(sizeof(tree));
		if (root == NULL)
		{
			printf("NULL\n");
			return NULL;
		}
		root->data = element;
		root->left = NULL;
		root->right = NULL;
		root->left = creattree(root->left);
		root->right = creattree(root->right);
	}
	return root;
}

int main()
{
	printf("������ڵ��ֵ\n");

	tree* root = creatroot();
	root = creattree(root);
	return 0;
}