#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define maxsize 100

typedef int datatype;

//限定大小的顺序表的基本操作


//typedef struct list
//{
//	datatype data[maxsize];
//	int length;
//}list;
//
//void initlist(list* l)
//{
//	l->length = 0;
//}
//
//bool isempty(list* l)
//{
//	if (l->length == 0)
//	{
//		return true;
//	}
//	return false;
//}
//
//void addnumber(list* l)
//{
//	if (l->length >= maxsize)
//	{
//		printf("顺序表已满\n");
//		return;
//	}
//	printf("输入想要进表的元素\n");
//	datatype element;
//	scanf("%d", &element);
//	l->data[l->length] = element;
//	l->length++;
//	printf("插入成功\n");
//}
//
//void printlist(list* l)
//{
//	if (l->length == 0)
//	{
//		printf("表为空\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < l->length; i++)
//	{
//		printf("%d ", l->data[i]);
//	}
//	printf("\n");
//}
//
//void insertelement(list* l)
//{
//	if (l->length >= maxsize)
//	{
//		printf("顺序表已满\n");
//		return;
//	}
//	printf("请输入想要插入的元素值\n");
//	datatype element;
//	scanf("%d", &element);
//	printf("请输入想要插入的位置\n");
//	int place;
//	scanf("%d", &place);
//	if (place <= l->length)
//	{
//		int i = 0;
//		for (i = l->length; i >= place; i--)
//		{
//			l->data[i] = l->data[i - 1];
//			if (i == place)
//			{
//				l->data[i] = element;
//			}
//		}
//		l->length++;
//		printf("插入成功!\n");
//	}
//	else
//	{
//		printf("插入位置无效\n");
//		return;
//	}
//}
//
//datatype checkelement(list* l)
//{
//	if (l->length == 0)
//	{
//		printf("表为空\n");
//		return -1;
//	}
//	printf("输入想要查找的元素\n");
//	datatype element;
//	scanf("%d", &element);
//	int i;
//	for (i = 0; i < l->length; i++)
//	{
//		if (l->data[i] == element)
//		{
//			return i + 1;
//		}
//	}
//	return -1;
//}
//
//void update(list* l)
//{
//	printlist(l);
//	printf("请输入你想要更改第几个元素?\n");
//	int place;
//	scanf("%d", &place);
//	if (place > l->length)
//	{
//		printf("输入错误\n");
//		return;
//	}
//	printf("请输入更改后的值\n");
//	datatype element;
//	scanf("%d", &element);
//	int i = 0;
//	for (i = 0; i < l->length; i++)
//	{
//		if (i == place - 1)
//		{
//			l->data[i] = element;
//			break;
//		}
//	}
//	printf("更改成功\n");
//	printlist(l);
//}
//
//void deleteelement(list* l)
//{
//	printlist(l);
//	printf("输入你想要删除第几个元素\n");
//	int place;
//	scanf("%d", &place);
//	if (place <= 0 || place > l->length)
//	{
//		printf("位置不合法\n");
//		return;
//	}
//	int i = 0;
//	for (i = place - 1; i < l->length; i++)
//	{
//		l->data[i] = l->data[i + 1];
//	}
//	l->length--;
//	printf("现在表中还有%d个元素", l->length);
//}
//
//void recout(list* l)
//{
//	int i = l->length - 1;
//	for (i = l->length - 1; i >= 0; i--)
//	{
//		printf("%d ", l->data[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	list l;//创立顺序表
//	initlist(&l);//初始化顺序表
//	bool flag = isempty(&l);//判断顺序表是否为空
//	if (!flag)
//	{
//		printf("初始化失败\n");
//	}
//	int n;
//	printf("多少元素需要进入顺序表？\n");
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		addnumber(&l);//元素入表
//	}
//	printlist(&l);//遍历顺序表
//	insertelement(&l);//插入元素到已经有的顺序表
//	deleteelement(&l);//删除表中指定元素
//	printlist(&l);
//	datatype flag1 = checkelement(&l);//查找表中元素
//	if (flag1 == -1)
//	{
//		printf("无法找到该元素\n");
//	}
//	else
//	{
//		printlist(&l);
//		printf("找到了，是第%d个元素\n", flag1);
//	}
//	update(&l);//改变元素值
//	recout(&l);//逆序输出
//	return 0;
//}



//单链表的基本操作

