#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>


//typedef struct list
//{
//	int* data;
//	int length;
//	int maxlength;
//
//}list;
//
////初始化列表
//void initlist(list* l1)
//{
//	l1->data = (int*)malloc(sizeof(int) * l1->maxlength);
//	l1->length = 0;
//}
//
//void addnumber(list* l1)
//{
//	scanf("%d", &l1->data[l1->length]);
//	(l1->length)++;
//	printf("添加成功!\n");
//}
//
//void printflist(list* l1)
//{
//	int i = 0;
//	for (i = 0; i < l1->length; i++)
//	{
//		printf("%d ", l1->data[i]);
//	}
//
//}
//
//void charuonenumber(list* l1)
//{
//	printf("输入你插入的数字？-->\n");
//	int number;
//	scanf("%d", &number);
//	printf("输入你插入的位置-->\n");
//	int place;
//	scanf("%d", &place);
//	int i = l1->length;
//	l1->length++;
//	for (i = l1->length; i >= place; i--)
//	{
//		l1->data[i] = l1->data[i - 1];
//		l1->data[place] = number;
//	}
//}
//
//void deletenumber(list* l1)
//{
//	printf("输入你要删除第几个数？");
//	int place;
//	scanf("%d", &place);
//	int i = 0;
//	l1->length--;
//	for (i = place - 1; i < l1->length; i++)
//	{
//		l1->data[i] = l1->data[i + 1];
//	}
//}
//
//void sortlist(list* l1)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < l1->length - 1; i++)
//	{
//		for (j = 0; j < l1->length - 1 - i; j++)
//		{
//			if (l1->data[j] > l1->data[j + 1])
//			{
//				int temp = l1->data[j];
//				l1->data[j] = l1->data[j + 1];
//				l1->data[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int searchlist(list* l1)
//{
//	printf("输入你想要查找的数字?-->\n");
//	int number;
//	scanf("%d", &number);
//	int left = 0;
//	int right = l1->length - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//1234567
//		if (l1->data[mid] > number)
//		{
//			right = mid - 1;
//		}
//		else if (l1->data[mid] < number)
//		{
//			left = mid + 1;
//		}
//		else 
//		{
//			return mid + 1;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	list l1;
//	l1.maxlength = 1000;
//	initlist(&l1);
//	printf("你想要多大的列表？\n");
//	int i = 0;
//	int n;
//	scanf("%d", &n);
//	printf("请输入要输入的数字-->\n");
//	for (i = 0; i < n; i++)
//	addnumber(&l1);
//	charuonenumber(&l1);
//	printflist(&l1);
//	deletenumber(&l1);
//	printflist(&l1);
//	sortlist(&l1);
//	printf("\n");
//	printflist(&l1);
//	int flag = searchlist(&l1);
//	if (flag)
//	{
//		printf("找到了，是第%d个数！\n", flag);
//	}
//	else
//	{
//		printf("找不到，请重新输入!\n");
//	}
//	free(l1->data);
//	return 0;
//}


typedef int datatype;
//链表
typedef struct list
{
	int data;
	struct list* next;
}list;

int initlist(list** head)
{
	if (*head == NULL)
	{
		return 1;
	}
	return 0;
}

list* createnode(int vaule)
{
	list* newnode = (list*)malloc(sizeof(datatype));
	if (newnode == NULL)
	{
		printf("内存分配失败\n");
		exit(1);
	}
	newnode->data = vaule;
	newnode->next = NULL;
	return newnode;
}

void addnode(list** head)
{
	int value;
	printf("输入你想插入链表的值?-->\n");
	scanf("%d", &value);
	list* addnode = createnode(value);
	if (*head == NULL)
	{
		*head = addnode;
	}
	else 
	{
		list* temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = addnode;
	}
}

void printlist(list* head)
{
	list* temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		list* next = temp->next;
		free(temp);
		temp = next;
	}
}

int main()
{
	list* head = NULL;
	if (initlist(&head))
	{
		printf("初始化成功\n");
	}
	else
	{
		printf("初始化失败\n");
	}
	addnode(&head);
	printlist(head);
	return 0;
}