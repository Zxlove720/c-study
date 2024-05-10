#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;
//链表
//typedef struct list
//{
//	datatype data;
//	struct list* next;
//}list;
//
//list* creatnode()
//{
//	printf("请输入节点值\n");
//	datatype value;
//	scanf("%d", &value);
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	newnode->data = value;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void creatlist(list* head)
//{
//	list* pointer = head;
//	list* newnode = creatnode();
//	while (pointer->next != NULL)
//	{
//		pointer = pointer->next;
//	}
//	pointer->next = newnode;
//}
//
//void displaylist(list* head)
//{
//	list* pointer = head->next;
//	while (pointer != NULL)
//	{
//		printf("%d ", pointer->data);
//		pointer = pointer->next;
//	}
//	printf("\n");
//}
//
//void insertnode(list* head)
//{
//	printf("请选择插入的位置\n");
//	int place;
//	scanf("%d", &place);
//	int i = 0;
//	list* pointer = head;
//	while (pointer->next != NULL && i < place - 1)
//	{
//		pointer = pointer->next;
//		i++;
//	}
//	list* newnode = creatnode();
//	newnode->next = pointer->next;
//	pointer->next = newnode;
//}
//
//void deletenode(list* head)
//{
//	printf("请选择要删除的位置\n");
//	int place;
//	scanf("%d", &place);
//	int i = 0;
//	list* pointer = head;
//	while (pointer->next != NULL && i < place - 1)
//	{
//		pointer = pointer->next;
//		i++;
//	}
//	list* temp = pointer->next;
//	pointer->next = temp->next;
//	free(temp);
//	temp = NULL;
//}
//
//int main()
//{
//	list* head = (list*)malloc(sizeof(list));
//	if (head == NULL)
//	{
//		printf("NULL\n");
//		return -1;
//	}
//	head->next = NULL;
//	printf("有几个节点要加入链表?\n");
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		creatlist(head);
//
//	}
//	displaylist(head);
//	insertnode(head);
//	displaylist(head);
//	deletenode(head);
//	displaylist(head);
//	return 0;
//}

//链栈
//typedef struct stack
//{
//	datatype data;
//	struct stack* next;
//}stack;
//
//stack* creatnode()
//{
//	printf("请输入入栈元素值\n");
//	datatype element;
//	scanf("%d", &element);
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
//void push(stack** top)
//{
//	stack* newnode = creatnode();
//	newnode->next = *top;
//	*top = newnode;
//}
//
//datatype pop(stack** top)
//{
//	datatype temp;
//	stack* pointer = *top;
//	temp = pointer->data;
//	*top = pointer->next;
//	free(pointer);
//	pointer = NULL;
//	return temp;
//}
//
//int main()
//{
//	stack* top = NULL;
//	printf("有多少元素要入栈?\n");
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		push(&top);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", pop(&top));
//	}
//}

//链队
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

list* creatnode()
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	printf("请输入入队元素\n");
	datatype element;
	scanf("%d", &element);
	newnode->data = element;
	newnode->next = NULL;
	return newnode;
}

void inqueue(queue* q)
{
	list* newnode = creatnode();
	q->rear->next = newnode;
	q->rear = newnode;
}

datatype outqueue(queue* q)
{
	datatype temp;
	list* pointer;
	pointer = q->front->next;
	temp = pointer->data;
	q->front->next = pointer->next;
	if (q->front->next == NULL)
	{
		q->rear = q->front;
	}
	return temp;
}

int main()
{
	queue q;
	initqueue(&q);
	if (!isempty(&q))
	{
		printf("init failed\n");
		return -1;
	}
	printf("有多少元素要入队?\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		inqueue(&q);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", outqueue(&q));
	}
	return 0;
}

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
//tree* creattree(tree* root)
//{
//	datatype element;
//	scanf("%d", &element);
//	if (element != 0)
//	{
//		root = (tree*)malloc(sizeof(tree));
//		if (root == NULL)
//		{
//			printf("NULL\n");
//			return NULL;
//		}
//		root->data = element;
//		root->left = NULL;
//		root->right = NULL;
//		root->left = creattree(root->left);
//		root->right = creattree(root->right);
//	}
//	return root;
//}
//
//void visit(tree* root)
//{
//	printf("%d ", root->data);
//}
//
//void preorder(tree* root)
//{
//	if (root != NULL)
//	{
//		preorder(root->left);
//		visit(root);
//		preorder(root->right);
//	}
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
//void inqueuetree(queue* q, tree* root)
//{
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
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
//	tree* temp;
//	list* pointer = q->front->next;
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
//void preordertree(tree* root)
//{
//	queue q;
//	initqueue(&q);
//	tree* pointer = root;
//	inqueuetree(&q, root);
//	while (!isempty(&q))
//	{
//		pointer = outqueue(&q);
//		visit(pointer);
//		if (pointer->left != NULL)
//		{
//			inqueuetree(&q, pointer->left);
//		}
//		if (pointer->right != NULL)
//		{
//			inqueuetree(&q, pointer->right);
//
//		}
//	}
//}
//
//int main()
//{
//	printf("请输入树的节点\n");
//	tree* root = NULL;
//	root = creattree(root);
//	preorder(root);
//	printf("\n");
//	preordertree(root);
//}