//typedef struct list
//{
//	datatype data;
//	struct list* next;
//}list;
//
//bool isempty(list* head)
//{
//	if (head->next == NULL)
//	{
//		return true;
//	}
//	return false;
//}
//
//void addnode(list* head)
//{
//	printf("输入你想要加入链表的元素\n");
//	datatype element;
//	scanf("%d", &element);
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	newnode->data = element;
//	newnode->next = NULL;
//	list* pointer = head;
//	while (pointer->next != NULL)
//	{
//		pointer = pointer->next;
//	}
//	pointer->next = newnode;
//}
//
//void printlist(list* head)
//{
//	list* pointer = head->next;
//	while (pointer != NULL)
//	{
//		printf("%d ", pointer->data);
//		pointer = pointer->next;
//	}
//	printf("\n");
//}
//
//void insetnumber(list* head)
//{
//	printf("想要插入的值?\n");
//	datatype element;
//	scanf("%d", &element);
//	printf("想要插入的位置?\n");
//	int place;
//	scanf("%d", &place);
//	if (place < 1)
//	{
//		printf("error\n");
//		return;
//	}
//	list* pointer = head;
//	int i = 0;
//	while (pointer != NULL && i < place - 1)
//	{
//		pointer = pointer->next;
//		i++;
//	}
//	if (pointer == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	newnode->data = element;
//	newnode->next = pointer->next;
//	pointer->next = newnode;
//}
//
//list* creathead()
//{
//	list* head = (list*)malloc(sizeof(list));
//	if (head == NULL)
//	{
//		printf("error\n");
//		exit(1);
//	}
//	head->next = NULL;
//	return head;
//}
//
//void deleteelement(list* head)
//{
//	printf("你想删除第几个数字\n");
//	int place;
//	scanf("%d", &place);
//	list* pointer = head;
//	int i = 0;
//	while (pointer != NULL && i < place - 1)
//	{
//		pointer = pointer->next;
//		i++;
//	}
//	if (pointer == NULL)
//	{
//		printf("error\n");
//		return;
//	}
//	list* temp = pointer->next;
//	pointer->next = temp->next;
//	free(temp);
//	temp = NULL;
//}
//
//int main()
//{
//	list* head = creathead();
//	bool flag = isempty(head);
//	if (!flag)
//	{
//		printf("list is not empty\n");
//		return -1;
//	}
//	int i = 0;
//	printf("有多少个元素需要入链表?\n");
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		addnode(head);
//	}
//	printlist(head);
//	insetnumber(head);
//	printlist(head);
//	deleteelement(head);
//	printlist(head);
//	return 0;
//}


//顺序栈

//typedef struct stack
//{
//	datatype data[maxsize];
//	int top;
//}stack;
//
//void initstack(stack* s)
//{
//	s->top = -1;
//}
//
//bool isempty(stack s)
//{
//	if (s.top == -1)
//	{
//		return true;
//	}
//	return false;
//}
//
//void push(stack* s)
//{
//	if (s->top >= maxsize - 1)
//	{
//		printf("full\n");
//		return;
//	}
//	int element;
//	scanf("%d", &element);
//	s->data[++s->top] = element;
//	printf("入栈成功\n");
//
//}
//
//datatype pop(stack* s)
//{
//	return s->data[s->top--];
//}
//
//int main()
//{
//	stack s;
//	initstack(&s);
//	bool flag = isempty(s);
//	if (!flag)
//	{
//		printf("it is full\n");
//		return -1;
//	}
//	int i = 0;
//	int n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		push(&s);
//
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", pop(&s));
//	}
//	return 0;
//}

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
	printf("输入想要入表的元素\n");
	datatype element;
	scanf("%d", &element);
	list* pointer = head;
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("error\n");
		return;
	}
	newnode->data = element;
	newnode->next = NULL;
	while (pointer->next != NULL)
	{
		pointer = pointer->next;
	}
	pointer->next = newnode;
	printf("入表成功\n");
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
	datatype element;
	printf("输入插入的值\n");
	scanf("%d", &element);
	printf("输入插入的位置\n");
	int place;
	scanf("%d", &place);
	list* pointer = head;
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
	list* newnode = (list*)malloc(sizeof(list));
	newnode->data = element;
	newnode->next = pointer->next;
	pointer->next = newnode;
	printf("插入成功\n");

}

void deletelist(list* head)
{
	printf("你想要删除第几个数?\n");
	int place;
	scanf("%d", &place);
	list* pointer = head;
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
	list* temp = pointer->next;
	pointer->next = temp->next;
	free(temp);
	temp = NULL;
}

datatype count(list* head)
{
	int count = 0;
	list* pointer = head->next;
	while (pointer != NULL)
	{
		count++;
		pointer = pointer->next;
	}
	return count;
}

int main()
{
	list* head = creathead(&head);
	bool flag = isempty(head);
	if (!flag)
	{
		printf("error\n");
		return -1;
	}
	int n;
	printf("有多少个元素要插入链表\n");
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		addnode(head);
	}
	printlist(head);
	insertnode(head);
	printf("表中有%d个元素\n", count(head));
	printlist(head);
	deletelist(head);
	printlist(head);
	printf("表中有%d个元素\n", count(head));
	return 0;
}
