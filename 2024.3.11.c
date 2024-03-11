#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;
typedef struct list
{
	datatype data;
	struct list* next;
}list;

list* creatnode(datatype value)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("内存申请失败\n");
		exit(1);
	}
	newnode->data = value;
	newnode->next = NULL;
	return newnode;
}

void addnode(list** head)
{
	printf("请输入值-->\n");
	datatype value;
	scanf("%d", &value);
	list* newnode = creatnode(value);
	list* pointer = *head;
	if (pointer == NULL)
	{
		*head = newnode;
		printf("输入成功\n");
		return;
	}
	while (pointer->next != NULL)
	{
		pointer = pointer->next;
	}
	pointer->next = newnode;
	printf("输入成功\n");
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
	printf("输入你想要插入的值\n");
	datatype value;
	scanf("%d", &value);
	printf("输入你想要插入的位置\n");
	int place;
	scanf("%d", &place);
	list* pointer = *head;
	list* newnode = creatnode(value);
	int i = 0;
	while (pointer != NULL && i < place - 1)
	{
		pointer = pointer->next;
		i++;
	}
	if (pointer == NULL)
	{
		printf("插入位置不合法，请重新选择!\n");
		return;
	}
	newnode->next = pointer->next;
	pointer->next = newnode;
}

void deletenode(list** head)
{
	list* pointer = *head;
	printf("输入你想删除第几个？\n");
	int place;
	scanf("%d", &place);
	int i = 0;
	while (pointer != NULL && i < place - 2)
	{
		pointer = pointer->next;
		i++;
	}
	if (pointer == NULL)
	{
		printf("没有这个数，请重新输入!\n");
		return;
	}
	list* temp = pointer->next;
	pointer->next = temp->next;
	free(temp);
	temp = NULL;
}

int lengthlist(list** head)
{
	list* pointer = *head;
	int count = 0;
	while (pointer != NULL)
	{
		count++;
		pointer = pointer->next;
	}
	return count;
}

int main()
{
	list* head = NULL;
	printf("想要输入几个值？\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		addnode(&head);

	}
	printflist(&head);
	insertnode(&head);
	printflist(&head);
	printf("%d\n", lengthlist(&head));

	deletenode(&head);
	printflist(&head);
	int length = lengthlist(&head);
	printf("%d\n", length);
	return 0;
}