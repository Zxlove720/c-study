//�����ϰ
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int datatype;


////��̬�ڴ��˳���
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
//	printf("��ʼ�����\n");
//}
//
//void addnode(list* l1)
//{
//	printf("��������Ҫ�����Ԫ��-->\n");
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
//	printf("��Ҫ����˳���?-->\n");
//	int n;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	addnode(&l1);
//	printlist(&l1);
//	return 0;
//}


//������ϰ
//��ʽ�洢
//typedef struct list
//{
//	datatype data;//������
//	struct list* next;//ָ����
//}list;//������Ϊlist������д
//
//list* creatnode(int vaule)//������������һ���ڵ�
//{
//	list* newnode = (list*)malloc(sizeof(list));//����һ���½ڵ㣬��malloc��̬�ڴ����
//	if (newnode == NULL)//�����̬�ڴ����ʧ�ܣ�ֱ���˳�����
//	{
//		exit(1);
//	}
//	newnode->data = vaule;//���½ڵ��������ֵ
//	newnode->next = NULL;//���½ڵ��ָ������Ϊ��ָ��
//	return newnode;//���½ڵ�ĵ�ַ����
//}
//
//void addnode(list**head)//�������ڱ��ĩβ����ڵ�
//{
//	printf("����Ҫ�����Ԫ��-->\n");
//	datatype vaule;
//	scanf("%d", &vaule);
//	list* newnode = creatnode(vaule);//�����½ڵ㲢�Ҹ�ֵ
//	list* pointer = *head;//��pointerָ���������桱headͷ�ڵ㣬Ȼ�����pointer���ƶ����ҵ��б�������Ԫ�ص�λ��
//	if (pointer == NULL)//���pointerΪ��ָ�룬ֱ�ӷ���-1���������
//	{
//		*head = newnode;
//		return;
//	}
//	while (pointer->next != NULL)//���pointer���ǿ�ָ��
//	{
//		pointer = pointer->next;//pointerָ��������һ���ڵ�
//	}
//	pointer->next = newnode;//pointer����һ���ڵ�����½ڵ�
//}
//
//void printflist(list* head)//��������������
//{
//	list* pointer = head;//pointer������head�ƶ�
//	while (pointer != NULL)//ֻҪpointer���ǿ�ָ��
//	{
//		printf("%d ", pointer->data);//��ӡpointer��������
//		pointer = pointer->next;//pointerָ����һ���ڵ�
//	}
//}
//
//int main()
//{
//	list* head = NULL;//��ʼ����������ͷ�ڵ㣬�������ݣ���ָ����ָ���
//	printf("����Ҫ��������\n");
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


//����

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
		printf("�����ڵ�-��̬�ڴ����ʧ��\n");
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