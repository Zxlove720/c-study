//表的练习
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;


////动态内存的顺序表
//typedef struct linklist
//{
//	datatype* data;
//	int maxlength;
//	int length;
//}list;
//
//void initlist(list* l1)
//{
//	l1->length = 0;
//	l1->maxlength = 1000;
//	l1->data = (datatype*)malloc(sizeof(datatype) * l1->maxlength);
//
//	printf("初始化完成\n");
//}
//
//void addnode(list* l1)
//{
//	printf("输入你想要加入的元素-->\n");
//	scanf("%d", &l1->data[l1->length]);
//	l1->length++;
//}
//
//void printlist(list* l1)
//{
//	int i = 0;
//	for (i = 0; i < l1->length; i++)
//	{
//		printf("%d ", l1->data[i]);
//	}
//}
//
//int main()
//{
//	list l1;
//	initlist(&l1);
//	printf("你要多大的顺序表?-->\n");
//	int n;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	addnode(&l1);
//	printlist(&l1);
//	return 0;
//}


//链表练习
//链式存储
//typedef struct list
//{
//	datatype data;//数据域
//	struct list* next;//指针域
//}list;//重命名为list方便书写
//
//list* creatnode(int vaule)//函数用来创建一个节点
//{
//	list* newnode = (list*)malloc(sizeof(list));//创建一个新节点，用malloc动态内存分配
//	if (newnode == NULL)//如果动态内存分配失败，直接退出程序
//	{
//		exit(1);
//	}
//	newnode->data = vaule;//将新节点的数据域赋值
//	newnode->next = NULL;//将新节点的指针域设为空指针
//	return newnode;//将新节点的地址返回
//}
//
//void addnode(list**head)//函数来在表的末尾插入节点
//{
//	printf("你想要加入的元素-->\n");
//	datatype vaule;
//	scanf("%d", &vaule);
//	list* newnode = creatnode(vaule);//创建新节点并且赋值
//	list* pointer = *head;//用pointer指针来“代替”head头节点，然后跟随pointer的移动来找到列表中所有元素的位置
//	if (pointer == NULL)//如果pointer为空指针，直接返回-1，程序结束
//	{
//		*head = newnode;
//		return;
//	}
//	while (pointer->next != NULL)//如果pointer不是空指针
//	{
//		pointer = pointer->next;//pointer指向它的下一个节点
//	}
//	pointer->next = newnode;//pointer的下一个节点就是新节点
//}
//
//void printflist(list* head)//函数来遍历链表
//{
//	list* pointer = head;//pointer来代替head移动
//	while (pointer != NULL)//只要pointer不是空指针
//	{
//		printf("%d ", pointer->data);//打印pointer的数据域
//		pointer = pointer->next;//pointer指向下一个节点
//	}
//}
//
//int main()
//{
//	list* head = NULL;//初始化链表，创建头节点，不存数据，将指针域指向空
//	printf("你需要多大的链表？\n");
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	while (i < n)
//	{
//		addnode(&head);
//		i++;
//	}
//	printflist(head);
//	
//	return 0;
//}


//链表

typedef struct list
{
	datatype data;
	struct list* next;
}list;

list* creatnode(int vaule)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("创建节点-动态内存分配失败\n");
		exit(1);
	}
	newnode->data = vaule;
	newnode->next = NULL;
	return newnode;
}

void addnode(list** head)
{
	int vaule;
	scanf("%d", &vaule);
	list* newnode = creatnode(vaule);
	list* pointer = *head;
	if (pointer == NULL)
	{
		*head = newnode;
		return ;
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

int main()
{
	list* head = NULL;
	int i = 0;
	for (i = 0; i < 5; i++)
	addnode(&head);
	printflist(&head);
	return 0;
}