#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;
//typedef struct edgenode
//{
//	datatype edge;
//	struct edgenode* next;
//}edgenode;
//
//typedef struct vertexhead
//{
//	char vertex;
//	edgenode* firstnode;
//}vertexhead;
//
//typedef struct adjlist
//{
//	vertexhead* vertexnode;
//	int n;
//	int edgelines;
//}adjlist;
//
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
//void creatgraph(adjlist* g)
//{
//	printf("请输入图中有几个顶点\n");
//	scanf("%d", &g->n);
//	printf("请输入图中有几条边\n");
//	scanf("%d", &g->edgelines);
//	printf("0.无向图       1.有向图\n");
//	int flag;
//	scanf("%d", &flag);
//	if (flag == 0)
//	{
//		printf("将生成一个无向图\n");
//	}
//	else if (flag == 1)
//	{
//		printf("将生成一个有向图\n");
//	}
//	g->vertexnode = (vertexhead*)malloc(sizeof(vertexhead) * g->n);
//	if (g->vertexnode == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		g->vertexnode[i].firstnode = NULL;
//	}
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("请输入第%d个顶点\n", i + 1);
//		scanf("%c", &g->vertexnode[i].vertex);
//	}
//	int line1;
//	int line2;
//	edgenode* pointer;
//	for (i = 0; i < g->edgelines; i++)
//	{
//		printf("请输入第%d条边\n", i + 1);
//		scanf("%d,%d", &line1, &line2);
//		pointer = (edgenode*)malloc(sizeof(edgenode));
//		if (pointer == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//		pointer->edge = line2 - 1;
//		pointer->next = g->vertexnode[line1 - 1].firstnode;
//		g->vertexnode[line1 - 1].firstnode = pointer;
//		if (flag == 0)
//		{
//			pointer = (edgenode*)malloc(sizeof(edgenode));
//			if (pointer == NULL)
//			{
//				printf("NULL\n");
//				return;
//			}
//			pointer->edge = line1 - 1;
//			pointer->next = g->vertexnode[line2 - 1].firstnode;
//			g->vertexnode[line2 - 1].firstnode = pointer;
//		}
//	}
//}
//
//void displaygraph(adjlist* g)
//{
//	int i;
//	edgenode* pointer;
//	for (i = 0; i < g->n; i++)
//	{
//		printf("[%d,%c]->", i + 1, g->vertexnode[i].vertex);
//		pointer = g->vertexnode[i].firstnode;
//		while (pointer != NULL)
//		{
//			printf("[%d]->", pointer->edge + 1);
//			pointer = pointer->next;
//		}
//		printf("NULL\n");
//	}
//
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
//list* creatnewnode(int number)
//{
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	newnode->data = number;
//	newnode->next = NULL;
//	return newnode;
//}
//
//void inqueue(queue* q, int number)
//{
//	list* newnode = creatnewnode(number);
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
//	q->front->next = pointer->next;
//	if (q->front->next == NULL)
//	{
//		q->rear = q->front;
//	}
//	return temp;
//}
//
//void BFS(adjlist* g)
//{
//	system("pause");
//	system("cls");
//	printf("请输入要从第几个节点开始遍历\n");
//	int vi;
//	scanf("%d", &vi);
//	datatype* visit;
//	visit = (datatype*)malloc(sizeof(datatype) * g->n);
//	if (visit == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		visit[i] = 0;
//	}
//	queue q;
//	initqueue(&q);
//	if (!isempty(&q))
//	{
//		printf("init failed\n");
//		return;
//	}
//	printf("(%d,", vi);
//	printf("%c),", g->vertexnode[vi - 1].vertex);
//	inqueue(&q, vi - 1);
//	visit[vi - 1] = 1;
//	int visitnode;
//	edgenode* pointer;
//	while (!isempty(&q))
//	{
//		visitnode = outqueue(&q);
//		pointer = g->vertexnode[visitnode].firstnode;
//		while (pointer != NULL)
//		{
//			if (visit[pointer->edge] == 0)
//			{
//				visit[pointer->edge] = 1;
//				printf("(%d,", pointer->edge + 1);
//				printf("%c),", g->vertexnode[pointer->edge].vertex);
//				inqueue(&q, pointer->edge);
//			}
//			pointer = pointer->next;
//		}
//	}
//}
//
//int main()
//{
//	adjlist g;
//	creatgraph(&g);
//	displaygraph(&g);
//	BFS(&g);
//	return 0;
//}


typedef struct tree
{
	datatype data;
	struct tree* left;
	struct tree* right;
}tree;

tree* inserttree(tree* root, int key)
{
	tree* father;
	tree* pointer;
	pointer = root;
	father = root;
	while (pointer != NULL)
	{
		father = pointer;
		if (key > pointer->data)
		{
			pointer = pointer->right;
		}
		else
		{
			pointer = pointer->left;
		}
	}
	tree* newnode = (tree*)malloc(sizeof(tree));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	newnode->data = key;
	newnode->left = NULL;
	newnode->right = NULL;
	if (root == NULL)
	{
		root = newnode;
	}
	else if (key > father->data)
	{
		father->right = newnode;
	}
	else
	{
		father->left = newnode;
	}
	return root;
}

tree* creattree(datatype* keyarray, int length)
{
	tree* root = NULL;
	int i;
	for (i = 0; i < length; i++)
	{
		root = inserttree(root,keyarray[i]);
	}
	return root;
}

datatype* creatkey(int* length)
{
	printf("有多少元素要排序?\n");
	int n;
	scanf("%d", &n);
	*length = n;
	datatype* keyarray = (datatype*)malloc(sizeof(datatype) * n);
	if (keyarray == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &keyarray[i]);
	}
	return keyarray;
}

void displaytree(tree* root)
{
	if (root != NULL)
	{
		printf("%d", root->data);
		if (root->left != NULL || root->right != NULL)
		{
			printf("(");
			displaytree(root->left);
			if (root->left == NULL)
			{
				printf("NULL");
			}
			if (root->right != NULL)
			{
				printf(",");
			}
			displaytree(root->right);
			printf(")");
		}
	}
}

int main()
{
	int length;
	datatype* keyarray = creatkey(&length);
	tree* root = creattree(keyarray,length);
	displaytree(root);
	return 0;
}