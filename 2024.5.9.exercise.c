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
//	int length;
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
//	printf("请输入元素的值\n");
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
//	list* pointer;
//	pointer = q->front->next;
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
//	if (!isempty(&q))
//	{
//		printf("not empty\n");
//		return -1;
//	}
//	printf("有多少元素要入队\n");
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

typedef struct tree
{
	datatype data;
	struct tree* left;
	struct tree* right;
}tree;

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

void visit(tree* root)
{
	printf("%d ", root->data);
}

void preorder(tree* root)
{
	if (root != NULL)
	{
		preorder(root->left);
		visit(root);
		preorder(root->right);
	}
}

int main()
{
	printf("请输入节点的值\n");
	tree* root = NULL;
	root = creattree(root);
	preorder(root);
}