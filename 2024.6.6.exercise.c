#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct list
{
	int* data;
	int length;
}list;

void initlist(list* l1)
{
	printf("数组中需要几个数?\n");
	int n;
	scanf("%d", &n);
	l1->data = (int*)malloc(sizeof(int) * n);
	l1->length = -1;
	if (l1->data == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		scanf("%d", &l1->data[i]);
		l1->length++;
	}
}

void sortelement(list* l1)
{
	int i, j;
	for (i = 0; i <= l1->length - 1; i++)
	{
		for (j = 0; j < l1->length - i; j++)
		{
			if (l1->data[j] > l1->data[j + 1])
			{
				int temp = l1->data[j + 1];
				l1->data[j + 1] = l1->data[j];
				l1->data[j] = temp;
			}
		}
	}
}

void displaylist(list* l1)
{
	int i;
	for (i = 0; i <= l1->length; i++)
	{
		printf("%d ", l1->data[i]);
	}

}

int main()
{
	list l1;
	initlist(&l1);
	sortelement(&l1);
	displaylist(&l1);
	return 0;
}