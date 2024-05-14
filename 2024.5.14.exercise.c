#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
	vartexhead* vartex;
	int n;
	int edgelines;
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
	printf("请输入图中的顶点个数\n");
	scanf("%d", &g->n);
	printf("请输入图中的边的条数\n");
	scanf("%d", &g->edgelines);
	g->vartex = (vartexhead*)malloc(sizeof(vartexhead) * g->n);
	if (g->vartex == NULL)
	{
		printf("NULL\n");
		return;
	}
	printf("0.无向图        1.有向图\n");
	int flag;
	scanf("%d", &flag);
	if (flag == 0)
	{
		printf("会生成一个无向图\n");
	}
	if (flag == 1)
	{
		printf("会生成一个有向图\n");
	}
	int i;
	for (i = 0; i < g->n; i++)
	{
		g->vartex[i].firstnode = NULL;
	}
	for (i = 0; i < g->n; i++)
	{
		getchar();
		printf("请输入第%d个顶点\n", i + 1);
		scanf("%c", &g->vartex[i].vartex);
	}
	int line1;
	int line2;
	edgenode* pointer;
	for (i = 0; i < g->edgelines; i++)
	{
		getchar();
		printf("请输入第%d条边的关系(1,2)\n", i + 1);
		scanf("%d,%d", &line1, &line2);
		pointer = (edgenode*)malloc(sizeof(edgenode));
		if (pointer == NULL)
		{
			printf("NULL\n");
			return;
		}
		pointer->edge = line2 - 1;
		pointer->next = g->vartex[line1 - 1].firstnode;
		g->vartex[line1 - 1].firstnode = pointer;
		if (flag == 0)
		{
			pointer = (edgenode*)malloc(sizeof(edgenode));
			if (pointer == NULL)
			{
				printf("NULL\n");
				return;
			}
			pointer->edge = line1 - 1;
			pointer->next = g->vartex[line2 - 1].firstnode;
			g->vartex[line2 - 1].firstnode = pointer;
		}
	}
}

void displaygraph(adjlist* g)
{
	int i;
	edgenode* pointer;
	for (i = 0; i < g->n; i++)
	{
		printf("[%d,%c]->", i + 1, g->vartex[i].vartex);
		pointer = g->vartex[i].firstnode;
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

list* creatnewnode(int edge)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	newnode->data = edge;
	newnode->next = NULL;
	return newnode;
}

void inqueue(queue* q, int edge)
{
	list* newnode = creatnewnode(edge);
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

void BFS(adjlist* g)
{
	printf("请输入要从第几个顶点开始遍历\n");
	int visitnode;
	scanf("%d", &visitnode);
	queue q;
	initqueue(&q);
	if (!isempty(&q))
	{
		system("cls");
		printf("init failed\n");
		return;
	}
	int* visit;
	visit = (int*)malloc(sizeof(int) * g->n);
	if (visit == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < g->n; i++)
	{
		visit[i] = 0;
	}
	printf("(%d,", visitnode);
	printf("%c),", g->vartex[visitnode - 1].vartex);
	visit[visitnode - 1] = 1;
	inqueue(&q, visitnode - 1);
	edgenode* pointer;
	int vi;
	while (!isempty(&q))
	{
		vi = outqueue(&q);
		pointer = g->vartex[vi].firstnode;
		while (pointer != NULL)
		{
			if (visit[pointer->edge] == 0)
			{
				visit[pointer->edge] = 1;
				printf("(%d,", pointer->edge);
				printf("%c),", g->vartex[pointer->edge].vartex);
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
	BFS(&g);
	return 0;
}