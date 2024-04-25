#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef char vertextype;

typedef struct edgenode
{
	int edgelines;
	struct edgenode* next;
}edgenode;

typedef struct vertex_head
{
	vertextype data;
	edgenode* firstnode;
}vertex_head;

typedef struct adjlist
{
	vertex_head* vertex;
	int n;
	int line_number;
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
	printf("\n请输入图中的顶点个数\n");
	scanf("%d", &g->n);
	printf("\n请输入图中的边的条数\n");
	scanf("%d", &g->line_number);
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
		scanf("%c", &g->vertex[i].data);
		g->vertex[i].firstnode = NULL;
	}
	edgenode* edge;
	int line1;
	int line2;
	for (i = 0; i < g->line_number; i++)
	{
		getchar();
		printf("请输入第%d条边的关系(1,2)\n", i + 1);
		scanf("%d,%d", &line1, &line2);
		edge = (edgenode*)malloc(sizeof(edgenode));
		if (edge == NULL)
		{
			printf("NULL\n");
			return;
		}
		edge->edgelines = line2-1;
		edge->next = g->vertex[line1-1].firstnode;
		g->vertex[line1-1].firstnode = edge;
		if (flag == 0)
		{
			edge = (edgenode*)malloc(sizeof(edgenode));
			if (edge == NULL)
			{
				printf("NULL\n");
				return;
			}
			edge->edgelines = line1-1;
			edge->next = g->vertex[line2-1].firstnode;
			g->vertex[line2-1].firstnode = edge;
		}
	}
}

void displaygraph(adjlist* g)
{
	system("cls");
	printf("邻接表表示为:\n");
	int i = 0;
	edgenode* pointer;
	for (i = 0; i < g->n; i++)
	{
		printf("[%d,%c]", i + 1, g->vertex[i].data);
		pointer = g->vertex[i].firstnode;
		while (pointer != NULL)
		{
			printf("-->[%d]", pointer->edgelines + 1);
			pointer = pointer->next;
		}
		printf("\n");
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
	if (q->data == NULL)
	{
		printf("NULL\n");
		return false;
	}
	if (q->front == q->rear)
	{
		return true;
	}
	return false;
}

//void BFS(adjlist* g)
//{
//	int* visited;
//	visited = (int*)malloc(sizeof(int) * g->n);
//	if (visited == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < g->n; i++)
//	{
//		visited[i] = 0;
//	}
//	queue q;
//	if (!initqueue(&q, g))
//	{
//		printf("init failed\n");
//		return;
//	}
//	printf("请输入想要从第几个顶点开始遍历\n");
//	int vi;
//	scanf("%d", &vi);
//	printf("(%d,", vi + 1);
//	printf("%c) ", g->vertex[vi].data);
//	q.rear = (q.rear + 1) % g->n;
//	q.data[q.rear] = vi;
//	visited[vi] = 1;
//	edgenode* pointer;
//	int head;
//	while (q.front != q.rear)
//	{
//		q.front = (q.front + 1) % g->n;
//		head = q.data[q.front];
//		pointer = g->vertex[head].firstnode;
//		while (pointer != NULL)
//		{
//			if (visited[pointer->edgelines] == 0)
//			{
//				visited[pointer->edgelines] = 1;
//				printf("(%d,", pointer->edgelines + 1);
//				printf("%c) ", g->vertex[pointer->edgelines].data);
//				q.rear = (q.rear + 1) % g->n;
//				q.data[q.rear] = pointer->edgelines;
//			}
//			pointer = pointer->next;
//		}
//	}
//}


//优化BFS
void inqueue(queue* q, int vi, adjlist* g)
{
	q->rear = (q->rear + 1) % g->n;
	q->data[q->rear] = vi;
}

void visit(adjlist* g, int vi)
{
	printf("(%d,", vi + 1);
	printf("%c) ", g->vertex[vi].data);
}

int outqueue(queue* q, adjlist* g)
{
	int temp;
	q->front = (q->front + 1) % g->n;
	temp = q->data[q->front];
	return temp;
}

bool* initvisited(adjlist* g)
{
	bool* visited = (bool*)malloc(sizeof(bool) * g->n);
	if (visited == NULL)
	{
		printf("NULL\n");
		exit(1);
	}
	int i = 0;
	for (i = 0; i < g->n; i++)
	{
		visited[i] = false;
	}
	return visited;
}

void BFS(adjlist* g)
{
	queue q;
	if (!initqueue(&q, g))
	{
		printf("init failed\n");
		return;
	}
	bool* visited = initvisited(g);
	printf("请输入要从第几个顶点开始遍历:\n");
	int vi;
	scanf("%d", &vi);
	visit(g, vi);
	inqueue(&q, vi, g);
	visited[vi] = true;
	edgenode* pointer;
	int result;
	while (q.front != q.rear)
	{
		result = outqueue(&q, g);
		pointer = g->vertex[result].firstnode;
		while (pointer != NULL)
		{
			if (!visited[pointer->edgelines])
			{
				visited[pointer->edgelines] = true;
				visit(g, pointer->edgelines);
				inqueue(&q, pointer->edgelines, g);
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
	printf("1.有向图            0.无向图\n");
	printf("请选择-->");
	int flag;
	scanf("%d", &flag);
	creatgraph(g, flag);
	displaygraph(g);
	BFS(g);
	return 0;
}