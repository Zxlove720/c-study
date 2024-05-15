#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//顺序查找
//typedef int datatype;
////typedef struct list
////{
////	datatype* data;
////	int length;
////}list;
////
////void initlist(list* l)
////{
////	printf("有多少元素?\n");
////	scanf("%d", &l->length);
////	l->data = (datatype*)malloc(sizeof(datatype) * l->length);
////	if (l->data == NULL)
////	{
////		printf("NULL\n");
////		return;
////	}
////	int i;
////	for (i = 0; i < l->length; i++)
////	{
////		l->data[i] = 0;
////	}
////}
////
////void creatlist(list* l)
////{
////	int i;
////	for (i = 0; i < l->length; i++)
////	{
////		printf("请输入第%d个元素\n", i + 1);
////		scanf("%d", &l->data[i]);
////	}
////}
////
//////int search(list* l, datatype element)
//////{
//////	int i = 0;
//////	for (i = 0; i < l->length; i++)
//////	{
//////		if (l->data[i] == element)
//////		{
//////			return i;
//////		}
//////	}
//////	return -1;
//////}
////
////int count = 0;
////datatype doubleserch(list* l, datatype element)
////{
////	int low = 0;
////	int high = l->length - 1;
////	int mid;
////	while (low <= high)
////	{
////		count++;
////		mid = (low + high) / 2;
////		printf("\nLOW:[%d,%d]\n", low, l->data[low]);
////		printf("HIGH:[%d,%d]\n", high, l->data[high]);
////		printf("MID:[%d,%d]\n\n\n", mid, l->data[mid]);
////		if (l->data[mid] < element)
////		{
////			low = mid + 1;
////		}
////		else if (l->data[mid] > element)
////		{
////			high = mid - 1;
////		}
////		else
////		{
////			return mid;
////		}
////	}
////	return -1;
////}
////
////int main()
////{
////	list l;
////	initlist(&l);
////	creatlist(&l);
////	printf("请输入要查找的元素\n");
////	datatype element;
////	scanf("%d", &element);
////	/*datatype flag = search(&l,element);*/
////	datatype flag = doubleserch(&l, element);
////	if (flag == -1)
////	{
////		printf("找了%d次\n", count);
////		printf("无法找到，请重新输入\n");
////	}
////	else
////	{
////		printf("找了%d次\n", count);
////		printf("找到了!!!\n%d是第%d个数，下标是%d\n", element, flag + 1, flag);
////	}
////	return 0;
////}
//
////二叉排序树
//typedef struct tree
//{
//	datatype data;
//	struct tree* left;
//	struct tree* right;
//}tree;
//
//int n;
//
//datatype* makearray()
//{
//	printf("有多少元素要插入树?\n");
//	scanf("%d", &n);
//	datatype* key = (datatype*)malloc(sizeof(datatype) * n);
//	if (key == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	printf("请输入元素\n");
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &key[i]);
//	}
//	return key;
//}
//
////tree* inserttree(tree* root, int key)
////{
////	tree* father;
////	tree* pointer;
////	father = root;
////	pointer = root;
////	while (pointer != NULL)
////	{
////		father = pointer;
////		if (key > pointer->data)
////		{
////			pointer = pointer->right;
////		}
////		else
////		{
////			pointer = pointer->left;
////		}
////	}
////	pointer = (tree*)malloc(sizeof(tree*));
////	if (pointer == NULL)
////	{
////		printf("NULL\n");
////		return NULL;
////	}
////	pointer->data = key;
////	pointer->left = NULL;
////	pointer->right = NULL;
////	if (root == NULL)
////	{
////		root = pointer;
////	}
////	else if (father->data > key)
////	{
////		father->left = pointer;
////	}
////	else
////	{
////		father->right = pointer;
////	}
////	return root;
////}
////
////tree* creattree(datatype* key)
////{
////	tree* root = NULL;
////	int i;
////	for (i = 0; i < n; i++)
////	{
////		root = inserttree(root, key[i]);
////	}
////	return root;
////}
//
//tree* inserttree(tree* root, int key)
//{
//	tree* father;
//	tree* pointer;//pointer只是一个用来遍历树并且找到插入点的指针
//	father = root;
//	pointer = root;
//	while (pointer != NULL)
//	{
//		father = pointer;
//		if (key > pointer->data)
//		{
//			pointer = pointer->right;
//		}
//		else
//		{
//			pointer = pointer->left;
//		}
//	}
//	tree* newnode = (tree*)malloc(sizeof(tree));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	newnode->data = key;
//	newnode->left = NULL;
//	newnode->right = NULL;
//	if (root == NULL)
//	{
//		root = newnode;
//	}
//	else if (key > father->data)
//	{
//		father->right = newnode;
//	}
//	else
//	{
//		father->left = newnode;
//	}
//	return root;
//}
//
//tree* creattree(datatype* key)
//{
//	tree* root = NULL;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		root = inserttree(root, key[i]);
//	}
//	return root;
//}
//
///*void print_tree(tree* root)
//{
//	if (root != NULL)
//	{
//		printf("%d", root->data);
//		if (root->left != NULL || root->right != NULL)
//		{
//			printf("(");
//			print_tree(root->left);
//			if (root->left == NULL)
//			{
//				printf("NULL");
//			}
//			if (root->right != NULL)
//			{
//				printf(",");
//			}
//			print_tree(root->right);
//			printf(")");
//		}
//	}
//}*/
//
//void displaysearchtree(tree* root)
//{
//	if (root != NULL)
//	{
//		printf("%d", root->data);
//		if (root->left != NULL || root->right != NULL)
//		{
//			printf("(");
//			displaysearchtree(root->left);
//			if (root->left == NULL)
//			{
//				printf("^");
//			}
//			if (root->right != NULL)
//			{
//				printf(",");
//
//			}
//			displaysearchtree(root->right);
//			printf(")");
//		}
//	}
//}
//
//tree* searchtree(tree* root, datatype key, int* count)
//{
//	tree* pointer = root;
//	
//	while (pointer != NULL)
//	{
//		(*count)++;
//		if (key == pointer->data)
//		{
//			return pointer;
//		}
//		else if (key < pointer->data)
//		{
//			pointer = pointer->left;
//		}
//		else
//		{
//			pointer = pointer->right;
//		}
//	}
//	return NULL;
//
//}
//
//int main()
//{
//	datatype* key = makearray();
//	tree* root = creattree(key);
//	displaysearchtree(root);
//	printf("请输入要查找的元素\n");
//	int number;
//	scanf("%d", &number);
//	int count = 0;
//	tree* getkey = searchtree(root, number, &count);
//	if (getkey == NULL)
//	{
//		printf("查找了%d次     ", count);
//		printf("查找失败\n");
//		return -1;
//	}
//	printf("查找了%d次     ", count);
//	printf("查找成功\n");
//	return 0;
//}

