#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define maxsize 100

typedef struct graph
{
	int n;//������
	int lines;//����
	char* vertex;//��������    vertex-->����
	int** edges;//����ı�ʾ
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
	printf("��������������Ķ�����Ŀ\n");
	scanf("%d", &g->n);
	printf("��������������ıߵ���Ŀ\n");
	scanf("%d", &g->lines);
	printf("������ÿ���������Ϣ\n");
	g->vertex = NULL;
	g->vertex = (char*)malloc(sizeof(char) * g->n);
	if (g->vertex == NULL)
	{
		printf("NULL\n");
		return;
	}
	g->edges = NULL;
	g->edges = (int**)malloc(sizeof(int) * (g->n));//��ά�����м���;
	if (g->edges == NULL)
	{
		printf("NULL\n");
		return;
	}
	for (i = 0; i < g->n; i++)
	{
		g->edges[i] = (int*)malloc(sizeof(int) * g->n);//����ÿһ���м���Ԫ��;
		if (g->edges == NULL)
		{
			printf("NULL\n");
			return;
		}
	}
	for (i = 0; i < g->n; i++)
	{
		getchar();
		printf("�������%d������\n", i + 1);
		scanf("%c", &(g->vertex[i]));//������n������;
	}
	if (!initgraph(g))
	{
		printf("��ʼ��ʧ��\n");
		return;
	}
	for (i = 0; i < g->lines; i++)
	{
		getchar();
		printf("������%d����(�����ʽ:����1����2):\n", i + 1);
		scanf("%c,%c", &vertex1, &vertex2);
		for (j = 0; j < g->n; j++)
		{
			for (k = 0; k < g->n; k++)
			{
				if (vertex1 == g->vertex[j] && vertex2 == g->vertex[k])
				{
					
					g->edges[j][k] = 1;//Ĭ��������ͼ
					//g->edges[k][j] = 1;//���������������ͼ
				}
			}
		}
	}
}

void displaygrpha(graph* g)
{
	system("cls");
	printf("�ڽ׾����ʾΪ:\n\n");
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




