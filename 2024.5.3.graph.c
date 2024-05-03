#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef char vertextype;

//typedef struct graph
//{
//	int** edgeline;
//	char* vertex;
//	int n;
//	int edgenumber;
//}graph;
//
//bool initgraph(graph* g)
//{
//	int i;
//	int j;
//	for (i = 0; i < g->n; i++)
//	{
//		for (j = 0; j < g->n; j++)
//		{
//			g->edgeline[i][j] = 0;
//		}
//	}
//	for (i = 0; i < g->n; i++)
//	{
//		for (j = 0; j < g->n; j++)
//		{
//			if (g->edgeline[i][j] != 0)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//void creatgraph(graph* g)
//{
//	printf("1.有向图           0.无向图\n");
//	int choice;
//	scanf("%d", &choice);
//	printf("\n请输入图中顶点个数\n");
//	scanf("%d", &g->n);
//	printf("请输入图中边的个数\n");
//	scanf("%d", &g->edgenumber);
//	g->vertex = (char*)malloc(sizeof(char) * g->n);
//	if (g->vertex == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	g->edgeline = (int**)malloc(sizeof(int*) * g->n);
//	if (g->edgeline == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i;
//	for (i = 0; i < g->n; i++)
//	{
//		g->edgeline[i] = (int*)malloc(sizeof(int) * g->n);
//		if (g->edgeline[i] == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//	}
//	initgraph(g);
//
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("请输入第%d个顶点的值\n", i + 1);
//		scanf("%c", &g->vertex[i]);
//	}
//	char line1;
//	char line2;
//	int j;
//	int k;
//	for (i = 0; i < g->edgenumber; i++)
//	{
//		getchar();
//		printf("请输入边的关系(a.b)\n");
//		scanf("%c,%c", &line1, &line2);
//		for (j = 0; j < g->n; j++)
//		{
//			for (k = 0; k < g->n; k++)
//			{
//				if (line1 == g->vertex[j] && line2 == g->vertex[k])
//				{
//					g->edgeline[j][k] = 1;
//					if (choice == 0)
//					{
//						g->edgeline[k][j] = 1;
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
//	printf("邻接矩阵表示为\n");
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
//			printf("%d  ", g->edgeline[i][j]);
//		}
//		printf("\n");
//	}
//
//
//}
//
//int main()
//{
//	graph g;
//	creatgraph(&g);
//	displaygraph(&g);
//	return 0;
//}

typedef struct edgeline
{
	int edge;
	struct edgeline* next;
}edgeline;

typedef struct vertex_head
{
	vertextype vertex;
	edgeline* first;
}vertex_head;

typedef struct adjlist
{
	vertex_head* vertex;
	int n;
	int edgenumber;
}adjlist;

void creatgraph(adjlist* graph)
{
	printf("0.无向图          1.有向图\n");
	int choice;
	scanf("%d", &choice);
	printf("请输入图中的顶点数\n");
	scanf("%d", &graph->n);
	printf("请输入图中的边数\n");
	scanf("%d", &graph->edgenumber);
	graph->vertex = (vertex_head*)malloc(sizeof(vertex_head) * graph->n);
	if (graph->vertex == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i;
	for (i = 0; i < graph->n; i++)
	{
		getchar();
		printf("请输入第%d个顶点的值", i + 1);
		scanf("%c", &graph->vertex[i].vertex);
		graph->vertex[i].first = NULL;
	}
	edgeline* pointer;
	int line1;
	int line2;
	for (i = 0; i < graph->edgenumber; i++)
	{
		getchar();
		printf("请输入边的关系(1,2)\n");
		scanf("%d,%d", &line1, &line2);
		pointer = (edgeline*)malloc(sizeof(edgeline));
		if (pointer == NULL)
		{
			printf("NULL\n");
			return;
		}
		pointer->edge = line2 - 1;
		pointer->next = graph->vertex[line1 - 1].first;
		graph->vertex[line1 - 1].first = pointer;
		if (choice == 0)
		{
			pointer = (edgeline*)malloc(sizeof(edgeline));
			if (pointer == NULL)
			{
				printf("NULL\n");
				return;
			}
			pointer->edge = line1 - 1;
			pointer->next = graph->vertex[line2 - 1].first;
			graph->vertex[line2 - 1].first = pointer;
		}
	}
}

void displaygraph(adjlist* graph)
{
	system("cls");
	printf("邻接表表示为:\n");
	int i;
	edgeline* pointer;
	for (i = 0; i < graph->n; i++)
	{
		printf("[%d,%c]", i + 1, graph->vertex[i].vertex);
		pointer = graph->vertex[i].first;
		while (pointer != NULL)
		{
			printf("-->[%d]", pointer->edge + 1);
			pointer = pointer->next;
		}
		printf("\n");
	}

}

int main()
{
	adjlist* graph;
	graph = (adjlist*)malloc(sizeof(adjlist));
	if (graph == NULL)
	{
		printf("NULL\n");
		return;
	}
	creatgraph(graph);
	displaygraph(graph);
	return 0;
}