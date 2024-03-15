#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

#define maxsize 2

typedef int datatype;

typedef struct stack
{
	datatype data[maxsize];
	int top;
}stack;

void initstack(stack* s)
{
	s->top = -1;
}

int push(stack* s, datatype element)
{
	if (s->top == maxsize - 1)
	{
		printf("full\n");
		return 0;
	}
	s->top++;
	s->data[s->top] = element;
	return 1;
}

void out(stack* s)
{


}

int main()
{
	stack s;
	initstack(&s);
	printf("�м���Ԫ��Ҫ��ջ��\n");
	int n;
	int flag;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("��ջ��Ԫ�أ�\n");
		datatype element;
		scanf("%d", &element);
		flag = push(&s, element);
		if (flag==1)
		{
			printf("��ջ�ɹ�\n");
		}
		if (flag == 0)
		{
			printf("��ջʧ��\n");
			break;
		}
	}
	out(&s);
	

	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;

typedef struct list
{
	datatype data;
	struct list* next;
}list;

list* creatnode(datatype vaule)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("�ڴ�����ʧ��\n");
		exit(1);
	}
	newnode->data = vaule;
	newnode->next = NULL;
	return newnode;
}

void addnode(list** head)
{
	printf("������ֵ\n");
	datatype vaule;
	scanf("%d", &vaule);
	list* newnode = creatnode(vaule);
	list* pointer = *head;
	if (pointer == NULL)
	{
		printf("sadas");
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
}

void insertlist(list** head)
{
	if (*head == NULL)
	{
		printf("����Ϊ�գ��޷�����\n");
		return;
	}
	list* pointer;
	pointer = *head;
	printf("��������Ҫ���뵽�ڼ��������棬����ֵ\n");
	int place;
	datatype value;
	scanf("%d%d", &place, &value);
	list* newnode = creatnode(value);
	int i = 0;
	while (pointer != NULL && i < place - 1)
	{
		pointer = pointer->next;
		i++;
	}
	if (pointer == NULL)
	{
		printf("����λ�ô�������������\n");
		return;
	}
	newnode->next = pointer->next;
	pointer->next = newnode;

}


int main()
{
	list* head = NULL;
	printf("��������Ҫ���뼸���ڵ�\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
		addnode(&head);
	insertlist(&head);
	printflist(&head);
	return 0;
}