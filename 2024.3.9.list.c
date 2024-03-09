#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;
typedef struct list
{
	datatype data;
	struct list* next;
}list;

//list* creatNode(datatype value)
//{
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("内存申请失败\n");
//		exit(1);
//	}
//	newnode->data = value;
//	newnode->next = NULL;
//	return newnode;
//}
//
//
//void addNode(list** head)
//{
//	printf("请输入你想要添加的值\n");
//	datatype value;
//	scanf("%d", &value);
//	list* pointer = *head;
//	list* newnode = creatNode(value);
//	if (pointer == NULL)
//	{
//		*head = newnode;
//		return;
//	}
//	while (pointer->next != NULL)
//	{
//		pointer = pointer->next;
//	}
//	pointer->next = newnode;
//}
//
//void printfList(list** head)
//{
//	list* pointer = *head;
//	while (pointer != NULL)
//	{
//		printf("%d ", pointer->data);
//		pointer = pointer->next;
//	}
//	printf("\n");
//}
//
//void insertNode(list** head)
//{
//	printf("输入你想插入的值\n");
//	datatype value;
//	scanf("%d", &value);
//	printf("输入你想插入的位置\n");
//	int place;
//	scanf("%d", &place);
//	list* pointer = *head;
//	list* newnode = creatNode(value);
//	if (pointer == NULL)
//	{
//		*head = newnode;
//		return;
//	}
//	int i = 0;
//	while (pointer != NULL && i < place - 1)
//	{
//		pointer = pointer->next;
//		i++;
//	}
//	if (pointer == NULL)
//	{
//		printf("插入位置不合法，请重新输入\n");
//		return;
//	}
//	newnode->next = pointer->next;
//	pointer->next = newnode;
//
//}
//
//void deleteNode(list** head)
//{
//	printf("输入你想要删除第几个数?\n");
//	int place;
//	scanf("%d", &place);
//	list* pointer = *head;
//	if (pointer->next == NULL)
//	{
//		printf("此表为空表，无法删除！\n");
//		return;
//	}
//	int i = 0;
//	while (pointer->next != NULL && i < place - 2)//0 123456   //7-2=5
//	{											  //  012345		
//		pointer = pointer->next;
//		i++;
//	}
//	if (pointer->next == NULL)
//	{
//		printf("该位置上没有值，请重新输入\n");
//		return;
//	}
//	list* temp = pointer->next;
//	pointer->next = temp->next;
//	free(temp);
//	temp = NULL;
//}
//
//int main()
//{
//	list* head = NULL;
//	printf("请问你想要多长的链表？-->\n");
//	int length;
//	scanf("%d", &length);
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		addNode(&head);
//	}
//	printfList(&head);
//	insertNode(&head);
//	printfList(&head);
//	deleteNode(&head);
//	printfList(&head);
//
//	return 0;
//}

list* creatnode(datatype value)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("errpr : 内存分配失败！\n");
		exit(1);
	}
	newnode->data = value;
	newnode->next = NULL;
	return newnode;
}

void addnode(list** head)
{
	printf("输入你想要插入的值\n");
	datatype value;
	scanf("%d", &value);
	list* pointer = *head;
	list* newnode = creatnode(value);
	if (pointer == NULL)
	{
		*head = newnode;
		printf("添加成功\n");
		return;
	}
	while (pointer->next!= NULL)
	{
		pointer = pointer->next;
	}
	pointer->next = newnode;
	printf("添加成功\n");
}

void printflist(list** head)
{
	list* pointer = *head;
	while (pointer != NULL)
	{
		printf("%d ", pointer->data);
		pointer = pointer->next;
	}
	printf("\n");
}

void insertnode(list** head)
{
	printf("你想插入什么值？\n");
	datatype value;
	scanf("%d", &value);
	printf("你想插在什么位置？\n");
	int place;
	scanf("%d", &place);
	list* pointer = *head;
	int i = 0;
	while (pointer != NULL && i < place - 1)
	{
		pointer = pointer->next;
		i++;
	}
	if (pointer == NULL)
	{
		printf("插入位置不合法，请重新输入\n");
		return;
	}
	list* newnode = creatnode(value);
	newnode->next = pointer->next;
	pointer->next = newnode;
}

void deletenode(list** head)
{
	printf("你想要删除第几个？\n");
	int place;
	scanf("%d", &place);
	list* pointer = *head;
	int i = 0;
	while (pointer != NULL && i < place - 2)
	{
		pointer = pointer->next;
		i++;
	}
	if (pointer == NULL)
	{
		printf("删除位置不合法，请重新输入\n");
		return;
	}
	list* temp = pointer->next;
	pointer->next = temp->next;
	free(temp);
	temp = NULL;
}

int main()
{
	list* head = NULL;
	printf("你需要多大的链表？\n");
	int length;
	scanf("%d", &length);
	int i = 0;
	for (i = 0; i < length; i++)
	{
		addnode(&head);
	}
	printflist(&head);
	insertnode(&head);
	printflist(&head);
	deletenode(&head);
	printflist(&head);

	return 0;
}