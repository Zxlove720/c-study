#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/*顺序表
typedef int datatype;

typedef struct array
{
	datatype* data;
	int length;
}array;

void initarray(array* arr)
{
	printf("需要多大的数组?\n");
	scanf("%d", &arr->length);
	arr->data = (datatype*)malloc(sizeof(datatype) * arr->length * 10);
	if (arr->data == NULL)
	{
		printf("NULL\n");
		return;
	}
}

void input(array* arr)
{
	int i = 0;
	for (i = 0; i < arr->length; i++)
	{
		printf("请输入第%d个数字\n", i + 1);
		scanf("%d", &arr->data[i]);
	}
	printf("输入成功\n");
}

void output(array* arr)
{
	int i = 0;
	for (i = 0; i < arr->length; i++)
	{
		printf("%d ", arr->data[i]);
	}
	printf("\n");
}

void insertnumber(array* arr)
{
	printf("\n输入插入的位置\n");
	int place;
	scanf("%d", &place);
	printf("输入插入的数值\n");
	int value;
	scanf("%d", &value);
	arr->length++;
	if (arr->data == NULL)
	{
		printf("NULL\n");
		return;
	}
	int i;
	for (i = arr->length; i >= place; i--)
	{
		arr->data[i] = arr->data[i - 1];
		if (i == place)
		{
			arr->data[i] = value;
		}
	}
}

void deletenumber(array* arr)
{
	printf("\n输入想要删除第几个数\n");
	int place;
	scanf("%d", &place);
	int i = 0;
	arr->length--;
	for (i = place - 1; i <= arr->length; i++)
	{
		arr->data[i] = arr->data[i + 1];
	}
}

void showlength(array* arr)
{
	printf("表长为%d\n",arr->length);
}

int main()
{
	array arr;
	initarray(&arr);
	input(&arr);
	output(&arr);
	insertnumber(&arr);
	output(&arr);
	deletenumber(&arr);
	output(&arr);
	showlength(&arr);
	return 0;
}*/


//链表

typedef int datatype;
typedef struct list
{
	datatype data;
	struct list* next;
}list;

void creatlist(list* head)
{
	printf("输入元素的值\n");
	datatype value;
	scanf("%d", &value);
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return;
	}
	newnode->data = value;
	newnode->next = NULL;
	list* pointer = head;
	while (pointer->next != NULL)
	{
		pointer = pointer->next;
	}
	pointer->next = newnode;
}

void display(list* head)
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
	printf("输入插入的值\n");
	datatype value;
	scanf("%d", &value);
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("NULL\n");
		return;
	}
	newnode->data = value;
	newnode->next = NULL;
	printf("输入插入的位置\n");
	int place;
	scanf("%d", &place);
	int i = 0;
	list* pointer = head;
	while (pointer->next != NULL && i < place - 1)
	{
		pointer = pointer->next;
		i++;
	}
	newnode->next = pointer->next;
	pointer->next = newnode;
}

void deletenode(list* head)
{
	printf("输入想删除第几个节点\n");
	int place;
	scanf("%d", &place);
	int i = 0;
	list* pointer = head;
	while (pointer->next != NULL && i < place - 1)
	{
		pointer = pointer->next;
		i++;
	}
	list* temp = pointer->next;
	pointer->next = temp->next;
	free(temp);
	temp = NULL;
}

void nodenumber(list* head)
{
	list* pointer = head->next;
	int count = 0;
	while (pointer != NULL)
	{
		pointer = pointer->next;
		count++;
	}
	printf("%d", count);
}

int main()
{
	list* head = (list*)malloc(sizeof(list));
	if (head == NULL)
	{
		printf("NULL\n");
		return;
	}
	head->next = NULL;
	printf("有几个元素要入表\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		creatlist(head);
	}
	display(head);
	insertnode(head);
	display(head);
	deletenode(head);
	display(head);
	nodenumber(head);
	return 0;
}