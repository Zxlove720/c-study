#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//链栈 
typedef int datatype;

/*typedef struct stack
{
	datatype data;
	struct stack* next;
}stack;

stack* creatnode()
{
	printf("请输入元素的值\n");
	datatype element;
	scanf("%d", &element);
	stack* newnode = (stack*)malloc(sizeof(stack));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	newnode->data = element;
	newnode->next = NULL;
	return newnode;
}

void push(stack** top)
{
	stack* newnode = creatnode();
	newnode->next = *top;
	*top = newnode;
}

datatype pop(stack** top)
{
	datatype temp;
	stack* pointer;
	pointer = *top;
	temp = pointer->data;
	*top = pointer->next;
	free(pointer);
	pointer = NULL;
	return temp;
}

int main()
{
	stack* top;
	printf("有几个元素要入栈?\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		push(&top);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", pop(&top));
	}
	return 0;
}*/


//链队
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
//	printf("请输入入队的元素\n");
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
//int main()
//{
//	queue q;
//	initqueue(&q);
//	if (!isempty(&q))
//	{
//		printf("is not empty\n");
//		return -1;
//	}
//	printf("有多少元素要入队?\n");
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
//		return root;
//	}
//	return NULL;
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
//void inqueue(queue* q, tree* root)
//{
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	newnode->data = root;
//	newnode->next = NULL;
//	q->rear->next = newnode;;
//	q->rear = newnode;
//}
//
//tree* outqueue(queue* q)
//{
//	tree* temp;
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
//	inqueue(&q, root);
//	while (!isempty(&q))
//	{
//		pointer = outqueue(&q);
//		visit(pointer);
//		if (pointer->left != NULL)
//		{
//			inqueue(&q, pointer->left);
//		}
//		if (pointer->right != NULL)
//		{
//			inqueue(&q, pointer->right);
//		}
//	}
//}
//
//int main()
//{
//	printf("请输入节点值\n");
//	tree* root = NULL;
//	root = creattree(root);
//	preorder(root);
//
//	return 0;
//}

//邻接矩阵
typedef struct graph
{
	char* vartex;
	datatype** edgeline;
	int n;
	int edgenumber;
}graph;

bool initvartex(graph* g)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < g->n; i++)
	{
		for (j = 0; j < g->n; j++)
		{
			g->edgeline[i][j] = 0;
		}
	}
	for (i = 0; i < g->n; i++)
	{
		for (j = 0; j < g->n; j++)
		{
			if (g->edgeline[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

void creatgraph(graph* g)
{
	printf("图中有几个顶点?\n");
	scanf("%d", &g->n);
	printf("图中有多少条边?\n");
	scanf("%d", &g->edgenumber);
	//内存分配
	g->vartex = (char*)malloc(sizeof(char) * g->n);
	if (g->vartex == NULL)
	{
		printf("NULL\n");
		return;
	}
	g->edgeline = (datatype**)malloc(sizeof(datatype*) * g->n);
	if (g->edgeline == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < g->n; i++)
	{
		g->edgeline[i] = (datatype*)malloc(sizeof(datatype) * g->n);
		if (g->edgeline[i] == NULL)
		{
			printf("NULL\n");
			return;
		}
	}
	if (!initvartex(g))
	{
		printf("is not empty\n");
		return;
	}
	for (i = 0; i < g->n; i++)
	{
		getchar();
		printf("请输入第%d个顶点\n", i + 1);
		scanf("%c", &g->vartex[i]);
	}
	char line1;
	char line2;
	int j;
	int k;
	for (i = 0; i < g->edgenumber; i++)
	{
		getchar();
		printf("请输入第%d条边(A,B)\n", i + 1);
		scanf("%c,%c", &line1, &line2);
		for (j = 0; j < g->n; j++)
		{
			for (k = 0; k < g->n; k++)
			{
				if (line1 == g->vartex[j] && line2 == g->vartex[k])
				{
					g->edgeline[j][k] = 1;
				}
			}
		}
	}
}

void display(graph* g)
{
	int i;
	int j;
	printf("   ");
	for (i = 0; i < g->n; i++)
	{
		printf("%c  ", g->vartex[i]);
	}
	printf("\n");
	for (i = 0; i < g->n; i++)
	{
		printf("%c  ", g->vartex[i]);
		for (j = 0; j < g->n; j++)
		{
			printf("%d  ", g->edgeline[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main()
{
	graph g;
	creatgraph(&g);
	display(&g);
	return 0;
}


