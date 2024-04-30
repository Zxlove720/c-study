#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//邻接矩阵
typedef char vertextype;
typedef struct graph
{
	vertextype* vertex;
	int** edgeline;
	int n;
	int edgenumber;
}graph;

bool initgraph(graph* g)
{
	int i;
	int j;
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

void creatgraph(graph* g, int flag)
{
	if (flag == 0)
	{
		printf("将输出一个无向图\n");
	}
	else
	{
		printf("将输出一个有向图\n");
	}
	printf("\n");
	printf("有多少个顶点?\n");
	scanf("%d", &g->n);
	printf("有多少条边\n");
	scanf("%d", &g->edgenumber);
	g->vertex = (char*)malloc(sizeof(char) * g->n);
	if (g->vertex == NULL)
	{
		printf("NULL\n");
		return;
	}
	g->edgeline = (int**)malloc(sizeof(int*) * g->n);
	if (g->edgeline == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < g->n; i++)
	{
		g->edgeline[i] = (int*)malloc(sizeof(int) * g->n);
		if (g->edgeline[i] == NULL)
		{
			printf("NULL\n");
			return;
		}
	}
	for (i = 0; i < g->n; i++)
	{
		getchar();
		printf("请输入第%d个顶点\n", i + 1);
		scanf("%c", &g->vertex[i]);
	}
	if (!initgraph(g))
	{
		printf("init failed\n");
		return;
	}
	char line1;
	char line2;
	int j, k;
	for (i = 0; i < g->edgenumber; i++)
	{
		getchar();
		printf("请输入边的关系(A,B):\n");
		scanf("%c,%c", &line1, &line2);
		for (j = 0; j < g->n; j++)
		{
			for (k = 0; k < g->n; k++)
			{
				if (g->vertex[j] == line1 && g->vertex[k] == line2)
				{
					g->edgeline[j][k] = 1;
					if (flag == 0)
					{
						g->edgeline[k][j] = 1;
					}
				}
			}
		}
	}
}

void displaygraph(graph* g)
{
	system("cls");
	printf("邻接矩阵表示如下\n");
	int i;
	int j;
	printf("   ");
	for (i = 0; i < g->n; i++)
	{
		printf("%c  ", g->vertex[i]);
	}
	printf("\n");
	for (i = 0; i < g->n; i++)
	{
		printf("%c  ", g->vertex[i]);
		for (j = 0; j < g->n; j++)
		{
			printf("%d  ", g->edgeline[i][j]);
		}
		printf("\n");
	}


}

int main()
{
	graph g;
	printf("1.有向图              0.无向图\n");
	int flag;
	scanf("%d", &flag);
	creatgraph(&g, flag);
	displaygraph(&g);
	return 0;
}