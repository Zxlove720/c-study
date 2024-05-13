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
//void visit(tree* root)
//{
//	printf("%d ", root->data);
//}
//
//void preorder1(tree* root)
//{
//	if (root != NULL)
//	{
//		preorder1(root->right);
//		visit(root);
//		preorder1(root->left);
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
////void visit(tree* pointer)
////{
////	printf("%d ", pointer->data);
////}
//
//void preorder(tree* root)
//{
//	queue q;
//	initqueue(&q);
//	if (!isempty(&q))
//	{
//		printf("init failed\n");
//		return;
//	}
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
//	printf("请输入树的结点\n");
//	tree* root = NULL;
//	root = creattree(root);
//	preorder1(root);
//	printf("\n");
//	preorder(root);
//	return 0;
//}

//typedef struct graph
//{
//	char* vartex;
//	int** edgelines;
//	int n;
//	int edgelinenumber;
//}graph;
//
//void initgraph(graph* g)
//{
//	int i;
//	int j;
//	for (i = 0; i < g->n; i++)
//	{
//		for (j = 0; j < g->n; j++)
//		{
//			g->edgelines[i][j] = 0;
//		}
//	}
//
//}
//
//
//void creatgraph(graph* g)
//{
//	printf("有多少顶点?\n");
//	scanf("%d", &g->n);
//	printf("有多少条边\n");
//	scanf("%d", &g->edgelinenumber);
//	//分配内存
//	g->vartex = (char*)malloc(sizeof(char) * g->n);
//	if (g->vartex == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	g->edgelines = (int**)malloc(sizeof(int*) * g->n);
//	if (g->edgelines == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		g->edgelines[i] = (int*)malloc(sizeof(int) * g->n);
//		if (g->edgelines[i] == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//	}
//	initgraph(g);
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("请输入第%d个顶点\n", i + 1);
//		scanf("%c", &g->vartex[i]);
//	}
//	int j;
//	int k;
//	char line1;
//	char line2;
//	for (i = 0; i < g->edgelinenumber; i++)
//	{
//		getchar();
//		printf("请输入第%d条边", i + 1);
//		scanf("%c,%c", &line1, &line2);
//		for (j = 0; j < g->n; j++)
//		{
//			for (k = 0; k < g->n; k++)
//			{
//				if (g->vartex[j] == line1 && g->vartex[k] == line2)
//				{
//					g->edgelines[j][k] = 1;
//					g->edgelines[k][j] = 1;
//				}
//			}
//		}
//	}
//}
//
//void display(graph* g)
//{
//	int i;
//	int j;
//	printf("   ");
//	for (i = 0; i< g->n; i++)
//	{
//		printf("%c  ", g->vartex[i]);
//	}
//	printf("\n");
//	for (i = 0; i < g->n; i++)
//	{
//		printf("%c  ", g->vartex[i]);
//		for (j = 0; j < g->n; j++)
//		{
//			printf("%d  ", g->edgelines[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	graph g;
//	creatgraph(&g);
//	display(&g);
//	return 0;
//}

//typedef struct edgenode
//{
//	int edge;
//	struct edgenode* next;
//}edgenode;
//
//typedef struct vartexhead
//{
//	char vartex;
//	edgenode* firstnode;
//}vartexhead;
//
//typedef struct adjlist
//{
//	vartexhead* vartexnode;
//	int n;
//	int edgelines;
//}adjlist;
//
//void creatgraph(adjlist* g)
//{
//	printf("请输入图中有几个顶点\n");
//	scanf("%d", &g->n);
//	printf("请输入图中有几条边\n");
//	scanf("%d", &g->edgelines);
//	printf("1 or 0\n");
//	int flag;
//	scanf("%d", &flag);
//	if (flag == 1)
//	{
//		printf("本次将生成一个有向图\n");
//	}
//	if (flag == 0)
//	{
//		printf("本次将生成一个无向图\n");
//	}
//	g->vartexnode = (vartexhead*)malloc(sizeof(vartexhead) * g->n);
//	if (g->vartexnode == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("请输入第%d个顶点值\n", i + 1); 
//		scanf("%c", &g->vartexnode[i].vartex);
//		g->vartexnode[i].firstnode = NULL;
//	}
//	int line1;
//	int line2;
//	edgenode* pointer;
//	for (i = 0; i < g->edgelines; i++)
//	{
//		printf("请输入第%d条边(1,2)\n", i + 1);
//		scanf("%d,%d", &line1, &line2);
//		pointer = (edgenode*)malloc(sizeof(edgenode));
//		if (pointer == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//		pointer->edge = line2 - 1;
//		pointer->next = g->vartexnode[line1 - 1].firstnode;
//		g->vartexnode[line1 - 1].firstnode = pointer;
//		
//		if (flag == 0)
//		{
//			pointer = (edgenode*)malloc(sizeof(edgenode));
//			if (pointer == NULL)
//			{
//				printf("NULL\n");
//				return;
//			}
//			pointer->edge = line1 - 1;
//			pointer->next = g->vartexnode[line2 - 1].firstnode;
//			g->vartexnode[line2 - 1].firstnode = pointer;
//		}
//	}
//}
//
//void displaygraph(adjlist* g)
//{
//	system("cls");
//	int i;
//	edgenode* pointer;
//	for (i = 0; i < g->n; i++)
//	{
//		printf("[%d,%c]->", i + 1, g->vartexnode[i].vartex);
//		pointer = g->vartexnode[i].firstnode;
//		while (pointer != NULL)
//		{
//			printf("[%d]->", pointer->edge + 1);
//			pointer = pointer->next;
//		}
//		printf("NULL\n");
//	}
//}
//
//int main()
//{
//	adjlist g;
//	creatgraph(&g);
//	displaygraph(&g);
//	return 0;
//}

