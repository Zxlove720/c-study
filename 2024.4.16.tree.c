#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;

//typedef struct tree
//{
//	datatype data;
//	struct tree* left;
//	struct tree* right;
//}tree;
//
//typedef struct list
//{
//	tree* data;
//	struct list* next;
//}list;
//
//typedef struct queue
//{
//	list* front;
//	list* rear;
//}queue;
//
//
//tree* creatnode(tree* root)
//{
//	printf("请输入节点的值(0为空)\n");
//	datatype element;
//	scanf("%d", &element);
//	if (element != 0)
//	{
//		root = (tree*)malloc(sizeof(tree));
//		if (root == NULL)
//		{
//			printf("NULL\n");
//			exit(1);
//		}
//		root->data = element;
//		root->left = NULL;
//		root->right = NULL;
//		root->left = creatnode(root->left);
//		root->right = creatnode(root->right);
//	}
//	return root;
//}
//
//void visitnode(tree* root)
//{
//	printf("%d ", root->data);
//}
//
//void preorder(tree* root)
//{
//	if (root != NULL)
//	{
//		preorder(root->left);
//		visitnode(root);
//		preorder(root->right);
//	}
//}
//
//int main()
//{
//	tree* root = NULL;
//	root = creatnode(root);
//	preorder(root);
//	return 0;
//}

//typedef struct tree
//{
//	datatype data;
//	struct tree* left;
//	struct tree* right;
//	int lefttag;
//	int righttag;
//}tree;
//
//tree* creatnode()
//{
//	datatype element;
//	scanf("%d", &element);
//	if (element != 0)
//	{
//		tree* newnode = (tree*)malloc(sizeof(tree));
//		if (newnode == NULL)
//		{
//			printf("NULL\n");
//			exit(1);
//		}
//		newnode->data = element;
//		newnode->left = NULL;
//		newnode->right = NULL;
//		newnode->left = creatnode(newnode->left);
//		newnode->right = creatnode(newnode->right);
//		return newnode;
//	}
//	return NULL;
//}
//
//tree* pre = NULL;
//
//void visit(tree* root)
//{
//	printf("%d ", root->data);
//	if (root->left == NULL)
//	{
//		root->left = pre;
//		root->lefttag = 1;
//	}
//	if (pre != NULL && pre->right == NULL)
//	{
//		pre->right = root;
//		pre->righttag = 1;
//	}
//	pre = root;
//}
//
//void preorder(tree* root)
//{
//	if (root != NULL)
//	{
//		preorder(root->left);
//		visit(root);
//		preorder(root->right);
//	}
//}
//
//int main()
//{
//	printf("请输入节点值\n");
//	tree* root = NULL;
//	root = creatnode();
//	preorder(root);
//	return 0;
//}

//二分查找

/*int checknumber(int arr[], int n)
{
	int left = 0;
	int right = n - 1;
	printf("输入你想要查找的数字\n");
	int target;
	scanf("%d", &target);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > target)
		{
			right = mid - 1;
		}
		else if (arr[mid] < target)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main()
{
	int arr[100];
	int n;
	printf("你要多大的数组\n");
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int result = checknumber(arr, n);
	if (result == -1)
	{
		printf("找不到\n");
		return -1;
	}
	else
	{
		printf("这是第%d个数字\n", result + 1);
	}
	return 0;
}*/


//线索二叉树
typedef struct tree
{
	datatype data;
	struct tree* left;
	struct tree* right;
	int lefttag;//线索
	int righttag;
}tree;

tree* creatnode()
{
	datatype element;
	scanf("%d", &element);
	if (element != 0)
	{
		tree* newnode = (tree*)malloc(sizeof(tree));
		if (newnode == NULL)
		{
			printf("NULL\n");
			exit(1);
		}
		newnode->data = element;
		newnode->left = NULL;
		newnode->right = NULL;
		newnode->left = creatnode(newnode->left);
		newnode->right = creatnode(newnode->right);
		return newnode;
	}
	return NULL;
}

//tree* pre = NULL;
//
//void visitnode(tree* root)
//{
//	printf("%d ", root->data);
//	if (root->left != NULL)
//	{
//		root->left = pre;
//		root->lefttag = 1;
//	}
//	if (pre != NULL && pre->right == NULL)
//	{
//		pre->right = root;
//		pre->righttag = 1;
//	}
//	pre = root;
//}
//
//void threadnode(tree* root)
//{
//	if (root != NULL)
//	{
//		threadnode(root->left);
//		visitnode(root);
//		threadnode(root->right);
//	}
//}
//
//int main()
//{
//	printf("请输入节点值\n");
//	tree* root = NULL;
//	root = creatnode();
//	threadnode(root);
//	return 0;
//}

//层次遍历

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
	printf("请输入节点的值\n");
	tree* root = NULL;
	root = creatnode();
	preorder(root);
	return 0;
}