#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//typedef int datatype;
//
//typedef struct tree
//{
//	datatype data;
//	struct tree* left;
//	struct tree* right;
//}tree;
//
//typedef struct list
//{
//	tree* data;
//	struct list* next;
//}list;
//
//typedef struct queue
//{
//	list* front;
//	list* rear;
//}queue;
//
//tree* creatnode(tree* root)
//{
//	datatype element;
//	scanf("%d", &element);
//	if (element != 0)
//	{
//		root = (tree*)malloc(sizeof(tree));
//		if (root == NULL)
//		{
//			printf("NULL\n");
//			exit(1);
//		}
//		root->data = element;
//		root->left = NULL;
//		root->right = NULL;
//		root->left = creatnode(root->left);
//		root->right = creatnode(root->right);
//	}
//	return root;
//}
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
//void enqueue(queue* q, tree* root)
//{
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	newnode->data = root;
//	newnode->next = NULL;
//	q->rear->next = newnode;
//	q->rear = newnode;
//}
//
//tree* outqueue(queue* q)
//{
//	list* pointer;
//	tree* temp;
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
//void visit(tree* pointer)
//{
//	printf("%d ", pointer->data);
//}
//
//void preorder(tree* root)
//{
//	queue q;
//	initqueue(&q);
//	tree* pointer = root;
//	enqueue(&q, root);
//	while (!isempty(&q))
//	{
//		pointer = outqueue(&q);
//		visit(pointer);
//		if (pointer->left != NULL)
//		{
//			preorder(pointer->left);
//		}
//		if (pointer->right != NULL)
//		{
//			preorder(pointer->right);
//		}
//	}
//}
//
//int main()
//{
//	printf("请输入节点值\n");
//	tree* root = NULL;
//	root = creatnode(root);
//	preorder(root);
//	return 0;
//}

typedef int datatype;

typedef struct tree
{
	datatype data;
	struct tree* left;
	struct tree* right;
	int lefttag;
	int righttag;
}tree;


tree* pre = NULL;
//tree* final = NULL;

tree* creatnode(tree* root)
{
	datatype element;
	scanf("%d", &element);
	if (element != 0)
	{
		root = (tree*)malloc(sizeof(tree));
		if (root == NULL)
		{
			printf("NULL");
			exit(1);
		}
		root->data = element;
		root->lefttag = 0;
		root->righttag = 0;
		root->left = creatnode(root->left);
		root->right = creatnode(root->right);
	}
	return root;
}

void inthread(tree* root)
{
	if (root->left == NULL)
	{
		root->left = pre;
		root->lefttag = 1;
	}
	if (pre != NULL && pre->right == NULL)
	{
		pre->right = root;
		pre->righttag = 1;
	}
	pre = root;
}

void thread(tree* root)
{
	if (root != NULL)
	{
		thread(root->left);
		inthread(root);
		thread(root->right);
	}
}

void creatthread(tree* root)
{
	pre = NULL;
	if (root != NULL)
	{
		thread(root);
		if (pre->right == NULL)
		{
			pre->righttag = 1;
		}
	}
}

int main()
{
	printf("请输入节点值\n");
	tree* root = NULL;
	root = creatnode(root);
	creatthread(root);
	
	return 0;
}




