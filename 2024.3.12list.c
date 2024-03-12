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
		printf("内存申请失败\n");
		exit(1);
	}
	
	printf("请输入学生的姓名\n");
	scanf("%s",newnode->s1[length].name);
	printf("请输入学生的性别\n");
	scanf("%s", newnode->s1[length].gender);
	printf("请输入学生的学号\n");
	scanf("%s", newnode->s1[length].number);
	printf("请输入学生的六门成绩\n");
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		scanf("%d", &newnode->s1[length].score[i]);
	}
	printf("请输入学生的家庭地址\n");
	scanf("%s", newnode->s1[length].address);
	newnode->next = NULL;
	return newnode;
}

void addnode(list** head, int number)
{
	printf("请输入第%d个学生的信息\n", number);
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
	printf("输入几个学生?\n");
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		addnode(&head,i);
	}
	printlist(head);
	return 0;
}