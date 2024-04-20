#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define maxsize 100

typedef struct graph
{
	int n;//顶点数
	int lines;//边数
	char* vertex;//顶点数组    vertex-->顶点
	int** edges;//矩阵的表示
}graph;

bool initgraph(graph* g)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < g->n; i++)
	{
		for (j = 0; j < g->n; j++)
		{
			g->edges[i][j] = 0;
		}
	}
	for (i = 0; i < g->n; i++)
	{
		for (j = 0; j < g->n; j++)
		{
			if (g->edges[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}

void creatgraph(graph* g)
{
	int i, j, k;
	char vertex1;
	char vertex2;
	printf("请输入矩阵表里面的顶点数目\n");
	scanf("%d", &g->n);
	printf("请输入矩阵表里面的边的数目\n");
	scanf("%d", &g->lines);
	printf("请输入每个顶点的信息\n");
	g->vertex = NULL;
	g->vertex = (char*)malloc(sizeof(char) * g->n);
	if (g->vertex == NULL)
	{
		printf("NULL\n");
		return;
	}
	g->edges = NULL;
	g->edges = (int**)malloc(sizeof(int) * (g->n));//二维数组有几行;
	if (g->edges == NULL)
	{
		printf("NULL\n");
		return;
	}
	for (i = 0; i < g->n; i++)
	{
		g->edges[i] = (int*)malloc(sizeof(int) * g->n);//分配每一行有几个元素;
		if (g->edges == NULL)
		{
			printf("NULL\n");
			return;
		}
	}
	for (i = 0; i < g->n; i++)
	{
		getchar();
		printf("请输入第%d个顶点\n", i + 1);
		scanf("%c", &(g->vertex[i]));//输入了n个顶点;
	}
	if (!initgraph(g))
	{
		printf("初始化失败\n");
		return;
	}
	for (i = 0; i < g->lines; i++)
	{
		getchar();
		printf("建立第%d条边(输入格式:顶点1顶点2):\n", i + 1);
		scanf("%c,%c", &vertex1, &vertex2);
		for (j = 0; j < g->n; j++)
		{
			for (k = 0; k < g->n; k++)
			{
				if (vertex1 == g->vertex[j] && vertex2 == g->vertex[k])
				{
					
					g->edges[j][k] = 1;//默认是无向图
					//g->edges[k][j] = 1;//加上这句则是有向图
				}
			}
		}
	}
}

void displaygrpha(graph* g)
{
	system("cls");
	printf("邻阶矩阵表示为:\n\n");
	int i = 0;
	int j = 0;
	printf("   ");
	for (i = 0; i < g->n; i++)
	{
		printf("%c  ", g->vertex[i]);
	}
	printf("\n");
	for (i = 0; i< g->n; i++)
	{
		printf("%c  ", g->vertex[i]);
		for (j = 0; j < g->n; j++)
		{
			printf("%d  ", g->edges[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	graph g;
	creatgraph(&g);
	displaygrpha(&g);
	return 0;
}




