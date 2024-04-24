#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//图的邻接矩阵表示法
//typedef struct graph
//{
//	int n;
//	int linenumber;
//	char* vertex;
//	int** edgelines;
//}graph;
//
//bool initgraph(graph* g)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		for (j = 0; j < g->n; j++)
//		{
//			g->edgelines[i][j] = 0;
//		}
//	}
//	for (i = 0; i < g->n; i++)
//	{
//		for (j = 0; j < g->n; j++)
//		{
//			if (g->edgelines[i][j] != 0)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//
//void creatgraph(graph* g, int flag)
//{
//	if (flag == 0)
//	{
//		printf("\n生成一个无向图\n");
//	}
//	else
//	{
//		printf("\n生成一个有向图\n");
//	}
//	printf("请输入图中顶点个数\n");
//	scanf("%d", &g->n);
//	printf("请输入图中的边数\n");
//	scanf("%d", &g->linenumber);
//	//分配内存;
//	g->vertex = (char*)malloc(sizeof(char) * g->n);
//	if (g->vertex == NULL)
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
//	if (!initgraph(g))
//	{
//		printf("init failed\n");
//		return;
//	}
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("请输入第%d个顶点\n", i + 1);
//		scanf("%c", &g->vertex[i]);
//	}
//	int j, k;
//	char line1;
//	char line2;
//	for (i = 0; i < g->linenumber; i++)
//	{
//		getchar();
//		printf("请输入边之间的关系(A,B)\n");
//		scanf("%c,%c", &line1, &line2);
//		for (j = 0; j < g->n; j++)
//		{
//			for (k = 0; k < g->n; k++)
//			{
//				if (g->vertex[j] == line1 && g->vertex[k] == line2)
//				{
//					g->edgelines[j][k] = 1;
//					if (flag == 0)
//					{
//						g->edgelines[k][j] = 1;
//
//					}
//				}
//			}
//		}
//	}
//}
//
//void displaygraph(graph* g)
//{
//	system("cls");
//	printf("邻接矩阵表示如下:\n\n");
//	int i;
//	printf("   ");
//	for (i = 0; i < g->n; i++)
//	{
//		printf("%c  ", g->vertex[i]);
//	}
//	printf("\n");
//	int j;
//	for (i = 0; i < g->n; i++)
//	{
//		printf("%c  ", g->vertex[i]);
//		for (j = 0; j < g->n; j++)
//		{
//			printf("%d  ", g->edgelines[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	graph g;
//	printf("1.有向图        0.无向图\n");
//	int flag;
//	printf("请选择-->\n");
//	scanf("%d", &flag);
//	creatgraph(&g, flag);
//	displaygraph(&g);
//	return 0;
//}


typedef struct edgenode
{
	int edgelines;
	struct edgenode* next;
}edgenode;

typedef char vertextype;

typedef struct vertex_head
{
	vertextype data;
	edgenode* first;
}vertex_head;

typedef struct adjlist
{
	vertex_head* vertex;
	int n;
	int linenumber;
}adjlist;

void creatgraph(adjlist* g, int flag)
{
	if (flag == 0)
	{
		printf("将生成一个无向图\n");
	}
	else
	{
		printf("将生成一个有向图\n");
	}
	printf("请输入图中的顶点数\n");
	scanf("%d", &g->n);
	printf("请输入图中的总边数\n");
	scanf("%d", &g->linenumber);
	//分配内存
	g->vertex = (vertex_head*)malloc(sizeof(vertex_head) * g->n);
	if (g->vertex == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < g->n; i++)
	{
		getchar();
		printf("请输入第%d个顶点\n", i + 1);
		scanf("%c", &(g->vertex[i].data));
		g->vertex[i].first = NULL;
	}
	edgenode* pointer;
	int line1;
	int line2;
	for (i = 0; i < g->linenumber; i++)
	{
		getchar();
		printf("请输入边的关系(如1,2)\n");
		scanf("%d,%d", &line1, &line2);
		pointer = (edgenode*)malloc(sizeof(edgenode));
		if (pointer == NULL)
		{
			printf("NULL\n");
			return;
		}
		pointer->edgelines = line2-1;
		pointer->next = g->vertex[line1-1].first;
		g->vertex[line1-1].first = pointer;
		if (flag == 0)
		{
			pointer = (edgenode*)malloc(sizeof(edgenode));
			if (pointer == NULL)
			{
				printf("NULL\n");
				return;
			}
			pointer->edgelines = line1-1;
			pointer->next = g->vertex[line2-1].first;
			g->vertex[line2-1].first = pointer;
		}
	}



}

void displaygraph(adjlist* g)
{
	system("cls");
	printf("\n邻接表表示如下:\n");
	int i = 0;
	edgenode* pointer;
	for (i = 0; i < g->n; i++)
	{
		printf("[%d,%c]", i + 1, g->vertex[i].data);
		pointer = g->vertex[i].first;
		while (pointer != NULL)
		{
			printf("-->[%d]", pointer->edgelines + 1);
			pointer = pointer->next;
		}	
		printf("-->NULL\n");
	}
}

typedef struct queue
{
	int* data;
	int front;
	int rear;
}queue;

bool initqueue(queue* q, adjlist* g)
{
	q->front = 0;
	q->rear = 0;
	q->data = (int*)malloc(sizeof(int) * g->n);
	return true;
}

void BFS(adjlist* g)
{
	queue q;
	if (!initqueue(&q, g))
	{
		printf("init failed\n");
		return;
	}
	int* visited;
	visited = (int*)malloc(sizeof(int) * g->n);
	if (visited == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < g->n; i++)
	{
		visited[i] = 0;
	}
	printf("要从第几个顶点开始遍历\n");
	int vi;
	scanf("%d", &vi);
	visited[vi] = 1;
	printf("[%d,", vi+1);
	printf("%c]", g->vertex[vi].data);
	q.rear = (q.rear + 1) % g->n;
	q.data[q.rear] = vi;
	edgenode* pointer;
	int head;
	while (q.front != q.rear)
	{
		q.front = (q.front + 1) % g->n;
		head = q.data[q.front];
		pointer = g->vertex[head].first;
		while (pointer != NULL)
		{
			if (visited[pointer->edgelines] == 0)
			{
				visited[pointer->edgelines] = 1;
				printf("[%d,", pointer->edgelines + 1);
				printf("%c]", g->vertex[pointer->edgelines].data);
				q.rear = (q.rear + 1) % g->n;
				q.data[q.rear] = pointer->edgelines;
			}
			pointer = pointer->next;
		}
	}
}

int main()
{
	adjlist* g;
	g = (adjlist*)malloc(sizeof(adjlist));
	if (g == NULL)
	{
		printf("NULL\n");
		return;
	}
	int flag;
	printf("0.无向图         1.有向图\n");
	scanf("%d", &flag);
	creatgraph(g, flag);
	displaygraph(g);
	BFS(g);
	return 0;
}






