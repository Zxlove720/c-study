#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

#define maxsize 100

typedef int datatype;

//typedef struct tree
//{
//	datatype data;
//	bool isempty;
//}tree;
//
//void inittree(tree treenode[])
//{
//	int i = 0;
//	for (i = 0; i < maxsize; i++)
//	{
//		treenode[i].isempty = true;
//	}
//}
//
//bool isempty(tree treenode[])
//{
//	int i = 0;
//	for (i = 0; i < maxsize; i++)
//	{
//		if (treenode[i].isempty == false)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//void addelement(tree treenode[],int i)
//{
//	datatype element;
//	printf("请输入元素\n");
//	scanf("%d", &element);
//	treenode[i].data = element;
//}
//
//void show(tree treenode[], int n)
//{
//	if (!isempty(treenode))
//	{
//		printf("is empty\n");
//		return;
//	}
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d是第%d个节点,它处在第%d层\n", treenode[i].data, i, (int)log2(i) + 1);
//	}
//}
//
//int main()
//{
//	tree treenode[maxsize];
//	inittree(treenode);
//	bool flag = isempty(treenode);
//	if (!flag)
//	{
//		printf("initerror\n");
//		return -1;
//	}
//	printf("有几个元素要加入二叉树?\n");
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		addelement(treenode,i);
//	}
//	printf("该树高度为%d\n", (int)log2(n) + 1);
//	show(treenode, n);
//	return 0;
//}

//typedef struct tree
//{
//	int number;
//	datatype data;
//	struct tree* left;
//	struct tree* right;
//}tree;
//
//tree* creatroot()
//{
//	tree* newnode = (tree*)malloc(sizeof(tree));
//	if (newnode == NULL)
//	{
//		printf("error\n");
//		exit(1);
//	}
//	newnode->number = 1;
//	newnode->left = NULL;
//	newnode->right = NULL;
//	return newnode;
//}
//
//bool isempty(tree* root)
//{
//	if (root->left == NULL && root->right == NULL)
//	{
//		return true;
//	}
//	return false;
//}
//
//void addnodeleft(tree* root, int i)
//{
//	printf("输入元素的值\n");
//	datatype element;
//	scanf("%d", &element);
//	tree* newnode = (tree*)malloc(sizeof(tree));
//	if (newnode == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	newnode->number = i;
//	newnode->data = element;
//	newnode->left = NULL;
//	newnode->right = NULL;
//	root->left = newnode;
//}
//
//void addnoderight(tree* root, int i)
//{
//	printf("输入元素的值\n");
//	datatype element;
//	scanf("%d", &element);
//	tree* newnode = (tree*)malloc(sizeof(tree));
//	if (newnode == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	newnode->number = i;
//	newnode->data = element;
//	newnode->left = NULL;
//	newnode->right = NULL;
//	root->right = newnode;
//}
//
//int main()
//{
//	tree* root = creatroot(&root);
//	bool flag = isempty(root);
//	if (!flag)
//	{
//		printf("error\n");
//		return -1;
//	}
//	int n;
//	printf("几个元素要上树?\n");
//	scanf("%d", &n);
//	int i;
//	for (i = 2; i <= n + 1; i++)
//	{
//		if (i % 2 == 0)
//		{
//			addnodeleft(root, i);
//		}
//		else
//		{
//			addnoderight(root, i);
//		}
//	}
//	return 0;
//}


typedef struct tree
{
	int number;
	datatype data;
	struct tree* left;
	struct tree* right;
}tree;

tree* creatroot()
{
	tree* newnode = (tree*)malloc(sizeof(tree));
	if (newnode == NULL)
	{
		printf("error\n");
		exit(1);
	}
	newnode->number = 1;
	newnode->data = 1;
	newnode->left = NULL;
	newnode->right = NULL;
	return newnode;
}

bool isempty(tree* root)
{
	if (root->left == NULL && root->right == NULL)
	{
		return true;
	}
	return false;
}

tree* addnode(tree* root, int i)
{
	if (root == NULL)
	{
		tree* newnode = (tree*)malloc(sizeof(tree));
		if (newnode == NULL)
		{
			printf("error\n");
			exit(1);
		}
		newnode->number = i;
		newnode->data = i;
		newnode->left = NULL;
		newnode->right = NULL;
		return newnode;
		printf("error\n");
		exit(1);
	}
	if (i < root->number)
	{
		root->left = addnode(root->left, i);
	}
	else if (i > root->number)
	{
		root->right = addnode(root->right, i);
	}
	return root;
}

int main()
{
	tree* root = creatroot();
	bool flag = isempty(root);
	if (!flag)
	{
		printf("error\n");
		return -1;
	}
	int i = 0;
	for (i = 2; i < 5; i++)
	{
		root = addnode(root, i);
	}
	return 0;
}

