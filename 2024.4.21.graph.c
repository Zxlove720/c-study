#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//typedef struct graph
//{
//	int n;//ͳ�ƶ�����Ŀ��
//	int lines;//ͳ�Ʊߵ���Ŀ��
//	char* vexter;//���붥�㣻
//	int** edges;//����ߣ�
//}graph;
//
//bool initgraph(graph* g)//��ʼ������
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
//	printf("�������ͼ���ж��ٶ���\n");
//	scanf("%d", &g->n);
//	printf("��ͼ���м�����\n");
//	scanf("%d", &g->lines);
//	g->vexter = (char*)malloc(sizeof(char) * g->n);//��̬����洢�������
//	if (g->vexter == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	g->edges = (int**)malloc(sizeof(int*) * g->n);//��̬����������
//	if (g->edges == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		g->edges[i] = (int*)malloc(sizeof(int) * g->n);//��̬����������
//		if (g->edges[i] == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//	}
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("�������%d������\n", i + 1);
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
//		printf("�������%d����,(�����ʽ��A,B)\n", i + 1);
//		scanf("%c,%c", &line1, &line2);
//		for (j = 0; j < g->n; j++)
//		{
//			for (k = 0; k < g->n; k++)
//			{
//				if (line1 == g->vexter[j] && line2 == g->vexter[k])
//				{
//					g->edges[j][k] = 1;
//					g->edges[k][j] = 1;//������仰��Ϊ�������;
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
//	printf("��������ж���ĸ���\n");
//	scanf("%d", &g->n);
//	printf("����ͼ�ı���\n");
//	scanf("%d", &g->lines);
//	//��̬�����ڴ�
//	g->vertex = (char*)malloc(sizeof(char) * g->n);
//	if (g->vertex == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	g->edges = (int**)malloc(sizeof(int*) * g->n);//�൱�ڶ�̬�����˶�ά�������
//	if (g->edges == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for(i = 0; i < g->n; i++)
//	{
//		g->edges[i] = (int*)malloc(sizeof(int) * g->n);//�൱�ڶ�̬�����˶�ά�������
//		if (g->edges[i] == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//	}
//	//���ˣ���ɶ����������㼯�Ϻ;���Ķ�̬�ڴ����;
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("�������%d������\n", i + 1);
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
//		printf("������%d���ߣ������ʽ��A,B��\n", i + 1);
//		scanf("%c,%c", &line1, &line2);
//		for (j = 0; j < g->n; j++)
//		{
//			for (k = 0; k < g->n; k++)
//			{
//				if (line1 == g->vertex[j] && line2 == g->vertex[k])
//				{
//					g->edges[j][k] = 1;
//					g->edges[k][j] = 1;//���������������ͼ
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
//		free(g->edges[i]);//�ͷŶ�ά�����ÿһ��
//	}
//	free(g->edges);//���ͷ�ÿһ��
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


