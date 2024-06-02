#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

//二叉查找树

/*typedef int datatype;
typedef struct tree
{
	datatype data;
	struct tree* left;
	struct tree* right;
}tree;

datatype* creatsearchlist(int n)
{
	datatype* searchlist;
	searchlist = (datatype*)malloc(sizeof(datatype) * n);
	if (searchlist == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	int i;
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		scanf("%d", &searchlist[i]);
	}
	return searchlist;
}

tree* insertnode(tree* root, int key)
{
	tree* father;
	tree* pointer;
	father = root;
	pointer = root;
	while (pointer != NULL)
	{
		father = pointer;
		if (key > pointer->data)
		{
			pointer = pointer->right;
		}
		else
		{
			pointer = pointer->left;
		}
	}
	tree* newnode = (tree*)malloc(sizeof(tree));
	newnode->data = key;
	newnode->left = NULL;
	newnode->right = NULL;
	if (root == NULL)
	{
		root = newnode;
	}
	else if (father->data > key)
	{
		father->left = newnode;
	}
	else
	{
		father->right = newnode;
	}
	return root;
}

tree* creattree(datatype* searchlist, int n)
{
	tree* root = NULL;
	int i;
	for (i = 0; i < n; i++)
	{
		root = insertnode(root, searchlist[i]);
	}
	return root;
}

datatype treesearch(tree* root, int key, int* count)
{
	tree* pointer = root;
	while (pointer != NULL)
	{
		(*count)++;
		if (pointer->data == key)
		{
			return pointer->data;
		}
		else if (pointer->data > key)
		{
			pointer = pointer->left;
		}
		else
		{
			pointer = pointer->right;
		}
	}
	return -32765;
}

void displaytree(tree* root)
{
	if (root != NULL)
	{
		printf("%d", root->data);
		if (root->left != NULL || root->right != NULL)
		{
			printf("(");
			displaytree(root->left);
			if (root->left == NULL)
			{
				printf("NULL");
			}
			if (root->right != NULL)
			{
				printf(",");
			}
			displaytree(root->right);
			printf(")");
		}
	}
}

int main()
{
	printf("要从多少元素中查找\n");
	int n;
	scanf("%d", &n);
	datatype* searchlist = creatsearchlist(n);
	tree* root;
	root = creattree(searchlist, n);
	displaytree(root);
	printf("请输入你要查找的元素\n");
	datatype key;
	scanf("%d", &key);
	int count = 0;
	datatype result = treesearch(root, key, &count);
	printf("\n");
	if (result == -32765)
	{
		printf("一共查找了%d次\n", count);
		printf("无法找到\n");
	}
	else
	{
		printf("一共查找了%d次\n", count);
		printf("成功找到\n");
	}
	return 0;
}*/

//哈希表
//链地址法
typedef int datatype;
typedef struct hashnode
{
	datatype data;
	struct hashnode* next;
}hashnode;

typedef struct hashfhead
{
	datatype hashfirst;
	hashnode* firstnode;
}hashhead;

typedef struct hashtable
{
	hashhead* hashlist;
	int n;
}hashtable;

datatype* creatsearchlist(int n)
{
	datatype* searchlist = (datatype*)malloc(sizeof(datatype) * n);
	if (searchlist == NULL)
	{
		printf("NULL");
		return NULL;
	}
	int i;
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		scanf("%d", &searchlist[i]);
	}
	return searchlist;
}

void inithashtable(hashtable* hash, int n)
{
	hash->n = n;
	hash->hashlist = (hashhead*)malloc(sizeof(hashhead) * hash->n);
	if (hash->hashlist == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i;
	for (i = 0; i < hash->n; i++)
	{
		hash->hashlist[i].hashfirst = i;
		hash->hashlist[i].firstnode = (hashnode*)malloc(sizeof(hashnode));
		if (hash->hashlist->firstnode == NULL)
		{
			printf("NULL\n");
			return;
		}
		hash->hashlist[i].firstnode->next = NULL;
	}
}

bool istrue(int number)
{
	int i = 0;
	int k = (int)sqrt(number);
	for (i = 2; i <= k; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

datatype findhashkey(int n)
{
	int i;
	datatype hashkey = 0;
	for (i = 2; i <= n; i++)
	{
		if (istrue(i))
		{
			hashkey = i;
		}

	}
	return hashkey;
}

int findplace(int key, int hashkey)
{
	return key % hashkey;
}

void inserthash(hashtable* hash, datatype* searchlist, int hashkey)
{
	int i = 0;
	int place = 0;
	hashnode* pointer;
	for (i = 0; i < hash->n; i++)
	{
		place = findplace(searchlist[i], hashkey);
		pointer = hash->hashlist[place].firstnode;
		hashnode* newnode = (hashnode*)malloc(sizeof(hashnode));
		if (newnode == NULL)
		{
			printf("NULL\n");
			return;
		}
		newnode->data = searchlist[i];
		newnode->next = NULL;
		pointer = hash->hashlist[place].firstnode;
		while (pointer->next != NULL)
		{
			pointer = pointer->next;
		}
		pointer->next = newnode;
	}
}

void displayhash(hashtable* hash)
{
	int i = 0;
	hashnode* pointer;
	for (i = 0; i < hash->n; i++)
	{
		printf("[%d]-->", hash->hashlist[i].hashfirst);
		pointer = hash->hashlist[i].firstnode->next;
		while (pointer != NULL)
		{
			printf("[%d]->", pointer->data);
			pointer = pointer->next;
		}
		printf("NULL\n");
	}
}

hashnode* hashsearch(hashtable* hash, int key, int hashkey, int* count)
{
	int place = findplace(key, hashkey);
	hashnode* pointer = hash->hashlist[place].firstnode;
	while (pointer != NULL)
	{
		(*count)++;
		if (pointer->data == key)
		{
			return pointer;
		}
		pointer = pointer->next;
	}

	return NULL;
}

int main()
{
	printf("有多少个元素要参与查找?\n");
	int n;
	scanf("%d", &n);
	datatype* searchlist = creatsearchlist(n);
	hashtable hash;
	inithashtable(&hash, n);
	datatype hashkey = findhashkey(n);
	inserthash(&hash, searchlist, hashkey);
	displayhash(&hash);
	printf("请输入你要查找的元素\n");
	datatype key;
	scanf("%d", &key);
	int count = 0;
	hashnode* result = hashsearch(&hash, key, hashkey, &count);
	if (result == NULL)
	{
		printf("一共查找了%d次\n", count - 1);
		printf("无法找到\n");
	}
	else
	{
		printf("一共查找了%d次\n", count - 1);
		printf("成功找到%d\n", result->data);
	}
	return 0;
}