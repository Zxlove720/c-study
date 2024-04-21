#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

//图的邻接表法
//#define maxsize 100
//typedef char vertextype;
//
//typedef struct edgenode
//{
//	int adjvertex;//邻接邻域
//	struct edgenode* next;
//}edgenode;
//
//typedef struct vertex_head_node
//{
//	vertextype data;
//	edgenode* firstedge;
//}vertex_head_node;
//
//typedef struct adjlist
//{
//	vertex_head_node adjlist[maxsize];
//	int n;
//	int lines;
//}adjlist;
//
//void creatgraph(adjlist* g, int flag)
//{
//	edgenode* p;
//	if (flag == 0)
//	{
//		printf("\n将建立一个无向图\n");
//	}
//	else
//	{
//		printf("\n将建立一个有向图\n");
//	}
//	printf("请输入图的顶点数\n");
//	scanf("%d", &g->n);
//	printf("请输入图的边数\n");
//	scanf("%d", &g->lines);
//	printf("请输入图的各项点信息\n");
//	int i = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		getchar();
//		printf("请输入第%d个顶点的信息\n", i + 1);
//		scanf("%c", &(g->adjlist[i].data));
//		g->adjlist[i].firstedge = NULL;
//	}
//	int j = 0;
//	int line1;
//	int line2;
//	for (j = 0; j < g->lines; j++)
//	{
//		printf("请输入第%d条边\n", j + 1);
//		getchar();
//		scanf("%d,%d", &line1, &line2);
//		p = (edgenode*)malloc(sizeof(edgenode));
//		if (p == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//		p->adjvertex = line2;
//		p->next = g->adjlist[line1].firstedge;
//		g->adjlist[line1].firstedge = p;
//		if (flag == 0)
//		{
//			p = (edgenode*)malloc(sizeof(edgenode));
//			if (p == NULL)
//			{
//				printf("NULL\n");
//				return;
//			}
//			p->adjvertex = line1;
//			p->next = g->adjlist[line2].firstedge;
//			g->adjlist[line2].firstedge = p;
//		}
//	}
//}
//
//void displaygraph(adjlist* g)
//{
//	int i;
//	edgenode* p;
//	system("cls");
//	printf("邻接表表示如下\n");
//	for (i = 0; i < g->n; i++)
//	{
//		printf("%2d [%c]", i, g->adjlist[i].data);
//		p = g->adjlist[i].firstedge;
//		while (p != NULL)
//		{
//			printf("-->[%d]", p->adjvertex);
//			p = p->next;
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	adjlist* g = (adjlist*)malloc(sizeof(adjlist));
//	printf("请输入0 or 1\n");
//	int flag = 0;
//	scanf("%d", &flag);
//	creatgraph(g, flag);
//	displaygraph(g);
//	return 0;
//}


//创建边
/*typedef char vertextype;

typedef struct edgenode
{
	int adjvertex;//邻接邻域
	struct edgenode* next;
}edgenode;

typedef struct vertex_head_node
{
	vertextype data;
	struct vertex_head_node* firstedge;
}vertex_head_node;

#define maxsize 100

typedef struct adjlist
{
	vertex_head_node adjlist[maxsize];
	int n;
	int lines;
}adjlist;

void creatgraph(adjlist* g, int flag)
{
	printf("输入有多少个顶点\n");
	scanf("%d", &g->n);
	printf("输入有多少边\n");
	scanf("%d", &g->lines);
	if (flag == 0)
	{
		printf("\n会输出一个无向图\n");
	}
	int i = 0;
	for (i = 0; i < g->n; i++)
	{
		printf("请输入第%d个顶点\n", i + 1);
		getchar();
		scanf("%c", &(g->adjlist[i].data));
		g->adjlist[i].firstedge = NULL;//将顶点数组的后面全部连NULL
	}
	edgenode* p;
	int line1;
	int line2;
	for (i = 0; i < g->lines; i++)
	{
		printf("请输入第%d条边的信息,如1,2\n", i + 1);
		getchar();
		scanf("%d,%d", &line1, &line2);
		p = (edgenode*)malloc(sizeof(edgenode));
		if (p == NULL)
		{
			printf("NULL\n");
			return;
		}
		p->adjvertex = line2;
		p->next = g->adjlist[line1].firstedge;
		g->adjlist[line1].firstedge = p;
		if (flag == 0)
		{
			p = (edgenode*)malloc(sizeof(edgenode));
			if (p == NULL)
			{
				printf("NULL\n");
				return;
			}
			p->adjvertex = line1;
			p->next = g->adjlist[line2].firstedge;
			g->adjlist[line2].firstedge = p;

		}
	}
}

void displaygraph(adjlist* g)
{
	int i;
	edgenode* p;
	system("cls");
	printf("邻接表表示如下\n");
	for (i = 0; i < g->n; i++)
	{
		printf("%2d [%c]", i, g->adjlist[i].data);
		p = g->adjlist[i].firstedge;
		while (p != NULL)
		{
			printf("-->[%d]", p->adjvertex);
			p = p->next;
		}
		printf("\n");
	}
}

int main()
{
	adjlist* g = (adjlist*)malloc(sizeof(adjlist));
	if (g == NULL)
	{
		printf("NULL\n");
		return -1;
	}
	int flag;
	scanf("%d", &flag);
	creatgraph(g, flag);
	displaygraph(g);
	return 0;
}*/

