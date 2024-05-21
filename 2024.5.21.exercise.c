#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

typedef int datatype;

//查找二叉树
//typedef struct tree
//{
//	datatype data;
//	struct tree* left;
//	struct tree* right;
//}tree;
//
//datatype* creatarray(int length)
//{
//	datatype* keyarray = (datatype*)malloc(sizeof(datatype) * length);
//	if (keyarray == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		printf("请输入第%d个元素\n", i + 1);
//		scanf("%d", &keyarray[i]);
//	}
//	return keyarray;
//}
//
//tree* inserttree(tree* root, datatype key)
//{
//	tree* father = root;
//	tree* pointer = root;
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
//tree* creatsearchtree(datatype* keyarray, int length)
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
//			if (root->right == NULL)
//			{
//				printf("NULL");
//			}
//			printf(")");
//		}
//	}
//}
//
//tree* searchelement(tree* root, datatype key, int* count)
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
//int main()
//{
//	printf("要从多少个元素中查找?\n");
//	int length;
//	scanf("%d", &length);
//	datatype* keyarray = creatarray(length);
//	tree* root = creatsearchtree(keyarray, length);
//	displaytree(root);
//	printf("\n请输入想要查找的元素\n");
//	datatype key;
//	scanf("%d", &key);
//	int count = 0;
//	tree* result = searchelement(root, key, &count);
//	if (result == NULL)
//	{
//		printf("一共找了%d次，无法找到\n", count);
//	}
//	else
//	{
//		printf("一共找了%d次，成功找到\n", count);
//		printf("%d", result->data);
//	}
//	return 0;
//}

/*datatype* creatarray(int length)
{
	datatype* keyarray = (datatype*)malloc(sizeof(datatype) * length);
	if (keyarray == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	int i = 0;
	for (i = 0; i < length; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		scanf("%d", &keyarray[i]);
	}
	return keyarray;
}*/

//typedef struct hashnode
//{
//	datatype data;
//	struct hashnode* next;
//}hashnode;
//
//typedef struct hashhead
//{
//	datatype hashfirst;
//	struct hashnode* first;
//}hashhead;
//
//typedef struct hashlist
//{
//	hashhead* hashver;
//	int n;
//}hashlist;
//
//datatype* creatkeyarray(int n)
//{
//	datatype* keyarray = (datatype*)malloc(sizeof(datatype) * n);
//	if (keyarray == NULL)
//	{
//		printf("NULL\n");
//		return NULL;
//	}
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d个元素\n", i + 1);
//		scanf("%d", &keyarray[i]);
//	}
//	return keyarray;
//}
//
//void creathash(hashlist* hash, int n)
//{
//	hash->n = n;
//	hash->hashver = (hashhead*)malloc(sizeof(hashhead) * hash->n);
//	if (hash->hashver == NULL)
//	{
//		printf("NULL\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < hash->n; i++)
//	{
//		hash->hashver[i].hashfirst = i;
//		hash->hashver[i].first = NULL;
//	}
//}
//
//bool isprime(int number)
//{
//	int k = (int)sqrt(number);
//	int i = 0;
//	for (i = 2; i <= k; i++)
//	{
//		if (number % i == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//int findnumber(int number)
//{
//	int i = 0;
//	int maxprime = 0;
//	for (i = 2; i <= number; i++)
//	{
//		if (isprime(i))
//		{
//			maxprime = i;
//		}
//	}
//	return maxprime;
//}
//
//int hashfunc(int key, int maxprime)
//{
//	return key % maxprime;
//}
//
//void inserthashlist(hashlist* hash, datatype* keyarray, int prime)
//{
//	int i = 0;
//	int place;
//	for (i = 0; i < hash->n; i++)
//	{
//		place = hashfunc(keyarray[i], prime);
//		hashnode* newnode = (hashnode*)malloc(sizeof(hashnode));
//		if (newnode == NULL)
//		{
//			printf("NULL\n");
//			return;
//		}
//		newnode->data = keyarray[i];
//		newnode->next = hash->hashver[place].first;
//		hash->hashver[place].first = newnode;
//	}
//}
//
//void displayhash(hashlist* hash)
//{
//	hashnode* pointer;
//	int i = 0;
//	for (i = 0; i < hash->n; i++)
//	{
//		printf("[%d]->   ", hash->hashver[i].hashfirst);
//		pointer = hash->hashver[i].first;
//		while (pointer != NULL)
//		{
//			printf("[%d]->", pointer->data);
//			pointer = pointer->next;
//		}
//		printf("NULL\n");
//	}
//}
//
//int hashsearch(hashlist* hash, datatype key, int prime, int* count)
//{
//	hashnode* pointer;
//	int place = hashfunc(key, prime);
//	pointer = hash->hashver[place].first;
//	while (pointer != NULL)
//	{
//		(*count)++;
//		if (pointer->data == key)
//		{
//			return pointer->data;
//		}
//		pointer = pointer->next;
//	}
//	return -32765;
//}
//
//int main()
//{
//	printf("要从多少元素中查找?\n");
//	int n;
//	scanf("%d", &n);
//	datatype* keyarray = creatkeyarray(n);
//	hashlist hash;
//	creathash(&hash, n);
//	int prime = findnumber(n);
//	inserthashlist(&hash, keyarray, prime);
//	displayhash(&hash);
//	printf("请输入要查找的元素\n");
//	int element;
//	scanf("%d", &element);
//	int count = 0;
//	int result = hashsearch(&hash, element, prime, &count);
//	if (result == -32765)
//	{
//		printf("一共查找了%d次\n", count);
//		printf("无法找到\n");
//	}
//	else
//	{
//		printf("一共查找了%d次\n", count);
//		printf("成功找到，是%d", result);
//	}
//	return 0;
//}

