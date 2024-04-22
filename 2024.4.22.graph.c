#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////�ڽӾ����ʾ��
//
////typedef struct graph
////{
////	char* vertex;
////	int n;
////	int lines;
////	int** edges;
////}graph;
////
////bool initgraph(graph* g)
////{
////	int i = 0;
////	int j = 0;
////	for (i = 0; i < g->n; i++)
////	{
////		for (j = 0; j < g->n; j++)
////		{
////			g->edges[i][j] = 0;
////		}
////	}
////	for (i = 0; i < g->n; i++)
////	{
////		for (j = 0; j < g->n; j++)
////		{
////			if (g->edges[i][j] != 0)
////			{
////				return false;
////			}
////		}
////	}
////	return true;
////}
////
////void creatgraph(graph* g, int flag)
////{
////	printf("�����м������\n");
////	scanf("%d", &g->n);
////	printf("�����м�����\n");
////	scanf("%d", &g->lines);
////	//��̬����ռ�
////	g->vertex = (char*)malloc(sizeof(char) * g->n);
////	if (g->vertex == NULL)
////	{
////		printf("NULL\n");
////		return;
////	}
////	g->edges = (int**)malloc(sizeof(int*) * g->n);
////	if (g->edges == NULL)
////	{
////		printf("NULL\n");
////		return;
////	}
////	int i = 0;
////	for (i = 0; i < g->n; i++)
////	{
////		g->edges[i] = (int*)malloc(sizeof(int) * g->n);
////		if (g->edges[i] == NULL)
////		{
////			printf("NULL\n");
////			return;
////		}
////	}
////	if (!initgraph(g))
////	{
////		printf("init failed\n");
////		return;
////	}
////	for (i = 0; i < g->n; i++)
////	{
////		getchar();
////		printf("�������%d������\n", i + 1);
////		scanf("%c", &g->vertex[i]);
////	}
////	int j = 0;
////	int k = 0;
////	char line1;
////	char line2;
////	for (i = 0; i < g->lines; i++)
////	{
////		getchar();
////		printf("�������%d����\n", i + 1);
////		scanf("%c,%c", &line1, &line2);
////		for (j = 0; j < g->n; j++)
////		{
////			for (k = 0; k < g->n; k++)
////			{
////				if (g->vertex[j] == line1 && g->vertex[k] == line2)
////				{
////					g->edges[j][k] = 1;
////					if (flag == 0)
////					{
////						g->edges[k][j] = 1;
////					}
////				}
////			}
////		}
////	}
////}
////
////void displaygraph(graph* g)
////{
////	int i;
////	int j;
////	printf("�ڽӾ�������:\n\n");
////	printf("   ");
////	for (i = 0; i < g->n; i++)
////	{
////		printf("%c  ", g->vertex[i]);
////	}
////	printf("\n");
////	for (i = 0; i < g->n; i++)
////	{
////		printf("%c  ", g->vertex[i]);
////		for (j = 0; j < g->n; j++)
////		{
////			printf("%d  ", g->edges[i][j]);
////		}
////		printf("\n");
////	}
////
////}
////
////void freegraph(graph* g)
////{
////	free(g->vertex);
////	g->vertex = NULL;
////	int i = 0;
////	for (i = 0; i < g->n; i++)
////	{
////		free(g->edges[i]);
////	}
////	free(g->edges);
////	g->edges = NULL;
////}
////
////int main()
////{
////	graph g;
//	/*printf("��ѡ��Ҫ����ͼ��������ͼ\n");
//	printf("1.����ͼ        0.����ͼ\n");
//	int flag;
//	scanf("%d", &flag);*/
////	creatgraph(&g, flag);
////	displaygraph(&g);
////	freegraph(&g);
////	return 0;
////}
//
//
////�ڽӱ��ʾ��
//
//typedef char vertextype;
//typedef struct edgenode
//{
//	int edgeline;
//	struct edgenode* next;
//}edgenode;
//
//typedef struct vertex_head_node
//{
//	vertextype data;
//	edgenode* firstnode;
//}vertex_head_node;
//
//typedef struct adjlist
//{
//	vertex_head_node* vertex;
//	int n;
//	int lines;
//}adjlist;
//
//void creatgraph(adjlist* g, int flag)
//{
//	if (flag == 0)
//	{
//		printf("������һ������ͼ\n");
//	}
//	else
//	{
//		printf("������һ������ͼ\n");
//	}
//	printf("��ͼһ���м�������?\n");
//	scanf("%d", &g->n);
//	printf("��ͼһ���м�����?\n");
//	scanf("%d", &g->lines);
//	g->vertex = (vertex_head_node*)malloc(sizeof(vertex_head_node));
//	if (g->vertex == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("�������%d������\n", i + 1);
//		scanf("%c", &(g->vertex[i].data));
//		g->vertex[i].firstnode = NULL;
//	}
//	//int j;
//	int line1;
//	int line2;
//	edgenode* edge;
//	for (i = 0; i < g->lines; i++)
//	{
//		getchar();
//		printf("�������%d���ߵĹ�ϵ\n", i + 1);
//		scanf("%d,%d", &line1, &line2);
//		edge = (edgenode*)malloc(sizeof(edgenode));
//		if (edge == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//		edge->edgeline = line2;
//		edge->next = g->vertex[line1].firstnode;
//		g->vertex[line1].firstnode = edge;
//	}
//}
//
//
//int main()
//{
//	adjlist* g = (adjlist*)malloc(sizeof(adjlist));
//	if (g == NULL)
//	{
//		printf("NULL\n");
//		return -1;
//	}
//	printf("��ѡ��Ҫ����ͼ��������ͼ\n");
//	printf("1.����ͼ        0.����ͼ\n");
//	int flag;
//	scanf("%d", &flag);
//	creatgraph(g, flag);
//	return 0;
//}


