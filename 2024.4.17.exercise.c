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
//	int lefttag;
//	int righttag;
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
//void visitnode(tree* root)
//{
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
//void threatnode(tree* root)
//{
//	if (root != NULL)
//	{
//		threatnode(root->left);
//		visitnode(root);
//		threatnode(root->right);
//	}
//}
//
//tree* findlast(tree* root)
//{
//	while (root->lefttag == 0)
//	{
//		root = root->left;
//	}
//	return root;
//}
//
//tree* findnext(tree* root)
//{
//	if (root->righttag == 0)
//	{
//		return findlast(root->right);
//	}
//	else
//	{
//		return  root->right;
//	}
//
//}
//
//void visiting(tree* pointer)
//{
//	printf("%d ", pointer->data);
//}
//
//void visit(tree* root)
//{
//	tree* pointer = findlast(root);
//	for (pointer = findlast(root); pointer != NULL; pointer = findnext(pointer))
//	{
//		visiting(pointer);
//	}
//}
//
//int main()
//{
//	tree* root = NULL;
//	printf("������ڵ�ֵ\n");
//	root = creatnode();
//	threatnode(root);
//	visit(root);
//	return 0;
//}

//#define maxsize 100
////˫�ױ�ʾ��
//typedef struct tree
//{
//	datatype data;//������
//	int parent;//˫��
//}treenode;
//
//typedef struct ptree
//{
//	treenode nodes[maxsize];//˫�ױ�ʾ
//	int n;//�ڵ���
//}ptree;
//
//void createPTree(ptree* T) {
//    int i, j, data;
//    printf("������ڵ�����\n");
//    scanf("%d", &(T->n));
//    for (i = 0; i < T->n; i++) {
//        printf("�������%d���ڵ��ֵ��˫�׵�λ��(-1Ϊ��)��\n", i + 1);
//        scanf("%d%d", &data, &j);
//        T->nodes[i].data = data;
//        T->nodes[i].parent = j;
//    }
//}
//
//void printPTree(ptree* T) {
//    int i;
//    for (i = 0; i < T->n; i++) {
//        printf("�ڵ�ֵ��%d��˫��λ�ã�%d\n", T->nodes[i].data, T->nodes[i].parent);
//    }
//}
//
//int main() {
//    ptree T;
//    createPTree(&T);
//    printPTree(&T);
//    return 0;
//}

typedef struct tree
{
	datatype data;
	struct tree* left;
	struct tree* right;
}tree;



//����������


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
		printf("�������%d���ڵ������ֵ\n", newnode->data);
		newnode->left = creatnode(newnode->left);
		printf("�������%d���ڵ���Һ���ֵ\n", newnode->data);
		newnode->right = creatnode(newnode->right);
		return newnode;
	}
	return NULL;
}

/*void showtree(tree* root)
{
	if (root != NULL)
	{
		printf("%d", root->data);
		if (root->left != NULL)
		{
			printf("(");
			showtree(root->left);
			if (root->right != NULL)
			{
				printf(",");
				showtree(root->right);
			}
			printf(")");
		}
		else if (root->right != NULL)
		{
			printf("(");
			showtree(root->left);
			if (root->right != NULL);
			{
				printf(",");
				showtree(root->right);
			}
			printf(")");
		}
	}
}*/

//void showtree(tree* root)
//{
//	if (root != NULL)
//	{
//		printf("%d", root->data);
//		if (root->left != NULL)
//		{
//			printf("(");
//			showtree(root->left);
//			if (root->right != NULL)
//			{
//				printf(",");
//				showtree(root->right);
//			}
//			printf(")");
//		}
//		else if (root->right != NULL)
//		{
//			printf("(");
//			showtree(root->left);
//			if (root->right != NULL)
//			{
//				printf(",");
//				showtree(root->right);
//			}
//			printf(")");
//		}
//	}
//}

void showtree(tree* root)
{
	if (root != NULL)
	{
		printf("%d", root->data);
		if (root->left != NULL)
		{
			printf("(");
			showtree(root->left);
			if (root->right != NULL)
			{
				printf(",");
				showtree(root->right);
			}
			printf(")");
		}
		else if (root->right != NULL)
		{
			printf("(");
			showtree(root->left);
			if (root->right != NULL)
			{
				printf(",");
				showtree(root->right);
			}
			printf(")");
		}
	}
}

int count = 0;
void countnode(tree* root)
{
	if (root != NULL)
	{
		count++;
		countnode(root->left);
		countnode(root->right);
	}
}

int endcount = 0;
void endcountnode(tree* root)
{
	if (root)
	{
		if (root->left == NULL && root->right == NULL)
		{
			endcount++;
		}
		endcountnode(root->left);
		endcountnode(root->right);
	}
}

int countdeep(tree* root)
{
	if (!root)
	{
		return 0;
	}
	int leftdeep = 0;
	int rightdeep = 0;
	leftdeep = countdeep(root->left);
	rightdeep = countdeep(root->right);
	if (leftdeep > rightdeep)
	{
		return leftdeep + 1;
	}
	else
	{
		return rightdeep + 1;
	}

}

int main()
{
	tree* root = NULL;
	printf("��������ڵ��ֵ\n");
	root = creatnode();
	showtree(root);
	printf("\n");
	countnode(root);
	printf("�ڵ���%d��\n", count);
	endcountnode(root);
	printf("Ҷ�ӽڵ���%d��\n", endcount);
	int deep = countdeep(root);
	printf("�ö������������%d\n", deep);
	return 0;
}