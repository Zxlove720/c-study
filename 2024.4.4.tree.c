#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;

typedef struct tree//结构体类型：树
{
	datatype data;//数据
	struct tree* left;//左孩子
	struct tree* right;//右孩子
}tree;

typedef struct list//队列中的节点类型
{
	tree* data;//用树节点来当数据域
	struct list* next;
}list;

typedef struct queue
{
	list* front;//队头
	list* rear;//队尾
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

void enqueue(queue* q, tree* root)
{
	list* newnode = (list*)malloc(sizeof(list));
	newnode->data = root;
	newnode->next = NULL;
	q->rear->next = newnode;
	q->rear = newnode;
}

tree* outqueue(queue* q)
{
	list* temp = q->front->next;
	tree* node = temp->data;
	q->front->next = temp->next;
	if (q->rear == temp)
	{
		q->rear = q->front;
	}
	free(temp);
	return node;
}


tree* creatnode(tree* root)
{
	datatype element;
	scanf("%d", &element);
	if (element != 0)
	{
		root = (tree*)malloc(sizeof(tree));
		if (root == NULL)
		{
			printf("error\n");
			exit(1);
		}
		root->data = element;
		root->left = NULL;
		root->right = NULL;
		root->left = creatnode(root->left);
		root->right = creatnode(root->right);
	}
	return root;
}

void visit(tree* root)
{
	printf("%d ", root->data);
}

void preorder(tree* root)
{
	queue q;//创建队列
	initqueue(&q);//初始化队列
	tree* p = root;//创建一个树节点来代替root
	enqueue(&q, root);//将二叉树入队
	while (!isempty(&q))//如果不为空队列，则一直取值
	{
		p = outqueue(&q);//p等于出对的树节点
		visit(p);//访问p
		if (p->left != NULL)//递归
		{
			enqueue(&q, p->left);
		}
		if (p->right != NULL)//递归
		{
			enqueue(&q, p->right);
		}
	}
}

int main()
{
	printf("请输入节点的值\n");
	tree* root = NULL;
	root = creatnode(root);
	preorder(root);
	return 0;
}