//二叉查找树
//typedef int datatype;
//typedef struct tree
//{
//	datatype data;
//	struct tree* left;
//	struct tree* right;
//}tree;
//
//datatype* searcharray(int* length)
//{
//	datatype* searcharray;
//	printf("要在几个元素中查找?\n");
//	int n;
//	scanf("%d", &n);
//	*length = n;
//	searcharray = (datatype*)malloc(sizeof(datatype) * n);
//	if (searcharray == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d个元素\n", i + 1);
//		scanf("%d", &searcharray[i]);
//	}
//	return searcharray;
//}
//
//tree* inserttree(tree* root, datatype key)
//{
//	tree* father;
//	tree* pointer;
//	father = root;
//	pointer = root;
//	while (pointer != NULL)
//	{
//		father = pointer;
//		if (key > pointer->data)
//		{
//			pointer = pointer->right;
//		}
//		else
//		{
//			pointer = pointer->left;
//		}
//	}
//	tree* newnode = (tree*)malloc(sizeof(tree));
//	if (newnode == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	newnode->data = key;
//	newnode->left = NULL;
//	newnode->right = NULL;
//	if (root == NULL)
//	{
//		root = newnode;
//	}
//	else if (father->data > key)
//	{
//		father->left = newnode;
//	}
//	else
//	{
//		father->right = newnode;
//	}
//	return root;
//}
//
//tree* creattree(datatype* keyarray, int length)
//{
//	tree* root = NULL;
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		root = inserttree(root, keyarray[i]);
//	}
//	return root;
//}
//
//
//void displaytree(tree* root)
//{
//	if (root != NULL)
//	{
//		printf("%d", root->data);
//		if (root->left != NULL || root->right != NULL)
//		{
//			printf("(");
//			displaytree(root->left);
//			if (root->left == NULL)
//			{
//				printf("NULL");
//			}
//			if (root->right != NULL)
//			{
//				printf(",");
//			}
//			displaytree(root->right);
//			printf(")");
//		}
//	}
//}
//
//tree* searchtree(tree* root, datatype key, int* count)
//{
//	tree* pointer = root;
//	while (pointer != NULL)
//	{
//		(*count)++;
//		if (pointer->data == key)
//		{
//			return pointer;
//		}
//		else if (pointer->data > key)
//		{
//			pointer = pointer->left;
//		}
//		else
//		{
//			pointer = pointer->right;
//		}
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	int length;
//	datatype* keyarray = searcharray(&length);
//	tree* root = creattree(keyarray, length);
//	displaytree(root);
//	printf("请输入要查找的值\n");
//	int key;
//	scanf("%d", &key);
//	int count = 0;
//	tree* flag = searchtree(root, key, &count);
//	if (flag == NULL)
//	{
//		printf("一共查找了%d次\n", count);
//		printf("查找失败，请重新输入\n");
//	}
//	else
//	{
//		printf("一共查找了%d次\n", count);
//		printf("查找成功\n");
//	}
//	return 0;
//}


