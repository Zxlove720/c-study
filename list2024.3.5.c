#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//typedef int datatype;
//typedef struct list
//{
//	int data;
//	struct list* next;
//}list;
//
//list* creatnode(int vaule)
//{
//	list* newnode = (list*)malloc(sizeof(datatype));
//	if (newnode == NULL)
//	{
//		printf("内存申请失败！\n");
//		exit(1);
//	}
//	newnode->data = vaule;
//	newnode->next = NULL;
//	return newnode;
//
//}
//
//void addnode(list** head)
//{
//	printf("输入你想要添加的元素\n");
//	int vaule;
//	scanf("%d", &vaule);
//	list* node = creatnode(vaule);
//	if (*head == NULL)
//	{
//		*head = node;
//	}
//	else
//	{
//		list* temp = *head;
//		while (temp->next != NULL)
//		{
//			temp = temp->next;
//		}
//		temp->next = node;
//	}
//}
//
//void printflist(list* head)
//{
//	list* temp = head;
//	while (temp != NULL)
//	{
//		printf("%d ", temp->data);
//		list* next = temp->next;
//		free(temp);
//		temp = next;
//	}
//
//}
//
//
//int main()
//{
//	list* head = NULL;
//	addnode(&head);
//	printflist(head);
//	return 0;
//}


//顺序表练习
typedef int datatype;
typedef struct list
{
	int* data;
	int maxlength;
	int length;
}list;

void initlist(list* l1)
{
	l1->data = (datatype*)malloc(sizeof(datatype));
	l1->maxlength = 1000;
	l1->length = 0;
	printf("初始化成功！\n");
}

void addnode(list* l1)
{
	printf("输入你想加入的元素-->\n");
	scanf("%d", &l1->data[l1->length]);
	l1->length++;
	printf("加入成功\n\n");
}

void printlist(list* l1)
{
	int i = 0;
	for(i=0;i<l1->length;i++)
	{
		printf("%d ", l1->data[i]);
	}
}


int main()
{
	list l1;
	initlist(&l1);
	printf("你想输入几个元素？-->\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	while (i < n)
	{
		addnode(&l1);
		i++;
	}
	printlist(&l1);
	return 0;
}