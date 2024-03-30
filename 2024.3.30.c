#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;

typedef struct list
{
	datatype data;
	struct list* next;
}list;

list* creathead()
{
	list* head = (list*)malloc(sizeof(list));
	if (head == NULL)
	{
		printf("error\n");
		exit(1);
	}
	head->next = NULL;
	return head;
}

bool isempty(list* head)
{
	if (head->next == NULL)
	{
		return true;
	}
	return false;
}

void addnode(list* head)
{
	printf("输入要入表的元素\n");
	datatype element;
	scanf("%d", &element);
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("error\n");
		return;
	}
	newnode->data = element;
	newnode->next = NULL;
	list* pointer = head;
	while (pointer->next != NULL)
	{
		pointer = pointer->next;
	}
	pointer->next = newnode;
}

void printlist(list* head)
{
	list* pointer = head->next;
	while (pointer != NULL)
	{
		printf("%d ", pointer->data);
		pointer = pointer->next;
	}
	printf("\n");
}

void insertnode(list* head)
{
	list* pointer = head;
	printf("输入插入的元素\n");
	datatype element;
	scanf("%d", &element);
	printf("请输入插入的位置\n");
	int place;
	scanf("%d", &place);
	int i = 0;
	while (pointer != NULL && i < place - 1)
	{
		pointer = pointer->next;
		i++;
	}
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("error\n");
		return;
	}
	newnode->data = element;
	newnode->next = pointer->next;
	pointer->next = newnode;
}

int main()
{
	list* head = creathead();
	bool flag = isempty(head);
	if (!flag)
	{
		printf("error\n");
		return -1;
	}
	int i = 0;
	int n;
	printf("有几个元素要入表?\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		addnode(head);
	}
	printlist(head);
	insertnode(head);
	printlist(head);

	return 0;
}