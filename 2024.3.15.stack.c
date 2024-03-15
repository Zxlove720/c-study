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
	printf("有几个元素要入栈？\n");
	int n;
	int flag;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("入栈的元素？\n");
		datatype element;
		scanf("%d", &element);
		flag = push(&s, element);
		if (flag==1)
		{
			printf("入栈成功\n");
		}
		if (flag == 0)
		{
			printf("入栈失败\n");
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
		printf("内存申请失败\n");
		exit(1);
	}
	newnode->data = vaule;
	newnode->next = NULL;
	return newnode;
}

void addnode(list** head)
{
	printf("请输入值\n");
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
		printf("链表为空，无法插入\n");
		return;
	}
	list* pointer;
	pointer = *head;
	printf("输入你想要插入到第几个数后面，和数值\n");
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
		printf("插入位置错误，请重新输入\n");
		return;
	}
	newnode->next = pointer->next;
	pointer->next = newnode;

}


int main()
{
	list* head = NULL;
	printf("输入你想要加入几个节点\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
		addnode(&head);
	insertlist(&head);
	printflist(&head);
	return 0;
}