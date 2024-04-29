#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct graph
{
	char* vertex;
	int** edge;
	int n;
	int edgelines;
}graph;

bool initgraph(graph* g)
{
	int i;
	int j;
	for (i = 0; i < g->n; i++)
	{
		for (j = 0; j < g->n; j++)
		{
			g->edge[i][j] = 0;
		}
	}
	for (i = 0; i < g->n; i++)
	{
		for (j = 0; j < g->n; j++)
		{
			if (g->edge[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

void creatgraph(graph* g, int choice)
{
	printf("请输入顶点个数\n");
	scanf("%d", &g->n);
	printf("请输入图中边数\n");
	scanf("%d", &g->edgelines);
	g->vertex = (char*)malloc(sizeof(char) * g->n);
	if (g->vertex == NULL)
	{
		printf("NULL\n");
		return;
	}
	g->edge = (int**)malloc(sizeof(int*) * g->n);
	if (g->edge == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i;
	for (i = 0; i < g->n; i++)
	{
		g->edge[i] = (int*)malloc(sizeof(int) * g->n);
		if (g->edge[i] == NULL)
		{
			printf("NULL\n");
			return;
		}
	}
	if (!initgraph(g))
	{
		printf("init failed\n");
		return;
	}
	for (i = 0; i < g->n; i++)
	{
		getchar();
		printf("请输入第%d个顶点\n",i + 1);
		scanf("%c", &g->vertex[i]);
	}
	char line1;
	char line2;
	int j, k;
	for (i = 0; i < g->edgelines; i++)
	{
		getchar();
		printf("请输入边的关系\n");
		scanf("%c,%c", &line1, &line2);
		for (j = 0; j < g->n; j++)
		{
			for (k = 0; k < g->n; k++)
			{
				if (g->vertex[j] == line1 - 1 && g->vertex[k] == line2 - 1)
				{
					g->edge[j][k] = 1;
					if (choice == 0)
					{
						g->edge[k][j] = 1;

					}
				}
			}
		}
	}
}

void displaygraph(graph* g)
{
	system("cls");
	printf("邻接矩阵表示为:\n");
	printf("   ");
	int i;
	for (i = 0; i < g->n; i++)
	{
		printf("%c  ", g->vertex[i]);
	}
	printf("\n");
	int j;
	for (i = 0; i < g->n; i++)
	{
		printf("%c  ", g->vertex[i]);
		for (j = 0; j < g->n; j++)
		{
			printf("%d  ", g->edge[i][j]);
		}
		printf("\n");
	}

}

int main()
{
	graph g;
	printf("1.有向图           0.无向图\n");
	printf("请选择\n");
	int choice;
	scanf("%d", &choice);
	creatgraph(&g, choice);
	displaygraph(&g);
}