#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>


//hash
typedef int datatype;
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

typedef struct hashtable
{
	hashhead* hashrow;
	int n;
}hashtable;

datatype* creatsearchlist(int n)
{
	datatype* searchlist = (datatype*)malloc(sizeof(datatype) * n);
	if (searchlist == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素", i + 1);
		scanf("%d", &searchlist[i]);
	}
	return searchlist;
}

void creathash(hashtable* hash, int n)
{
	hash->n = n;
	hash->hashrow = (hashhead*)malloc(sizeof(hashhead) * n);
	if (hash->hashrow == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		hash->hashrow[i].hashfirst = i;
		hash->hashrow[i].firstnode = NULL;
	}
}

bool isprime(int i)
{
	int k = (int)sqrt(i);
	int j = 2;
	for (j = 2; j <= k; j++)
	{
		if (i % j == 0)
		{
			return false;
		}
	}
	return true;
}

int findhashkey(int n)
{
	int i = 2;
	int hashkey = 0;
	for (i = 2; i <= n; i++)
	{
		if (isprime(i))
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

void insethashtable(hashtable* hash, int hashkey, datatype* searchlist)
{
	int place = 0;
	int i = 0;
	hashnode* pointer;
	for (i = 0; i < hash->n; i++)
	{
		place = findplace(searchlist[i], hashkey);
		pointer = hash->hashrow[place].firstnode;
		hashnode* newnode = (hashnode*)malloc(sizeof(hashnode));
		if (newnode == NULL)
		{
			printf("NULL\n");
			return;
		}
		newnode->data = searchlist[i];
		newnode->next = pointer;
		hash->hashrow[place].firstnode = newnode;
	}
}

void displayhashtable(hashtable* hash)
{
	int i = 0;
	hashnode* pointer;
	for (i = 0; i < hash->n; i++)
	{
		printf("[%d]-->", hash->hashrow[i].hashfirst);
		pointer = hash->hashrow[i].firstnode;
		while (pointer != NULL)
		{
			printf("[%d]->", pointer->data);
			pointer = pointer->next;
		}
		printf("NULL\n");
	}

}

hashnode* hashsearch(hashtable* hash, int key, int  hashkey, int* count)
{
	int place = findplace(key, hashkey);
	hashnode* pointer = hash->hashrow[place].firstnode;
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
	printf("请输入有多少个元素\n");
	int n;
	scanf("%d", &n);
	datatype* searchlist = creatsearchlist(n);
	hashtable hash;
	creathash(&hash, n);
	int hashkey = findhashkey(n);
	insethashtable(&hash, hashkey, searchlist);
	displayhashtable(&hash);
	printf("请输入你想要查找的元素\n");
	int key;
	scanf("%d", &key);
	int count = 0;
	hashnode* result = hashsearch(&hash, key, hashkey, &count);
	if (result == NULL)
	{
		printf("一共找了%d次", count);
		printf("无法找到\n");
	}
	else
	{
		printf("一共找了%d次", count);
		printf("成功找到%d", result->data);
	}
	return 0;
}










