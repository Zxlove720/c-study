#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<stdbool.h>

#define datamax 100

typedef int datatype;
//typedef struct stack
//{
//	datatype data[datamax];
//	int top;
//}stack;
//
//void addelement(stack* s1)
//{
//	if (s1->top == datamax - 1)
//	{
//		system("color 4");
//		printf("栈满!\n");
//		system("pause");
//		system("color 7");
//		return;
//	}
//	printf("输入想要入栈的元素\n");
//	datatype element;
//	scanf("%d", &element);
//	s1->data[++s1->top] = element;
//	system("color 2");
//	printf("成功入栈");
//	system("pause");
//	system("cls");
//	system("color 7");
//}
//
//datatype getelement(stack* s1)
//{
//	return s1->data[s1->top--];
//}
//
//int main()
//{
//	stack s1;
//	s1.top = -1;//初始化栈顶指针;
//	printf("输入想要入栈的元素个数\n");
//	int number;
//	scanf("%d", &number);
//	int i = 0;
//	for (i = 0; i < number; i++)
//	{
//		addelement(&s1);
//	}
//	for (i = 0; i < number; i++)
//	{
//		printf("%d ", getelement(&s1));
//	}
//	return 0;
//}


typedef struct stack
{
	datatype data;
	struct stack* next;
}stack;

bool isempty(stack* s1)
{
	if (s1 == NULL)
	{
		return false;
	}
	return true;
}

stack* creatnode(datatype element)
{
	stack* newnode = (stack*)malloc(sizeof(stack));
	if (newnode == NULL)
	{
		printf("heap full\n");
		exit(1);
	}
	newnode->data = element;
	newnode->next = NULL;
	return newnode;
}

void push(stack** s1)
{
	printf("输入要入栈的元素\n");
	datatype element;
	scanf("%d", &element);
	stack* newnode = creatnode(element);
	newnode->next = *s1;
	*s1 = newnode;
	printf("push out\n");
}

datatype pop(stack** s1)
{
	stack* temp;
	datatype poped;
	temp = *s1;
	poped = temp->data;
	*s1 = temp->next;
	free(temp);
	return poped;
}

int main()
{
	stack* s1 = NULL;
	if (isempty(s1))
	{
		printf("初始化失败\n");
		printf("请重试\n");
		return 0;
	}
	int i = 0;
	printf("有多少元素要入栈?\n");
	int number;
	scanf("%d", &number);
	for (i = 0; i < number; i++)
	{
		push(&s1);

	}
	for (i = 0; i < number; i++)
	{
		printf("%d ", pop(&s1));
	}

	return 0;
}