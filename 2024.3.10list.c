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
		printf("内存分配失败！\n");
		exit(1);
	}
	newnode->data = value;
	newnode->next = NULL;
	return newnode;
}

void addnode(list** head)
{
	printf("输入你想要添加的数值\n");
	datatype value;
	scanf("%d", &value);
	list* newnode = creatnode(value);
	list* pointer = *head;
	if (pointer == NULL)
	{
		*head = newnode;
		return;
	}
	while (pointer->next != NULL)
	{
		pointer = pointer->next;
	}
	pointer->next = newnode;
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
	printf("place?-->\n");
	int place;
	scanf("%d", &place);
	printf("value?-->\n");
	datatype value;
	scanf("%d", &value);
	list* pointer = *head;
	int i = 0;
	while (pointer != NULL && i < place - 1)
	{
		pointer = pointer->next;
		i++;
	}
	if (pointer == NULL)
	{
		printf("error\n");
		return;
	}
	list* newnode = creatnode(value);
	newnode->next = pointer->next;
	pointer->next = newnode;
}

void deletenode(list** head)
{
	list* pointer = *head;
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
		printf("error\n");
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
	int number;
	scanf("%d", &number);
	for (int i = 0; i < number; i++)
	addnode(&head);
	printflist(&head);
	insertnode(&head);
	printflist(&head);
	deletenode(&head);
	printflist(&head);

	return 0;
}