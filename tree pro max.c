#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<Windows.h>

typedef int datatype;

typedef struct tree
{
	datatype data;
	struct tree* left;
	struct tree* right;
	int lefttag;
	int righttag;
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

void menu()
{
	printf("\t\t\t\t\t\t   ������ϵͳ\n");
	printf("\t\t\t\t\t\t   1.�����¶�����\n");
	printf("\t\t\t\t\t\t   2.�����ʾ��\n");
	printf("\t\t\t\t\t\t   3.����������\n");
	printf("\t\t\t\t\t\t   4.������������\n");
	printf("\t\t\t\t\t\t   5.��������Ϣ\n");
	printf("\t\t\t\t\t\t   0.�˳���ϵͳ\n");
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
		printf("�������%d���ڵ������\n",newnode->data);
		newnode->left = creatnode(newnode->left);
		printf("�������%d���ڵ���Һ���\n",newnode->data);
		newnode->right = creatnode(newnode->right);
		return newnode;
	}
	return NULL;
}

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

void visit(tree* root)
{
	printf("%d ", root->data);
}

void preorder1(tree* root)
{
	if (root != NULL)
	{
		visit(root);
		preorder1(root->left);
		preorder1(root->right);
	}
}

void preorder2(tree* root)
{
	if (root != NULL)
	{
		preorder2(root->left);
		visit(root);
		preorder2(root->right);
	}
}

void preorder3(tree* root)
{
	if (root != NULL)
	{
		preorder3(root->left);
		preorder3(root->right);
		visit(root);
	}
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

void preordertree(tree* root)
{
	flag:
	printf("1.�������\n");
	printf("2.�������\n");
	printf("3.�������\n");
	printf("4.��α���\n");
	printf("0.�˳�����\n");
	printf("\n��ѡ��-->");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		system("cls");
		preorder1(root);
		break;
	}
	case 2:
	{
		system("cls");
		preorder2(root);
		break;
	}
	case 3:
	{
		system("cls");
		preorder3(root);
		break;
	}
	case 4:
	{
		system("cls");
		preorder(root);
		break;
	}
	case 0:
	{
		printf("�ص�������\n");
		Sleep(1000);
		printf("......\n");
		Sleep(500);
		break;
	}
	default:
	{
		system("cls");
		printf("ѡ�����������ѡ��\n");
		system("pause");
		system("cls");
		goto flag;
	}
	}
}

tree* pre = NULL;
void visitnode(tree* root)
{
	if (root->left == NULL)
	{
		root->left = pre;
		root->lefttag = 1;
	}
	if (pre != NULL && pre->right == NULL)
	{
		pre->right = root;
		pre->righttag = 1;
	}
	pre = root;
}

void threattree(tree* root)
{
	if (root != NULL)
	{
		threattree(root->left);
		visitnode(root);
		threattree(root->right);
	}
}

int allcount = 0;
int endcount = 0;

void count1(tree* root)
{
	if (root)
	{
		allcount++;
		count1(root->left);
		count1(root->right);
	}
}

void countlast(tree* root)
{
	if (root)
	{
		if (root->left == NULL && root->right == NULL)
		{
			endcount++;
		}
		countlast(root->left);
		countlast(root->right);
	}
}

int countdeep(tree* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int leftdeep = countdeep(root->left);
	int rightdeep = countdeep(root->right);
	if (leftdeep > rightdeep)
	{
		return leftdeep + 1;
	}
	else
	{
		return rightdeep + 1;
	}
}

void count(tree* root)
{
flag:
	printf("1.ͳ�ƽڵ����\n");
	printf("2.ͳ��Ҷ�Ӹ���\n");
	printf("3.ͳ�ƶ��������\n");
	printf("0.����������\n");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		system("cls");
		count1(root);
		printf("�ܽڵ�����%d\n", allcount);
		break;
	}
	case 2:
	{
		system("cls");
		countlast(root);
		printf("Ҷ�ӽڵ�����%d\n", endcount);
		break;
	}
	case 3:
	{
		system("cls");
		int deep = countdeep(root);
		printf("�������������%d\n", deep);
		break;
	}
	case 0:
	{
		printf("�ص�������\n");
		Sleep(1000);
		printf("......\n");
		Sleep(500);
		break;
	}
	default:
	{
		system("cls");
		printf("ѡ�����������ѡ��\n");
		system("pause");
		system("cls");
		goto flag;
	}
	}
}

int main()
{
	int choice;
	tree* root = NULL;
	do
	{
		flag:
		menu();
		printf("\n\n��ѡ����->\n");
		scanf("%d", &choice);
		system("pause");
		system("cls");
		switch (choice)
		{
		case 1:
		{
			printf("��������ڵ��ֵ\n");
			root = creatnode();
			printf("\n�����������ɹ�\n");
			system("pause");
			system("cls");
			break;
		}
		case 2:
		{
			printf("�����ʾ��Ϊ:\n");
			showtree(root);
			printf("\n");
			system("pause");
			system("cls");
			break;
		}
		case 3:
		{
			preordertree(root);
			printf("\n�������\n");
			system("pause");
			system("cls");
			break;
		}
		case 4:
		{
			threattree(root);
			printf("�������ɹ�\n");
			system("pause");
			system("cls");
			break;
		}
		case 5:
		{
			system("cls");
			count(root);
			system("pause");
			system("cls");
			break;
		}
		case 0:
		{
			printf("��лʹ��!\n");
			system("pause");
			system("cls");
			return 0;
		}
		default:
		{
			printf("ѡ�����!\n");
			printf("������ѡ��!\n\n\n");
			system("pause");
			system("cls");
			goto flag;
		}
		}
	} while (choice);
	return 0;
}