#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//typedef struct graph
//{
//	int n;//统计顶点数目；
//	int lines;//统计边的数目；
//	char* vexter;//输入顶点；
//	int** edges;//输入边；
//}graph;
//
//bool initgraph(graph* g)//初始化矩阵
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		for (j = 0; j < g->n; j++)
//		{
//			g->edges[i][j] = 0;
//		}
//	}
//	for (i = 0; i < g->n; i++)
//	{
//		for (j = 0; j < g->n; j++)
//		{
//			if (g->edges[i][j] != 0)
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
//	char line1;
//	char line2;
//	printf("请输入该图中有多少顶点\n");
//	scanf("%d", &g->n);
//	printf("该图中有几条边\n");
//	scanf("%d", &g->lines);
//	g->vexter = (char*)malloc(sizeof(char) * g->n);//动态申请存储顶点个数
//	if (g->vexter == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	g->edges = (int**)malloc(sizeof(int*) * g->n);//动态申请矩阵的行
//	if (g->edges == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		g->edges[i] = (int*)malloc(sizeof(int) * g->n);//动态申请矩阵的列
//		if (g->edges[i] == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//	}
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("请输入第%d个顶点\n", i + 1);
//		scanf("%c", &(g->vexter[i]));
//	}
//	if (!initgraph(g))
//	{
//		printf("init failed\n");
//		return;
//	}
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < g->lines; i++)
//	{
//		getchar();
//		printf("请输入第%d条边,(输入格式：A,B)\n", i + 1);
//		scanf("%c,%c", &line1, &line2);
//		for (j = 0; j < g->n; j++)
//		{
//			for (k = 0; k < g->n; k++)
//			{
//				if (line1 == g->vexter[j] && line2 == g->vexter[k])
//				{
//					g->edges[j][k] = 1;
//					g->edges[k][j] = 1;//加上这句话则为无向矩阵;
//				}
//			}
//		}
//	}
//}
//
//void displaygraph(graph* g)
//{
//	int i = 0;
//	int j = 0;
//	printf("   ");
//	for (i = 0; i < g->n; i++)
//	{
//		printf("%c  ", g->vexter[i]);
//	}
//	printf("\n");
//	for (i = 0; i < g->n; i++)
//	{
//		printf("%c  ", g->vexter[i]);
//		for (j = 0; j < g->n; j++)
//		{
//			printf("%d  ", g->edges[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//
//void freegraph(graph* g)
//{
//	free(g->vertex);
//	g->vertex = NULL;
//
//	for (int i = 0; i < g->n; i++)
//	{
//		free(g->edges[i]);
//	}
//	free(g->edges);
//	g->edges = NULL;
//}
//
//int main()
//{
//	graph g;
//	creatgraph(&g);
//	displaygraph(&g);
//	freegraph(&g);
//	return 0;
//}

//typedef struct graph
//{
//	int n;
//	int lines;
//	char* vertex;
//	int** edges;
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
//			g->edges[i][j] = 0;
//		}
//	}
//	for (i = 0; i < g->n; i++)
//	{
//		for (j = 0; j < g->n; j++)
//		{
//			if (g->edges[i][j] != 0)
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
//	printf("输入矩阵中顶点的个数\n");
//	scanf("%d", &g->n);
//	printf("输入图的边数\n");
//	scanf("%d", &g->lines);
//	//动态分配内存
//	g->vertex = (char*)malloc(sizeof(char) * g->n);
//	if (g->vertex == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	g->edges = (int**)malloc(sizeof(int*) * g->n);//相当于动态分配了二维数组的行
//	if (g->edges == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for(i = 0; i < g->n; i++)
//	{
//		g->edges[i] = (int*)malloc(sizeof(int) * g->n);//相当于动态分配了二维数组的列
//		if (g->edges[i] == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//	}
//	//至此，完成对于两个顶点集合和矩阵的动态内存分配;
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("请输入第%d个顶点\n", i + 1);
//		scanf("%c", &(g->vertex[i]));
//	}
//	if (!initgraph(g))
//	{
//		printf("init failed\n");
//		return;
//	}
//	char line1;
//	char line2;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < g->lines; i++)
//	{
//		getchar();
//		printf("请输入%d条边（输入格式：A,B）\n", i + 1);
//		scanf("%c,%c", &line1, &line2);
//		for (j = 0; j < g->n; j++)
//		{
//			for (k = 0; k < g->n; k++)
//			{
//				if (line1 == g->vertex[j] && line2 == g->vertex[k])
//				{
//					g->edges[j][k] = 1;
//					g->edges[k][j] = 1;//加上这句则是无向图
//				}
//			}
//		}
//	}
//}
//
//void displaygraph(graph* g)
//{
//	int i;
//	int j;
//	printf("   ");
//	for (i = 0; i < g->n; i++)
//	{
//		printf("%c  ", g->vertex[i]);
//	}
//	printf("\n");
//	for (i = 0; i < g->n; i++)
//	{
//		printf("%c  ", g->vertex[i]);
//		for (j = 0; j < g->n; j++)
//		{
//			printf("%d  ", g->edges[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void freegraph(graph* g)
//{
//	free(g->vertex);
//	g->vertex = NULL;
//	for (int i = 0; i < g->n; i++)
//	{
//		free(g->edges[i]);//释放二维数组的每一行
//	}
//	free(g->edges);//再释放每一列
//	g->edges = NULL;
//}
//
//
//int main()
//{
//	graph g;
//	creatgraph(&g);
//	displaygraph(&g);
//	freegraph(&g);
//	return 0;
//}