typedef struct hashnode
{
	datatype data;
	struct hashnode* next;
}hashnode;

typedef struct hashhead
{
	datatype hashfirst;
	hashnode* firstnode;
}hashhead;

typedef struct hashlist
{
	hashhead* hasharray;
	int n;
}hashlist;

datatype* creatsearchlist(int n)
{
	datatype* searchlist;
	searchlist = (datatype*)malloc(sizeof(datatype) * n);
	if (searchlist == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		scanf("%d", &searchlist[i]);
	}
	return searchlist;
}

void creathashlist(hashlist* hash, int n)
{
	hash->hasharray = (hashhead*)malloc(sizeof(hashhead) * n);
	if (hash->hasharray == NULL)
	{
		printf("NULL\n");
		return;
	}
	hash->n = n;
	int i = 0;
	for (i = 0; i < hash->n; i++)
	{
		hash->hasharray[i].hashfirst = i;
		hash->hasharray[i].firstnode = NULL;
	}
}

bool isprime(int number)
{
	int k = (int)sqrt(number);
	int i = 2;
	for (i = 2; i <= k; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

int findprime(int n)
{
	int i = 0;
	int maxprime = 0;
	for (i = 2; i <= n; i++)
	{
		if (isprime(i))
		{
			maxprime = i;
		}
	}
	return maxprime;
}

int findplace(int key, int maxprime)
{
	return key % maxprime;
}

void inserthashlist(hashlist* hash, int maxprime, datatype* searchlist)
{
	int place = 0;
	int i = 0;
	for (i = 0; i < hash->n; i++)
	{
		place = findplace(searchlist[i], maxprime);
		hashnode* newnode = (hashnode*)malloc(sizeof(hashnode));
		if (newnode == NULL)
		{
			printf("NULL\n");
			return;
		}
		newnode->data = searchlist[i];
		newnode->next = hash->hasharray[place].firstnode;
		hash->hasharray[place].firstnode = newnode;
	}
}

void displayhashlist(hashlist* hash)
{
	int i = 0;
	hashnode* pointer;
	for (i = 0; i < hash->n; i++)
	{
		printf("[%d]-->", hash->hasharray[i].hashfirst);
		pointer = hash->hasharray[i].firstnode;
		while (pointer != NULL)
		{
			printf("[%d]->", pointer->data);
			pointer = pointer->next;
		}
		printf("NULL\n");
	}
}

int hashsearch(hashlist* hash, int key, int* count, int maxprime)
{
	int place = findplace(key, maxprime);
	hashnode* pointer;
	pointer = hash->hasharray[place].firstnode;
	while (pointer != NULL)
	{
		(*count)++;
		if (pointer->data == key)
		{
			return pointer->data;
		}
		pointer = pointer->next;
	}
	return -32765;
}

int main()
{
	printf("要从几个元素中查找?\n");
	int n;
	scanf("%d", &n);
	datatype* searchlist = creatsearchlist(n);
	hashlist hash;
	creathashlist(&hash, n);
	int maxprime = findprime(n);
	inserthashlist(&hash, maxprime, searchlist);
	displayhashlist(&hash);
	printf("请输入要查找的值\n");
	datatype key;
	scanf("%d", &key);
	int count = 0;
	int result = hashsearch(&hash, key, &count, maxprime);
	if (result == -32765)
	{
		printf("查找了%d次", count);
		printf("无法找到，请重新输入\n");
	}
	else
	{
		printf("查找了%d次", count);
		printf("成功找到，是%d", result);
	}
	return 0;
}