typedef struct edgenode
{
	int data;
	struct edgenode* next;
}edgenode;

typedef struct vartexhead
{
	char vartexvalue;
	edgenode* firstnode;
}vartexhead;

typedef struct adjlist
{
	vartexhead* vartex;
	int n;
	int edgenumber;
}adjlist;

typedef struct list
{
	int data;
	struct list* next;
}list;

typedef struct queue
{
	list* front;
	list* rear;
}queue;

void creatadjlist(adjlist* g)
{
	printf("请输入顶点个数\n");
	scanf("%d", &g->n);
	printf("请输入边的条数\n");
	scanf("%d", &g->edgenumber);
	printf("0.无向图      1.有向图\n");
	int flag;
	scanf("%d", &flag);
	if (flag == 0)
	{
		printf("将生成一个无向图\n");
	}
	if (flag == 1)
	{
		printf("将生成一个有向图\n");
	}
	g->vartex = (vartexhead*)malloc(sizeof(vartexhead) * g->n);
	if (g->vartex == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < g->n; i++)
	{
		g->vartex[i].firstnode = NULL;

	}
	for (i = 0; i < g->n; i++)
	{
		getchar();
		printf("请输入第%d个顶点\n", i + 1);
		scanf("%c", &g->vartex[i].vartexvalue);
	}
	int line1;
	int line2;
	edgenode* pointer;
	for (i = 0; i < g->edgenumber; i++)
	{
		printf("请输入第%d条边的关系(1,2)\n", i + 1);
		scanf("%d,%d", &line1, &line2);
		pointer = (edgenode*)malloc(sizeof(edgenode));
		if (pointer == NULL)
		{
			printf("NULL\n");
			return;
		}
		pointer->data = line2 - 1;
		pointer->next = g->vartex[line1 - 1].firstnode;
		g->vartex[line1 - 1].firstnode = pointer;
		if (flag == 0)
		{
			pointer = (edgenode*)malloc(sizeof(edgenode));
			if (pointer == NULL)
			{
				printf("NULL\n");
				return;
			}
			pointer->data = line1 - 1;
			pointer->next = NULL;
			pointer->next = g->vartex[line2 - 1].firstnode;
			g->vartex[line2 - 1].firstnode = pointer;
		}
	}
}

void displaygraph(adjlist* g)
{
	int i = 0;
	edgenode* pointer;
	for (i = 0; i < g->n; i++)
	{
		printf("[%d,%c]", i + 1, g->vartex[i].vartexvalue);
		pointer = g->vartex[i].firstnode;
		while (pointer != NULL)
		{
			printf("->[%d,%c]", pointer->data + 1, g->vartex[pointer->data].vartexvalue);
			pointer = pointer->next;
		}
		printf("->NULL\n");
	}
}

void initqueue(queue* q)
{
	q->front = q->rear = (list*)malloc(sizeof(list));
	if (q->front == NULL)
	{
		printf("NULL\n");
		return;
	}
	q->front->next = NULL;
}

bool isempty(queue* q)
{
	if (q->front == q->rear || q->front->next == NULL)
	{
		return true;
	}
	return false;
}

void inqueue(queue* q, int number)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return;
	}
	newnode->data = number;
	newnode->next = NULL;
	q->rear->next = newnode;
	q->rear = newnode;
}

int outqueue(queue* q)
{
	int temp;
	list* pointer = q->front->next;
	temp = pointer->data;
	q->front->next = pointer->next;
	if (q->front->next == NULL)
	{
		q->rear = q->front;
	}
	free(pointer);
	pointer = NULL;
	return temp;
}

void BFS(adjlist* g)
{
	queue q;
	initqueue(&q);
	if (!isempty(&q))
	{
		printf("init failed\n");
		return;
	}
	int* visit;
	visit = (int*)malloc(sizeof(int) * g->n);
	if (visit == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < g->n; i++)
	{
		visit[i] = 0;
	}
	printf("请输入从第几个点开始搜索\n");
	int place;
	scanf("%d", &place);
	printf("(%d", place);
	printf(" %c",g->vartex[place - 1].vartexvalue);
	visit[place - 1] = 1;
	inqueue(&q, place - 1);
	int vi;
	edgenode* pointer;
	while (!isempty(&q))
	{
		vi = outqueue(&q);
		pointer = g->vartex[vi].firstnode;
		while (pointer != NULL)
		{
			if (visit[pointer->data] == 0)
			{
				visit[pointer->data] = 1;
				printf("(%d,", pointer->data);
				printf("%c),", g->vartex[pointer->data].vartexvalue);
				inqueue(&q, pointer->data);
			}
			pointer = pointer->next;
		}
	}
}

int main()
{
	adjlist g;
	creatadjlist(&g);
	displaygraph(&g);
	BFS(&g);
	return 0;
}

