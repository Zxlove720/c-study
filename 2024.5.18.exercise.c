#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

//hash
typedef int datatype;

//typedef struct hashnode
//{
//	datatype data;
//	struct hashnode* next;
//}hashnode;
//
//typedef struct hashhead
//{
//	datatype hashfirst;
//	hashnode* firstnode;
//}hashhead;
//
//typedef struct hashlist
//{
//	hashhead* row;
//	int n;
//}hashlist;
//
//datatype* creatsearchlist(int n)
//{
//	datatype* searchlist = (datatype*)malloc(sizeof(datatype) * n);
//	if (searchlist == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d个元素\n", i + 1);
//		scanf("%d", &searchlist[i]);
//	}
//	return searchlist;
//}
//
//void inithashlist(hashlist* hash, int n)
//{
//	hash->n = n;
//	hash->row = (hashhead*)malloc(sizeof(hashhead) * hash->n);
//	if (hash->row == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < hash->n; i++)
//	{
//		hash->row[i].hashfirst = i;
//		hash->row[i].firstnode = (hashnode*)malloc(sizeof(hashnode));
//		if (hash->row[i].firstnode == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//		hash->row[i].firstnode->next = NULL;
//	}
//}
//
//bool istrue(int hashkey)
//{
//	int k = (int)sqrt(hashkey);
//	int i = 2;
//	for (i = 2; i <= k; i++)
//	{
//		if (hashkey % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int findhashkey(int n)
//{
//	int i;
//	int hashkey = 0;
//	for (i = 2; i <= n; i++)
//	{
//		if (istrue(i))
//		{
//			hashkey = i;
//		}
//	}
//	return hashkey;
//}
//
//int findplace(int number, int hashkey)
//{
//	return number % hashkey;
//}
//
//void inserthash(hashlist* hash, datatype* searchlist, int  hashkey)
//{
//	int place;
//	int i = 0;
//	hashnode* pointer;
//	for (i = 0; i < hash->n; i++)
//	{
//		place = findplace(searchlist[i], hashkey);
//		pointer = hash->row[place].firstnode;
//		hashnode* newnode = (hashnode*)malloc(sizeof(hashnode));
//		if (newnode == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//		newnode->data = searchlist[i];
//		newnode->next = NULL;
//		while (pointer->next != NULL)
//		{
//			pointer = pointer->next;
//		}
//		pointer->next = newnode;
//		pointer = newnode;
//	}
//	printf("\n\n成功插入哈希表\n");
//	system("pause");
//	system("cls");
//}
//
//void displayhashlist(hashlist* hash)
//{
//	hashnode* pointer;
//	int i;
//	for (i = 0; i < hash->n; i++)
//	{
//		printf("[%d]-->", hash->row[i].hashfirst);
//		pointer = hash->row[i].firstnode->next;
//		while (pointer != NULL)
//		{
//			printf("[%d]->", pointer->data);
//			pointer = pointer->next;
//		}
//		printf("NULL\n");
//	}
//}
//
//hashnode* hashsearch(hashlist* hash, int key, int hashkey, int* count)
//{
//	int place = findplace(key, hashkey);
//	hashnode* pointer;
//	pointer = hash->row[place].firstnode;
//	while (pointer != NULL)
//	{
//		(*count)++;
//		if (pointer->data == key)
//		{
//			return pointer;
//		}
//		pointer = pointer->next;
//	}
//	return NULL;
//
//}
//
//int main()
//{
//	printf("要从几个元素中查找?\n");
//	int n;
//	scanf("%d", &n);
//	datatype* searchlist = creatsearchlist(n);
//	hashlist hash;
//	inithashlist(&hash, n);
//	int hashkey = findhashkey(n);
//	inserthash(&hash, searchlist, hashkey);
//	displayhashlist(&hash);
//	printf("请输入要查找的元素\n");
//	datatype key;
//	scanf("%d", &key);
//	int count = 0;
//	hashnode* result = hashsearch(&hash, key, hashkey, &count);
//	if (result != NULL)
//	{
//		printf("一共查找了%d次\n", count - 1);
//		printf("元素是%d", result->data);
//	}
//	else
//	{
//		printf("一共查找了%d次\n", count - 1);
//		printf("无法找到\n");
//	}
//	return 0;
//}


typedef struct edgenode
{
	datatype edge;
	struct edgenode* next;
}edgenode;

typedef struct vertexhead
{
	char head;
	edgenode* firstnode;
}vertexhead;

typedef struct adjlist
{
	vertexhead* vertex;
	int n;
	int edgenumber;
}adjlist;

typedef struct list
{
	datatype data;
	struct list* next;
}list;

typedef struct queue
{
	list* front;
	list* rear;
}queue;

void creatadjlist(adjlist* g)
{
	printf("图中有多少个顶点?\n");
	scanf("%d", &g->n);
	printf("图中有多少条边?\n");
	scanf("%d", &g->edgenumber);
	g->vertex = (vertexhead*)malloc(sizeof(vertexhead) * g->n);
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
		scanf("%c", &g->vertex[i].head);
		g->vertex[i].firstnode = (edgenode*)malloc(sizeof(edgenode));
		if (g->vertex[i].firstnode == NULL)
		{
			printf("NULL\n");
			return;
		}
		g->vertex[i].firstnode->next = NULL;
	}
	int line1;
	int line2;
	edgenode* pointer;
	edgenode* place;
	for (i = 0; i < g->edgenumber; i++)
	{
		printf("请输入第%d条边\n", i + 1);
		scanf("%d,%d", &line1, &line2);
		pointer = g->vertex[line2].firstnode;
		edgenode* newnode = (edgenode*)malloc(sizeof(edgenode));
		if (newnode == NULL)
		{
			printf("NULL\n");
			return;
		}
		newnode->edge = line2 - 1;
		newnode->next = NULL;
		while (pointer->next != NULL)
		{
			pointer = pointer->next;
		}
		pointer->next = newnode;
		/*if (1)
		{

			edgenode* newnode = (edgenode*)malloc(sizeof(edgenode));
			if (newnode == NULL)
			{
				printf("NULL\n");
				return;
			}
			newnode->edge = line2;
			newnode->next = NULL;
			while (pointer != NULL)
			{
				pointer = pointer->next;
			}
			pointer->next = newnode;
			pointer = newnode;
		}*/
	}
}

void display(adjlist* g)
{
	int i = 0;
	edgenode* pointer;
	for (i = 0; i < g->n; i++)
	{
		printf("[%d]-->", i + 1);
		pointer = g->vertex[i].firstnode;
		while (pointer != NULL)
		{
			printf("[%d->]", pointer->edge);
			pointer = pointer->next;
		}
		printf("NULL\n");
	}



}

int main()
{
	adjlist g;
	creatadjlist(&g);
	display(&g);
	return 0;
}