typedef char vertextype;

#define maxsize 100

typedef struct edgenode
{
	int edgelines;
	struct edgenode* next;
}edgenode;

typedef struct vertex_head_node
{
	vertextype data;
	edgenode* firstnode;
}vertex_head_node;

typedef struct adjlist
{
	vertex_head_node* vertex;
	int n;
	int lines;
}adjlist;

void creategraph(adjlist* graph, int flag)
{
	if (flag == 0)
	{
		printf("\n����������ͼ\n");
	}
	else
	{
		printf("\n����������ͼ\n");
	}
	printf("������ͼ���м�������\n");
	scanf("%d", &graph->n);
	printf("������ͼ���м�����\n");
	scanf("%d", &graph->lines);
	graph->vertex = (vertex_head_node*)malloc(sizeof(vertex_head_node) * graph->n);
	if (graph->vertex == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i;
	for (i = 0; i < graph->n; i++)
	{
		getchar();
		printf("�������%d������\n", i + 1);
		scanf("%c", &(graph->vertex[i].data));
		graph->vertex[i].firstnode = NULL;
	}
	edgenode* edge;
	int line1;
	int line2;
	for (i = 0; i < graph->lines; i++)
	{
		getchar();
		printf("�������%d���ߵĹ�ϵ(��1,2)\n", i + 1);
		scanf("%d,%d", &line1, &line2);
		edge = (edgenode*)malloc(sizeof(edgenode));
		if (edge == NULL)
		{
			printf("NULL\n");
			return;
		}
		edge->edgelines = line2;
		edge->next = graph->vertex[line1].firstnode;
		graph->vertex[line1].firstnode = edge;
		if (flag == 0)
		{
			edge = (edgenode*)malloc(sizeof(edgenode));
			if (edge == NULL)
			{
				printf("NULL\n");
				return;
			}
			edge->edgelines = line1;
			edge->next = graph->vertex[line2].firstnode;
			graph->vertex[line2].firstnode = edge;
		}
	}
}

void diaplaygraph(adjlist* graph)
{
	system("cls");
	printf("ͼ��ʾΪ:\n\n");
	int i = 0;
	edgenode* pointer;
	for (i = 0; i < graph->n; i++)
	{
		printf("[%c]--> ", graph->vertex[i].data);
		pointer = graph->vertex[i].firstnode;
		while (pointer != NULL)
		{
			printf("[%d]--> ", pointer->edgelines);
			pointer = pointer->next;
		}
		printf("NULL");
		printf("\n");
	}
}

void DFS(adjlist* graph)
{
	printf("��������Ҫ���ĸ����㿪ʼ����\n");
	int vi;
	scanf("%d", &vi);
	printf("(%d,", vi);
	printf("%c)", graph->vertex[vi].data);
	int* visited;
	visited = (int*)malloc(sizeof(int) * graph->n);
	if (visited == NULL)
	{
		printf("NULL\n");
		return;
	}
	visited[vi] = 1;
	edgenode* pointer;
	pointer = graph->vertex[vi].firstnode;
	while (pointer != NULL)
	{
		if (visited[pointer->edgelines] == 0)
		{
			DFS(graph);
		}
	}
}

int main()
{
	adjlist* graph = (adjlist*)malloc(sizeof(adjlist));
	if (graph == NULL)
	{
		printf("NULL\n");
		return;
	}
	printf("�� ѡ �� ͼ �� �� ��\n");
	printf("1.����ͼ    0.����ͼ\n");
	int flag;
	scanf("%d", &flag);
	creategraph(graph, flag);
	diaplaygraph(graph);
	DFS(graph);
	free(graph->vertex);
	return 0;
}
