#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define maxsize 100

typedef int datatype;

//�޶���С��˳���Ļ�������


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
//		printf("˳�������\n");
//		return;
//	}
//	printf("������Ҫ�����Ԫ��\n");
//	datatype element;
//	scanf("%d", &element);
//	l->data[l->length] = element;
//	l->length++;
//	printf("����ɹ�\n");
//}
//
//void printlist(list* l)
//{
//	if (l->length == 0)
//	{
//		printf("��Ϊ��\n");
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
//		printf("˳�������\n");
//		return;
//	}
//	printf("��������Ҫ�����Ԫ��ֵ\n");
//	datatype element;
//	scanf("%d", &element);
//	printf("��������Ҫ�����λ��\n");
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
//		printf("����ɹ�!\n");
//	}
//	else
//	{
//		printf("����λ����Ч\n");
//		return;
//	}
//}
//
//datatype checkelement(list* l)
//{
//	if (l->length == 0)
//	{
//		printf("��Ϊ��\n");
//		return -1;
//	}
//	printf("������Ҫ���ҵ�Ԫ��\n");
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
//	printf("����������Ҫ���ĵڼ���Ԫ��?\n");
//	int place;
//	scanf("%d", &place);
//	if (place > l->length)
//	{
//		printf("�������\n");
//		return;
//	}
//	printf("��������ĺ��ֵ\n");
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
//	printf("���ĳɹ�\n");
//	printlist(l);
//}
//
//void deleteelement(list* l)
//{
//	printlist(l);
//	printf("��������Ҫɾ���ڼ���Ԫ��\n");
//	int place;
//	scanf("%d", &place);
//	if (place <= 0 || place > l->length)
//	{
//		printf("λ�ò��Ϸ�\n");
//		return;
//	}
//	int i = 0;
//	for (i = place - 1; i < l->length; i++)
//	{
//		l->data[i] = l->data[i + 1];
//	}
//	l->length--;
//	printf("���ڱ��л���%d��Ԫ��", l->length);
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
//	list l;//����˳���
//	initlist(&l);//��ʼ��˳���
//	bool flag = isempty(&l);//�ж�˳����Ƿ�Ϊ��
//	if (!flag)
//	{
//		printf("��ʼ��ʧ��\n");
//	}
//	int n;
//	printf("����Ԫ����Ҫ����˳���\n");
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		addnumber(&l);//Ԫ�����
//	}
//	printlist(&l);//����˳���
//	insertelement(&l);//����Ԫ�ص��Ѿ��е�˳���
//	deleteelement(&l);//ɾ������ָ��Ԫ��
//	printlist(&l);
//	datatype flag1 = checkelement(&l);//���ұ���Ԫ��
//	if (flag1 == -1)
//	{
//		printf("�޷��ҵ���Ԫ��\n");
//	}
//	else
//	{
//		printlist(&l);
//		printf("�ҵ��ˣ��ǵ�%d��Ԫ��\n", flag1);
//	}
//	update(&l);//�ı�Ԫ��ֵ
//	recout(&l);//�������
//	return 0;
//}



//������Ļ�������

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
//	printf("��������Ҫ���������Ԫ��\n");
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
//	printf("��Ҫ�����ֵ?\n");
//	datatype element;
//	scanf("%d", &element);
//	printf("��Ҫ�����λ��?\n");
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
//	printf("����ɾ���ڼ�������\n");
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
//	printf("�ж��ٸ�Ԫ����Ҫ������?\n");
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


//˳��ջ

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
//	printf("��ջ�ɹ�\n");
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
	printf("������Ҫ����Ԫ��\n");
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
	printf("���ɹ�\n");
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
	printf("��������ֵ\n");
	scanf("%d", &element);
	printf("��������λ��\n");
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
	printf("����ɹ�\n");

}

void deletelist(list* head)
{
	printf("����Ҫɾ���ڼ�����?\n");
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
	printf("�ж��ٸ�Ԫ��Ҫ��������\n");
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i++)
	{
		addnode(head);
	}
	printlist(head);
	insertnode(head);
	printf("������%d��Ԫ��\n", count(head));
	printlist(head);
	deletelist(head);
	printlist(head);
	printf("������%d��Ԫ��\n", count(head));
	return 0;
}
