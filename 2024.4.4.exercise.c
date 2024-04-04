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
//datatype outqueue(queue* q)
//{
//	if (isempty(q))
//	{
//		printf("empty0\n");
//		exit(1);
//	}
//	datatype temp;
//	list* pointer;
//	pointer = q->front->next;
//	temp = pointer->data;
//	q->front->next = pointer->next;
//	if (q->front->next == NULL)
//	{
//		q->rear = q->front;
//	}
//	free(pointer);
//	pointer = NULL;
//	return temp;
//}
//
//void enqueue(queue* q)
//{
//	printf("输入入队元素的值\n");
//	datatype element;
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
//	printf("有几个元素要入队?\n");
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		enqueue(&q);
//	}
//	printf("有多少元素要出队?\n");
//	scanf("%d", &n);
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
		printf("NULL\n");
		exit(1);
	}
	printf("请输入节点值\n");
	datatype element;
	scanf("%d", &element);
	root->number = 1;
	root->data = element;
	root->left = NULL;
	root->right = NULL;
	return root;
}

tree* creat(tree* root)
{
	datatype data;
	scanf("%d", &data);
	getchar();
	if (data != 0)
	{
		root = (tree*)malloc(sizeof(tree));
		if (root == NULL)
		{
			printf("NULL\n");
			exit(1);
		}
		root->data = data;
		root->left = NULL;
		root->right = NULL;
		root->left = creat(root->left);
		root->right = creat(root->right);
	}
	return root;
}

void freetree(tree* root)
{
	if (root != NULL)
	{
		freetree(root->left);
		freetree(root->right);
		free(root);
	}
}

void visitroot(tree* root)
{
	printf("%d ", root->data);
}

void preorder(tree* root)
{
	if (root != NULL)
	{
		visitroot(root);
		preorder(root->left);
		preorder(root->right);//前端遍历
	}
}

int main()
{
	tree* root = (tree*)malloc(sizeof(tree*));
	root = creat(root);
	preorder(root);
	freetree(root);
	return 0;
}
