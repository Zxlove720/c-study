#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int datatype;
//typedef struct list
//{
//	datatype data[100];
//	int length;
//}list;
//
//void initlist(list* l1)
//{
//	l1->length = 0;
//}
//
//void adddata(list* l1, datatype i)
//{
//	l1->data[l1->length] = i;
//	l1->length++;
//}
//
//datatype printnumber(list* l1, datatype i)
//{
//	datatype temp = l1->data[i];
//	return temp;
//}
//
//int main()
//{
//	list l1;
//	initlist(&l1);
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		adddata(&l1, i);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", printnumber(&l1,i));
//	}
//	return 0;
//}

//typedef struct list
//{
//	datatype data;
//	struct list* next;
//}list;
//
//void initlist(list** head)
//{
//	*head = NULL;
//}
//
//list* creatnode(datatype value)
//{
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("full\n");
//		exit(1);
//	}
//	newnode->data = value;
//	newnode->next = NULL;
//	return newnode;
//}
//
//
//void addnode(list** head)
//{
//	list* pointer = *head;
//	datatype value;
//	scanf("%d", &value);
//	list* newnode = creatnode(value);
//	while (pointer == NULL)
//	{
//		*head = newnode;
//		return;
//	}
//	while (pointer->next != NULL)
//	{
//		pointer = pointer->next;
//	}
//	pointer->next = newnode;
//	printf("yes\n");
//}
//
//void returnnode(list** head)
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
//void insertnode(list** head)
//{
//	int place;
//	scanf("%d", &place);
//	datatype value;
//	scanf("%d", &value);
//	list* pointer = *head;
//	int i = 0;
//	while (pointer->next != NULL && i < place-1)
//	{
//		pointer = pointer->next;
//		i++;
//	}
//	if (pointer == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	list* newnode = creatnode(value);
//	newnode->next = pointer->next;
//	pointer->next = newnode;
//}
//
//void deletenode(list** head)
//{
//	int place;
//	scanf("%d", &place);
//	list* pointer = *head;
//	int i = 0;
//	while (pointer->next != NULL && i < place - 2)
//	{
//		pointer = pointer->next;
//		i++;
//	}
//	list* temp = pointer->next;
//	pointer->next = temp->next;
//	free(temp);
//	temp = NULL;
//}
//
//int main()
//{
//	list* head;
//	initlist(&head);
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		addnode(&head);
//	}
//	returnnode(&head);
//	insertnode(&head);
//	returnnode(&head);
//	deletenode(&head);
//	returnnode(&head);
//
//	return 0;
//}


//typedef struct stack
//{
//	datatype data[20];
//	int top;
//}stack;
//
//void push(stack* s1)
//{
//	datatype data;
//	scanf("%d", &data);
//	s1->top++;
//	s1->data[s1->top] = data;
//	printf("done\n");
//}
//
//datatype pop(stack* s1)
//{
//	return s1->data[s1->top--];
//}
//
//int main()
//{
//	stack s1;
//	s1.top = -1;
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		push(&s1);
//	}
//	int arr[100];
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = pop(&s1);
//	}
//	for (i = n - 1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}


typedef struct liststack
{
	datatype data;
	struct liststcak* next;
}liststack;

liststack* creatnode(datatype value)
{
	liststack* newnode = (liststack*)malloc(sizeof(liststack));
	if (newnode == NULL)
	{
		printf("error\n");
		exit(1);
	}
	newnode->data = value;
	newnode->next = NULL;
	return newnode;
}

void push(liststack** top)
{
	datatype value;
	scanf("%d", &value);
	liststack* newnode = creatnode(value);
	newnode->next = *top;
	*top = newnode;
	printf("push\n");
}

datatype pop(liststack** top)
{
	liststack* temp;
	datatype poped;
	temp = *top;
	poped = temp->data;
	*top = temp->next;
	free(temp);
	temp = NULL;
	return poped;
}

int main()
{
	liststack* top = NULL;
	int i = 0;
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		push(&top);
	}
	datatype array[20] = {0};
	for (i = 0; i < n; i++)
	{
		array[i] = pop(&top);
	}
	for (i = n - 1; i >= 0; i--)
	{
		printf("%d ", array[i]);
	}
	return 0;
}
