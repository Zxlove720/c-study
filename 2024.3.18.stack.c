#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define datamax 10

typedef struct stack
{
	int data[datamax];
	int top;

}stack;

void addelement(stack* s1)
{
	if (s1->top == datamax - 1)
	{
		printf("full\n");
		return;
	}
	printf("��������Ҫ��ջ��Ԫ��\n");
	int element;
	scanf("%d", &element);
	s1->data[++s1->top] = element;
	printf("successful\n");
}

int outstack(stack* s1)
{
	return s1->data[s1->top--];
}

int main()
{
	stack s1;
	s1.top = -1;
	flag:
	printf("���м���Ԫ��Ҫ��ջ?\n");
	int number;
	scanf("%d", &number);
	if (number > datamax)
	{
		printf("����ջֵ������������\n");
		goto flag;
	}
	int i;
	for ( i = 0; i < number; i++)
	{
		addelement(&s1);
	}
	int x = 0;
	for (i = 0; i < datamax; i++)
	{
		if (s1.top == -1)
		{
			break;
		}
		printf("%d ", outstack(&s1));
	}

	return 0;
}