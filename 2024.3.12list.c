#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define max 100

typedef struct student
{
	char name[10];
	char gender[5];
	char number[20];
	int score[6];
	char address[20];
}student;

typedef struct list
{
	student s1[max];
	struct list* next;
}list;



list* creatnode(int length)
{
	list* newnode = (list*)malloc(sizeof(list));
	if (newnode == NULL)
	{
		printf("�ڴ�����ʧ��\n");
		exit(1);
	}
	
	printf("������ѧ��������\n");
	scanf("%s",newnode->s1[length].name);
	printf("������ѧ�����Ա�\n");
	scanf("%s", newnode->s1[length].gender);
	printf("������ѧ����ѧ��\n");
	scanf("%s", newnode->s1[length].number);
	printf("������ѧ�������ųɼ�\n");
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &newnode->s1[length].score[i]);
	}
	printf("������ѧ���ļ�ͥ��ַ\n");
	scanf("%s", newnode->s1[length].address);
	newnode->next = NULL;
	return newnode;
}

void addnode(list** head, int number)
{
	printf("�������%d��ѧ������Ϣ\n", number);
	list* newnode = creatnode(number);
	list* pointer = *head;
	if (pointer == NULL)
	{
		*head = newnode;
		return;
	}
	while (pointer->next != NULL)
	{
		pointer = pointer->next;
	}
	pointer->next = newnode;
}

void printlist(list* head)
{
	list* pointer = head->next;
	while (pointer != NULL)
	{
		student s = pointer->s1[0];
		printf("name: %s, gender: %s, number: %s, score: ", s.name, s.gender, s.number);
		for (int i = 0; i < 6; i++)
		{
			printf("%d ", s.score[i]);
		}
		printf("\n");
		pointer = pointer->next;
	}
	printf("\n");
}



int main()
{
	list* head = NULL;
	printf("���뼸��ѧ��?\n");
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		addnode(&head,i);
	}
	printlist(head);
	return 0;
}