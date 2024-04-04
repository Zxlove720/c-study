#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;

typedef struct tree//�ṹ�����ͣ���
{
	datatype data;//����
	struct tree* left;//����
	struct tree* right;//�Һ���
}tree;

typedef struct list//�����еĽڵ�����
{
	tree* data;//�����ڵ�����������
	struct list* next;
}list;

typedef struct queue
{
	list* front;//��ͷ
	list* rear;//��β
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
	queue q;//��������
	initqueue(&q);//��ʼ������
	tree* p = root;//����һ�����ڵ�������root
	enqueue(&q, root);//�����������
	while (!isempty(&q))//�����Ϊ�ն��У���һֱȡֵ
	{
		p = outqueue(&q);//p���ڳ��Ե����ڵ�
		visit(p);//����p
		if (p->left != NULL)//�ݹ�
		{
			enqueue(&q, p->left);
		}
		if (p->right != NULL)//�ݹ�
		{
			enqueue(&q, p->right);
		}
	}
}

int main()
{
	printf("������ڵ��ֵ\n");
	tree* root = NULL;
	root = creatnode(root);
	preorder(root);
	return 0;
}