//typedef char vertextype;
//
//typedef struct edgenode
//{
//	int adjvertex;
//	struct edgenode* next;
//}edgenode;
//
//typedef struct vertex_head_node
//{
//	vertextype data;
//	edgenode* first;
//}vertex_head_node;
//
//typedef struct adjlist
//{
//	vertex_head_node[maxsize];
//
//
//}adjlist;


typedef char vertextype;

typedef struct edgenode
{
	int adjvertex;
	struct edgenode* next;
}edgenode;

typedef struct vertex_head_node
{
	vertextype data;
	edgenode* firstnode;
}vertex_head_node;

typedef struct adjlist
{
	vertex_head_node* adjgraph;
	int n;
	int lines;
}adjlist;

void creatgraph(adjlist* g, int flag)
{
	printf("要输入几个顶点?\n");
	scanf("%d", &g->n);
	printf("要输入几条边?\n");
	scanf("%d", &g->lines);
	g->adjgraph = (int*)malloc(sizeof(int) * g->n);//动态分配顶点数组
	if (g->adjgraph == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i;
	for (i = 0; i < g->n; i++)
	{
		printf("请输入第%d个结点的信息\n", i + 1);
		scanf("%c", &g->adjgraph[i].data);
		getchar();
		g->adjgraph[i].firstnode = NULL;
	}
	edgenode* edge;
	int line1;
	int line2;
	for (i = 0; i < g->lines; i++)
	{
		getchar();
		printf("请输入边的关系.如1,2\n");
		scanf("%d,%d", &line1, &line2);
		edge = (edgenode*)malloc(sizeof(edgenode));
		if (edge == NULL)
		{
			printf("NULL\n");
			return;
		}
		edge->adjvertex = line1;
		edge->next = g->adjgraph[line2].firstnode;
		g->adjgraph[line2].firstnode = edge;
		if (flag == 0)
		{
			printf("这次输入的是有向图\n");
			edge = (edgenode*)malloc(sizeof(edgenode));
			if (edge == NULL)
			{
				printf("NULL\n");
				return;
			}
			edge->adjvertex = line2;
			edge->next = g->adjgraph[line1].firstnode;
			g->adjgraph[line1].firstnode = edge;
		}
	}
}

void display(adjlist* g)
{
	int i;
	edgenode* pointer;
	printf("邻接矩阵表示为\n");
	for (i = 0; i < g->n; i++)
	{
		printf("%d| %c", i, g->adjgraph[i].data);
		pointer = g->adjgraph[i].firstnode;
		while (pointer != NULL)
		{
			printf("-->[%d]", pointer->adjvertex);
			pointer = pointer->next;
		}
	}
}

int main()
{
	adjlist* g = (adjlist*)malloc(sizeof(adjlist));
	if (g == NULL)
	{
		printf("NULL\n");
		return -1;
	}
	int flag;
	printf("请选择构建的图的类型\n");
	scanf("%d", &flag);
	creatgraph(g, flag);
	display(g);
	return 0;
}