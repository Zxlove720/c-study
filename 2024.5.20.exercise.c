#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

typedef int datattype;
typedef struct hashnode
{
	datattype data;
	struct hashnode* next;
}hashnode;

typedef struct hashhead
{
	int hashfirst;
	hashnode* firstnode;
}hashhead;

typedef struct hashtable
{
	hashhead* hashlist;
	int n;
}hashtable;

datattype* creatsearchlist(int n)
{
	datattype* searchlist = (datattype*)malloc(sizeof(datattype) * n);
	if (searchlist == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	int i;
	for (i = 0; i < n; i++)
	{
		printf("�������%d��Ԫ��\n", i + 1);
		scanf("%d", &searchlist[i]);
	}
	return searchlist;
}

bool isprime(int key)
{
	int i = 0;
	int k = (int)sqrt(key);
	for (i = 2; i <= k; i++)
	{
		if (key % i == 0)
		{
			return false;
		}
	}
	return true;
}

int findhashkey(int n)
{
	int i = 0;
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

void inithahtable(hashtable* hash, int n)
{
	hash->n = n;
	hash->hashlist = (hashhead*)malloc(sizeof(hashhead) * hash->n);
	if (hash->hashlist == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < hash->n; i++)
	{
		
		hash->hashlist[i].hashfirst = i;
		hash->hashlist[i].firstnode = (hashnode*)malloc(sizeof(hashnode));
		if (hash->hashlist[i].firstnode == NULL)
		{
			printf("NULL\n");
			return;
		}
		hash->hashlist[i].firstnode->next = NULL;
	}
}

int hashfun(int key, int hashkey)
{
	return key % hashkey;
}

void inserthash(hashtable* hash, datattype* searchlist, int hashkey)
{
	int place;
	int i = 0;
	hashnode* pointer;
	for (i = 0; i < hash->n; i++)
	{
		place = hashfun(searchlist[i], hashkey);
		pointer = hash->hashlist[place].firstnode;
		hashnode* newnode = (hashnode*)malloc(sizeof(hashnode));
		if (newnode == NULL)
		{
			printf("NULL\n");
			return;
		}
		newnode->data = searchlist[i];
		newnode->next = NULL;
		while (pointer->next != NULL)
		{
			pointer = pointer->next;
		}
		pointer->next = newnode;
	}
}

void displayhashtable(hashtable* hash)
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

datattype hashsearch(hashtable* hash, int key, int hashkey, int* count)
{
	int place = hashfun(key, hashkey);
	hashnode* pointer = hash->hashlist[place].firstnode->next;
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
	printf("Ҫ�Ӷ��ٸ�Ԫ���в���?\n");
	int n;
	scanf("%d", &n);
	datattype* searchlist = creatsearchlist(n);
	int hashkey = findhashkey(n);
	hashtable hash;
	inithahtable(&hash, n);
	inserthash(&hash, searchlist, hashkey);
	displayhashtable(&hash);
	printf("��������Ҫ���ҵ�Ԫ��\n");
	datattype key;
	scanf("%d", &key);
	int count = 0;
	int result = hashsearch(&hash, key, hashkey, &count);
	if (result == -32765)
	{
		printf("һ��������%d��,����ʧ��,����������\n", count);

	}
	else
	{
		printf("һ��������%d��,���ҳɹ�!\n", count);
		printf("���ҵ�ֵ��%d", result);
	}
	return 0;
}