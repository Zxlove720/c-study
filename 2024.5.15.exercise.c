#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//˳�����
//typedef int datatype;
////typedef struct list
////{
////	datatype* data;
////	int length;
////}list;
////
////void initlist(list* l)
////{
////	printf("�ж���Ԫ��?\n");
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
////		printf("�������%d��Ԫ��\n", i + 1);
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
////	printf("������Ҫ���ҵ�Ԫ��\n");
////	datatype element;
////	scanf("%d", &element);
////	/*datatype flag = search(&l,element);*/
////	datatype flag = doubleserch(&l, element);
////	if (flag == -1)
////	{
////		printf("����%d��\n", count);
////		printf("�޷��ҵ�������������\n");
////	}
////	else
////	{
////		printf("����%d��\n", count);
////		printf("�ҵ���!!!\n%d�ǵ�%d�������±���%d\n", element, flag + 1, flag);
////	}
////	return 0;
////}
//
////����������
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
//	printf("�ж���Ԫ��Ҫ������?\n");
//	scanf("%d", &n);
//	datatype* key = (datatype*)malloc(sizeof(datatype) * n);
//	if (key == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	printf("������Ԫ��\n");
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
//	tree* pointer;//pointerֻ��һ�����������������ҵ�������ָ��
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
//	printf("������Ҫ���ҵ�Ԫ��\n");
//	int number;
//	scanf("%d", &number);
//	int count = 0;
//	tree* getkey = searchtree(root, number, &count);
//	if (getkey == NULL)
//	{
//		printf("������%d��     ", count);
//		printf("����ʧ��\n");
//		return -1;
//	}
//	printf("������%d��     ", count);
//	printf("���ҳɹ�\n");
//	return 0;
//}

//���������
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
//	printf("Ҫ�ڼ���Ԫ���в���?\n");
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
//		printf("�������%d��Ԫ��\n", i + 1);
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
//	printf("������Ҫ���ҵ�ֵ\n");
//	int key;
//	scanf("%d", &key);
//	int count = 0;
//	tree* flag = searchtree(root, key, &count);
//	if (flag == NULL)
//	{
//		printf("һ��������%d��\n", count);
//		printf("����ʧ�ܣ�����������\n");
//	}
//	else
//	{
//		printf("һ��������%d��\n", count);
//		printf("���ҳɹ�\n");
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
	printf("�����붥�����\n");
	scanf("%d", &g->n);
	printf("������ߵ�����\n");
	scanf("%d", &g->edgenumber);
	printf("0.����ͼ      1.����ͼ\n");
	int flag;
	scanf("%d", &flag);
	if (flag == 0)
	{
		printf("������һ������ͼ\n");
	}
	if (flag == 1)
	{
		printf("������һ������ͼ\n");
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
		printf("�������%d������\n", i + 1);
		scanf("%c", &g->vartex[i].vartexvalue);
	}
	int line1;
	int line2;
	edgenode* pointer;
	for (i = 0; i < g->edgenumber; i++)
	{
		printf("�������%d���ߵĹ�ϵ(1,2)\n", i + 1);
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
	printf("������ӵڼ����㿪ʼ����\n");
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