typedef struct edgenode
{
	int edge;
	struct edgenode* next;
}edgenode;

typedef struct vartexhead
{
	char vartex;
	edgenode* firstnode;
}vartexhead;

typedef struct adjlist
{
	vartexhead* vartexs;
	int n;
	int edgenumber;
}adjlist;

typedef struct list
{
	int data;
	struct list* next;
}list;

typedef struct queue
{
	list* front;
	list* rear;
}queue;

void creatgraph(adjlist* g)
{
	printf("请输入顶点个数\n");
	scanf("%d", &g->n);
	printf("请输入边的条数\n");
	scanf("%d", &g->edgenumber);
	printf("0.无向图    1.有向图\n");
	int flag;
	scanf("%d", &flag);
	if (flag == 0)
	{
		printf("将生成无向图\n");
	}
	if (flag == 1)
	{
		printf("将生成有向图\n");
	}
	int i = 0;
	g->vartexs = (vartexhead*)malloc(sizeof(vartexhead) * g->n);
	if (g->vartexs == NULL)
	{
		printf("NULL\n");
		return;
	}
	for (i = 0; i < g->n; i++)
	{
		g->vartexs[i].firstnode = NULL;

	}
	for (i = 0; i < g->n; i++)
	{
		getchar();
		printf("请输入第%d个顶点值\n", i + 1);
		scanf("%c", &g->vartexs[i].vartex);

	}
	int line1;
	int line2;
	edgenode* pointer;
	for (i = 0; i < g->edgenumber; i++)
	{
		printf("请输入第%d条边的关系(1,2)\n", i + 1);
		scanf("%d,%d", &line1, &line2);
		pointer = (edgenode*)malloc(sizeof(edgenode));
		if (pointer == NULL)
		{
			printf("NULL\n");
			return;
		}
		pointer->edge = line2 - 1;
		pointer->next = g->vartexs[line1 - 1].firstnode;
		g->vartexs[line1 - 1].firstnode = pointer;
		if (flag == 0)
		{
			pointer = (edgenode*)malloc(sizeof(edgenode));
			if (pointer == NULL)
			{
				printf("NULL\n");
				return;
			}
			pointer->edge = line1 - 1;
			pointer->next = g->vartexs[line2 - 1].firstnode;
			g->vartexs[line2 - 1].firstnode = pointer;
		}
	}
}

void displaygraph(adjlist* g)
{
	int i = 0;
	edgenode* pointer;
	for (i = 0; i < g->n; i++)
	{
		pointer = g->vartexs[i].firstnode;
		printf("[%d,%c]->", i + 1, g->vartexs[i].vartex);
		while (pointer != NULL)
		{
			printf("[%d]->", pointer->edge + 1);
			pointer = pointer->next;
		}
		printf("NULL\n");
	}

}

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

void inqueue(queue* q, int number)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return;
	}
	newnode->data = number;
	newnode->next = NULL;
	q->rear->next = newnode;
	q->rear = newnode;
}

int outqueue(queue* q)
{
	int temp;
	list* pointer = q->front->next;
	temp = pointer->data;
	q->front->next = pointer->next;
	if (q->front->next == NULL)
	{
		q->rear = q->front;
	}
	free(pointer);
	pointer = NULL;
	return temp;
}

void BFS(adjlist* g, int n)
{
	queue q;
	initqueue(&q);
	if (!isempty(&q))
	{
		printf("init failed\n");
		return;
	}
	printf("(%d,", n + 1);
	printf("%c),", g->vartexs[n].vartex);
	int* visit;
	visit = (int*)malloc(sizeof(int) * g->n);
	int i = 0;
	for (i = 0; i < g->n; i++)
	{
		visit[i] = 0;
	}
	inqueue(&q, n);
	visit[n] = 1;
	edgenode* pointer;
	int vi;
	while (!isempty(&q))
	{
		vi = outqueue(&q);
		pointer = g->vartexs[vi].firstnode;
		while (pointer != NULL)
		{
			if (visit[pointer->edge] == 0)
			{
				visit[pointer->edge] = 1;
				printf("(%d,", pointer->edge + 1);
				printf("%c),", g->vartexs[pointer->edge].vartex);
				inqueue(&q, pointer->edge);
			}
			pointer = pointer->next;
		}
	}
}

int main()
{
	adjlist g;
	creatgraph(&g);
	displaygraph(&g);
	system("pause");
	system("cls");
	printf("输入要从第几个顶点开始遍历?\n");
	int n;
	scanf("%d", &n);
	BFS(&g, n);
	return 0;
}