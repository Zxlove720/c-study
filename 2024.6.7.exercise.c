//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<stdbool.h>
//
//typedef int datatype;
//typedef struct tree
//{
//	datatype data;
//	struct tree* left;
//	struct tree* right;
//}tree;
//
//datatype* makesearchlist(int n)
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
//tree* inserttree(tree* root, int key)
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
//tree* creattree(datatype* searchlist, int n)
//{
//	tree* root = NULL;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		root = inserttree(root, searchlist[i]);
//	}
//	return root;
//}
//
//tree* searchtree(tree* root, int key, int* count)
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
//	return pointer;
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
//			printf(")");
//		}
//	}
//
//
//
//}
//
//int main()
//{
//	printf("请输入要从几个元素中查找\n");
//	int n;
//	scanf("%d", &n);
//	datatype* searchlist = makesearchlist(n);
//	tree* root = creattree(searchlist, n);
//	displaytree(root);
//	printf("\n");
//	printf("请输入要查找的元素\n");
//	int key;
//	scanf("%d", &key);
//	int count = 0;
//	tree* result = searchtree(root, key, &count);
//	if (result == NULL)
//	{
//		printf("一共查找了%d次\n", count);
//		printf("无法找到\n");
//	}
//	else
//	{
//		printf("一共查找了%d次\n", count);
//		printf("成功找到了，值是%d\n", result->data);
//	}
//	return 0;
//}
//


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct list
{
	int* data;
	int length;
}list;

void initlist(list* l1)
{
	printf("数组中需要几个数?\n");
	int n;
	scanf("%d", &n);
	l1->data = (int*)malloc(sizeof(int) * n);
	l1->length = -1;
	if (l1->data == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		scanf("%d", &l1->data[i]);
		l1->length++;
	}
}

void sortelement(list* l1)
{
	int i, j;
	for (i = 0; i <= l1->length - 1; i++)
	{
		for (j = 0; j < l1->length - i; j++)
		{
			if (l1->data[j] > l1->data[j + 1])
			{
				int temp = l1->data[j + 1];
				l1->data[j + 1] = l1->data[j];
				l1->data[j] = temp;
			}
		}
	}
}

void displaylist(list* l1)
{
	int i;
	for (i = 0; i <= l1->length; i++)
	{
		printf("%d ", l1->data[i]);
	}

}

int main()
{
	list l1;
	initlist(&l1);
	sortelement(&l1);
	displaylist(&l1);
	return 0;
}