#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*/*给你一个整数数组 nums 。
如果一组数字(i, j) 满足 nums[i] == nums[j] 且 i < j ，就可以认为这是一组 好数对 。
返回好数对的数目。

int numIdenticalPairs(int* arr, int n)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < n; i++)
	{
		int start = arr[i];
		int j = 0;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] == start)
			{
				count++;
				continue;
			}
		}
	}
	return count;
}


int main()
{
	int array[100] = {0};
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	numIdenticalPairs(array, n);
	return 0;
}*/

typedef int datatype;

typedef struct tree
{
	datatype data;
	struct tree* left;
	struct tree* right;
}tree;

typedef struct list
{
	tree* data;
	struct list* next;
}list;

typedef struct queue
{
	list* front;
	list* rear;
}queue;

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

void inqueue(queue* q, tree* root)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return;
	}
	newnode->data = root;
	newnode->next = NULL;
	q->rear->next = newnode;
	q->rear = newnode;
}

tree* outqueue(queue* q)
{
	list* pointer;
	tree* temp;
	pointer = q->front->next;
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

void visit(tree* pointer)
{
	printf("%d ", pointer->data);
}

tree* creattree(tree* root)
{
	datatype element;
	scanf("%d", &element);
	if (element != 0)
	{
		root = (tree*)malloc(sizeof(tree));
		if (root == NULL)
		{
			printf("NULL\n");
			exit(1);
		}
		root->data = element;
		root->left = NULL;
		root->right = NULL;
		root->left = creattree(root->left);
		root->right = creattree(root->right);
	}
	return root;
}

void preorder(tree* root)
{
	queue q;
	initqueue(&q);
	tree* pointer = root;
	inqueue(&q, root);
	while (!isempty(&q))
	{
		pointer = outqueue(&q);
		visit(pointer);
		if (pointer->left != NULL)
		{
			inqueue(&q, pointer->left);
		}
		if (pointer->right != NULL)
		{
			inqueue(&q, pointer->right);
		}
	}
}

int main()
{
	printf("请输入节点值\n");
	tree* root = NULL;
	root = creattree(root);
	preorder(root);
	return 0;
}