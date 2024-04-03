#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;

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
//		printf("error\n");
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
//	list* pointer;
//	pointer = q->front->next;
//	temp = pointer->data;
//	q->front->next = pointer->next;
//	if (pointer == q->rear)
//	{
//		q->rear = q->front;
//	}
//	free(pointer);
//	pointer = NULL;
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
//	int n;
//	printf("多少元素要入队?\n");
//	scanf("%d", &n);
//	int i = 0;
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


typedef struct tree
{
	int number;
	datatype data;
	struct tree* left;
	struct tree* right;
}tree;

tree* creatroot()
{
	tree* root = (tree*)malloc(sizeof(tree));
	if (root == NULL)
	{
		printf("error\n");
		exit(1);
	}
	printf("请输入节点的数据\n");
	datatype data;
	scanf("%d", &data);
	root->data = data;
	root->number = 1;
	root->left = NULL;
	root->right = NULL;
	return root;
}

bool isempty(tree* root)
{
	if (root->left == NULL && root->right == NULL)
	{
		return true;
	}
	return false;
}

tree* addnode(tree* root, int i, datatype element)
{
	if (root == NULL)
	{
		tree* newnode = (tree*)malloc(sizeof(tree));
		if (newnode == NULL)
		{
			printf("error\n");
			exit(1);
		}
		newnode->data = element;
		newnode->number = i;
		newnode->left = NULL;
		newnode->right = NULL;
		return newnode;
	}
	if (i < root->number)
	{
		root->left = addnode(root->left, i, element);
	}
	else if (i > root->number)
	{
		root->right = addnode(root->right, i, element);
	}
	return root;
}

int main()
{
	tree* root = creatroot();
	bool flag = isempty(root);
	if (!flag)
	{
		printf("error\n");
		return -1;
	}
	printf("多少元素要上树?\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 2; i <= n + 1; i++)
	{
		printf("请输入节点数据\n");
		datatype element;
		scanf("%d", &element);
		root = addnode(root, i, element);
	}
	return 0;
}

