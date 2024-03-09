#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;
typedef struct list
{
	datatype data;
	struct list* next;
}list;

//list* creatNode(datatype value)
//{
//	list* newnode = (list*)malloc(sizeof(list));
//	if (newnode == NULL)
//	{
//		printf("�ڴ�����ʧ��\n");
//		exit(1);
//	}
//	newnode->data = value;
//	newnode->next = NULL;
//	return newnode;
//}
//
//
//void addNode(list** head)
//{
//	printf("����������Ҫ��ӵ�ֵ\n");
//	datatype value;
//	scanf("%d", &value);
//	list* pointer = *head;
//	list* newnode = creatNode(value);
//	if (pointer == NULL)
//	{
//		*head = newnode;
//		return;
//	}
//	while (pointer->next != NULL)
//	{
//		pointer = pointer->next;
//	}
//	pointer->next = newnode;
//}
//
//void printfList(list** head)
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
//void insertNode(list** head)
//{
//	printf("������������ֵ\n");
//	datatype value;
//	scanf("%d", &value);
//	printf("������������λ��\n");
//	int place;
//	scanf("%d", &place);
//	list* pointer = *head;
//	list* newnode = creatNode(value);
//	if (pointer == NULL)
//	{
//		*head = newnode;
//		return;
//	}
//	int i = 0;
//	while (pointer != NULL && i < place - 1)
//	{
//		pointer = pointer->next;
//		i++;
//	}
//	if (pointer == NULL)
//	{
//		printf("����λ�ò��Ϸ�������������\n");
//		return;
//	}
//	newnode->next = pointer->next;
//	pointer->next = newnode;
//
//}
//
//void deleteNode(list** head)
//{
//	printf("��������Ҫɾ���ڼ�����?\n");
//	int place;
//	scanf("%d", &place);
//	list* pointer = *head;
//	if (pointer->next == NULL)
//	{
//		printf("�˱�Ϊ�ձ��޷�ɾ����\n");
//		return;
//	}
//	int i = 0;
//	while (pointer->next != NULL && i < place - 2)//0 123456   //7-2=5
//	{											  //  012345		
//		pointer = pointer->next;
//		i++;
//	}
//	if (pointer->next == NULL)
//	{
//		printf("��λ����û��ֵ������������\n");
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
//	list* head = NULL;
//	printf("��������Ҫ�೤������-->\n");
//	int length;
//	scanf("%d", &length);
//	int i = 0;
//	for (i = 0; i < length; i++)
//	{
//		addNode(&head);
//	}
//	printfList(&head);
//	insertNode(&head);
//	printfList(&head);
//	deleteNode(&head);
//	printfList(&head);
//
//	return 0;
//}

list* creatnode(datatype value)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("errpr : �ڴ����ʧ�ܣ�\n");
		exit(1);
	}
	newnode->data = value;
	newnode->next = NULL;
	return newnode;
}

void addnode(list** head)
{
	printf("��������Ҫ�����ֵ\n");
	datatype value;
	scanf("%d", &value);
	list* pointer = *head;
	list* newnode = creatnode(value);
	if (pointer == NULL)
	{
		*head = newnode;
		printf("��ӳɹ�\n");
		return;
	}
	while (pointer->next!= NULL)
	{
		pointer = pointer->next;
	}
	pointer->next = newnode;
	printf("��ӳɹ�\n");
}

void printflist(list** head)
{
	list* pointer = *head;
	while (pointer != NULL)
	{
		printf("%d ", pointer->data);
		pointer = pointer->next;
	}
	printf("\n");
}

void insertnode(list** head)
{
	printf("�������ʲôֵ��\n");
	datatype value;
	scanf("%d", &value);
	printf("�������ʲôλ�ã�\n");
	int place;
	scanf("%d", &place);
	list* pointer = *head;
	int i = 0;
	while (pointer != NULL && i < place - 1)
	{
		pointer = pointer->next;
		i++;
	}
	if (pointer == NULL)
	{
		printf("����λ�ò��Ϸ�������������\n");
		return;
	}
	list* newnode = creatnode(value);
	newnode->next = pointer->next;
	pointer->next = newnode;
}

void deletenode(list** head)
{
	printf("����Ҫɾ���ڼ�����\n");
	int place;
	scanf("%d", &place);
	list* pointer = *head;
	int i = 0;
	while (pointer != NULL && i < place - 2)
	{
		pointer = pointer->next;
		i++;
	}
	if (pointer == NULL)
	{
		printf("ɾ��λ�ò��Ϸ�������������\n");
		return;
	}
	list* temp = pointer->next;
	pointer->next = temp->next;
	free(temp);
	temp = NULL;
}

int main()
{
	list* head = NULL;
	printf("����Ҫ��������\n");
	int length;
	scanf("%d", &length);
	int i = 0;
	for (i = 0; i < length; i++)
	{
		addnode(&head);
	}
	printflist(&head);
	insertnode(&head);
	printflist(&head);
	deletenode(&head);
	printflist(&head);

	return 0;
}