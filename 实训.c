#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<Windows.h>
#include<string.h>

#define maxsize 100

typedef struct student
{
	char name[10];
	int number;
	int score[3];
}student;

typedef struct cls
{
	student s[maxsize];
	int length;
}cls;


void menu()
{
	printf("\t\t\t\t\t      ��ӭʹ��ѧ���ɼ�����ϵͳ\n");
	printf("\t\t\t\t\t      1.����ѧ����Ϣ\n");
	printf("\t\t\t\t\t      2.��ӡѧ����Ϣ\n");
	printf("\t\t\t\t\t      3.����ѧ����Ϣ\n");
	printf("\t\t\t\t\t      4.���ѧ����Ϣ\n");
	printf("\t\t\t\t\t      5.ɾ��ѧ����Ϣ\n");
	printf("\t\t\t\t\t      6.����ѧ����Ϣ\n");
	printf("\t\t\t\t\t      7.����Ϣ���浽����\n");
	printf("\t\t\t\t\t      0.�˳�����ϵͳ\n\n\n");
	printf("��ѡ��-->");
}

bool addstudent(cls* my_class, int i)
{
	if (my_class->length >= maxsize)
	{
		return false;
	}
	printf("�������%d��ѧ������Ϣ\n", i);
	printf("����������\n");
	scanf("%s", my_class->s[my_class->length].name);
	printf("������ѧ��\n");
	scanf("%d", &my_class->s[my_class->length].number);
	printf("���������Ƴɼ�\n");
	int j = 0;
	for (j = 0; j < 3; j++)
	{
		scanf("%d", &my_class->s[my_class->length].score[j]);
	}
	my_class->length++;
	return true;
	printf("�����%d��ѧ����Ϣ�ɹ�\n", i);
}

void printstudnet(cls my_class)
{
	int i = 0;
	printf("����һ����%d��ѧ��\n", my_class.length);
	printf("ѧ����Ϣ����\n\n");
	printf("\t\t\t\t\t   ����\tѧ��\t\t����\t��ѧ\tӢ��\n");
	for (i = 0; i<my_class.length; i++)
	{
		printf("\t\t\t\t\t   %s\t", my_class.s[i].name);
		printf("%d\t\t", my_class.s[i].number);
		printf("%d\t", my_class.s[i].score[0]);
		printf("%d\t", my_class.s[i].score[1]);
		printf("%d\n", my_class.s[i].score[2]);
	}
	
}

int searchbyname(cls my_class, char name[10])
{
	int i = 0;
	for (i = 0; i<my_class.length; i++)
	{
		if (strcmp(my_class.s[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

int searchbynumber(cls my_class, int id)
{
	int i = 0;
	for (i = 0; i<my_class.length; i++)
	{
		if (my_class.s[i].number == id)
		{
			return i;
		}
	}
	return -1;
}

void searchstudent(cls my_class)
{
	flag:
	printf("\t\t\t\t\t   ����������Ҫ���ҵķ�ʽ\n");
	printf("\t\t\t\t\t          1.������\n");
	printf("\t\t\t\t\t          2.��ѧ��\n");
	printf("\t\t\t\t\t          3.������\n");
	printf("\n-->");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		system("cls");
		printf("������Ҫ��ѯ��ѧ������\n");
		char name[10];
		scanf("%s", name);
		int number = searchbyname(my_class, name);
		if (number == -1)
		{
			printf("�޷��ҵ���������ȷ��\n");
			system("pasue");
			system("cls");
			return;
		}
		printf("�ҵ���ѧ����\n");
		printf("ѧ����Ϣ��:\n");
		printf("\t\t\t\t\t   ����\tѧ��\t\t����\t��ѧ\tӢ��\n");
		printf("\t\t\t\t\t   %s\t", my_class.s[number].name);
		printf("%d\t\t", my_class.s[number].number);
		printf("%d\t", my_class.s[number].score[0]);
		printf("%d\t", my_class.s[number].score[1]);
		printf("%d\n", my_class.s[number].score[2]);
		break;
	}
	case 2:
	{
		system("cls");
		printf("������Ҫ��ѯ��ѧ��ѧ��\n");
		int id;
		scanf("%d", &id);
		int number = searchbynumber(my_class, id);
		if (number == -1)
		{
			printf("�޷��ҵ���������ȷ��\n");
			system("pause");
			system("cls");
			return;
		}
		printf("�ҵ���ѧ����\n");
		printf("ѧ����Ϣ��:\n");
		printf("\t\t\t\t\t   ����\tѧ��\t\t����\t��ѧ\tӢ��\n");
		printf("\t\t\t\t\t   %s\t", my_class.s[number].name);
		printf("%d\t\t", my_class.s[number].number);
		printf("%d\t", my_class.s[number].score[0]);
		printf("%d\t", my_class.s[number].score[1]);
		printf("%d\n", my_class.s[number].score[2]);
		break;
	}
	case 3:
	{

	}
	case 0:
	{
		printf("��ѯ�����˳������ڷ���������\n");
		int i = 0;
		for (i = 0; i < 6; i++)
		{
			printf(".");
			Sleep(300);
		}
		Sleep(300);
		system("pause");
		system("cls");
		return;
	}
	default:
	{
		printf("ѡ�����������ѡ��\n");
		system("pause");
		system("cls");
		goto flag;
	}
	}
	system("pause");
	system("cls");
}

void insertstudent(cls* my_class)
{
	if (my_class->length >= maxsize)
	{
		printf("ѧ������\n");
		return;
	}
	printf("����������Ҫ�����λ��\n");
	int place;
	scanf("%d", &place);
	student temp;
	printf("����������Ҫ�����ѧ����Ϣ\n");
	my_class->length++;
	printf("����������\n");
	scanf("%s", temp.name);
	printf("������ѧ��\n");
	scanf("%d", &temp.number);
	printf("���������Ƴɼ�\n");
	int j = 0;
	for (j = 0; j < 3; j++)
	{
		scanf("%d", &temp.score[j]);
	}
	for (j = my_class->length; j > place; j--)
	{
		my_class->s[j] = my_class->s[j - 1];
	}
	my_class->s[place] = temp;
	printf("����ɹ�\n");
}

void deletestudent(cls* my_class)
{
	printf("������%d��ѧ��\n", my_class->length);
	printstudnet(*my_class);
	system("pause");
	system("cls");
	flag:
	printf("\t\t\t\t\t   1.��������ɾ��\n");
	printf("\t\t\t\t\t   2.����λ��ɾ��\n");
	printf("��ѡ��ɾ���ķ�ʽ\n");
	printf("-->\n");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		printf("��������Ҫɾ��������\n");
		char name[10];
		scanf("%s", name);
		int number = searchbyname(*my_class, name);
		my_class->length--;
		int i = 0;
		for (i = number; i<my_class->length; i++)
		{
			my_class->s[i] = my_class->s[i + 1];
		}
		printf("ɾ���ɹ�\n");
		break;
	}
	case 2:
	{
		printf("��������Ҫɾ���ڼ���ѧ��\n");
		int place;
		scanf("%d", &place);
		my_class->length--;
		int i = 0;
		for (i = place+1; i<my_class->length; i++)
		{
			my_class->s[i] = my_class->s[i + 1];
		}
		printf("ɾ���ɹ�\n");
		break;
	}
	case 0:
	{
		printf("ɾ�������˳������ڷ���������\n");
		int i = 0;
		for (i = 0; i < 6; i++)
		{
			printf(".");
			Sleep(300);
		}
		Sleep(300);
		return;
	}
	default:
	{
		printf("ѡ�����������ѡ��\n");
		system("pause");
		system("cls");
		goto flag;
	}
	}
}

void updatestudent(cls* my_class)
{
	printf("��������Ҫ���µ�ѧ����ѧ��\n");
	int number;
	scanf("%d", &number);
	int id = searchbynumber(*my_class, number);
	printf("�����������ѧ������Ϣ\n");
	printf("����������\n");
	scanf("%s", my_class->s[id].name);
	printf("������ѧ��\n");
	scanf("%d", &my_class->s[id].number);
	printf("���������Ƴɼ�\n");
	int j = 0;
	for (j = 0; j < 3; j++)
	{
		scanf("%d", &my_class->s[id].score[j]);
	}
}

void savefile(cls* my_class)
{
	FILE* pf = fopen("student.txt", "w");
	if (pf == NULL)
	{
		printf("�ļ���ʧ��\n");
		return;
	}
	fprintf(pf, "\t\t\t\t\t   ����\tѧ��\t\t����\t��ѧ\tӢ��\n");
	int i = 0;
	for (i = 0; i<my_class->length; i++)
	{
		fprintf(pf,"\t\t\t\t\t   %s\t", my_class->s[i].name);
		fprintf(pf,"%d\t\t", my_class->s[i].number);
		fprintf(pf,"%d\t", my_class->s[i].score[0]);
		fprintf(pf, "%d\t", my_class->s[i].score[1]);
		fprintf(pf,"%d\n", my_class->s[i].score[2]);
	}
	printf("���ڱ�����\n");
	for (i = 0; i < 6; i++)
	{
		printf(".");
		Sleep(200);
	}
	Sleep(200);
	printf("\n");
	fclose(pf);
	pf = NULL;
}

int main()
{
	cls my_class;
	my_class.length = 0;
	int choice;
	do 
	{
		menu();
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
		{
			system("cls");
			int i = 0;
			printf("Ҫ��Ӽ���ѧ��?\n");
			printf("-->");
			int n;
			scanf("%d", &n);
			system("cls");
			for (i = 0; i < n; i++)
			{
				bool flag = addstudent(&my_class, i + 1);
				if (flag == false)
				{
					printf("ѧ������������ɾ����������\n");
					break;
				}
				else
				{
					printf("�����%d��ѧ����Ϣ�ɹ�\n", i + 1);
				}
				system("cls");
			}
			system("pause");
			system("cls");
			break;
		}
		case 2:
		{
			system("cls");
			printstudnet(my_class);
			printf("\nȫ��ѧ����Ϣ�������\n");
			system("pause");
			system("cls");
			break;
		}
		case 3:
		{
			system("cls");
			searchstudent(my_class);
			break;
		}
		case 4:
		{
			system("cls");
			insertstudent(&my_class);
			system("pause");
			system("cls");
			break;
		}
		case 5:
		{
			system("cls");
			deletestudent(&my_class);
			system("pause");
			system("cls");
			break;
		}
		case 6:
		{
			system("cls");
			updatestudent(&my_class);
			system("pause");
			system("cls");
			break;
		}
		case 7:
		{
			system("cls");
			savefile(&my_class);
			system("pause");
			system("cls");
			break;
		}
		case 0:
		{
			system("cls");
			printf("��лʹ�ã����������˳�\n");
			int i = 0;
			for (i = 0; i < 6; i++)
			{
				printf(".");
				Sleep(300);
			}
			Sleep(300);
			system("pause");
			system("cls");
			break;
		}
		default:
		{
			system("cls");
			printf("ѡ��ʧ�ܣ�������ѡ��\n");
			system("pause");
			system("cls");
		}
		}
	} while (choice);
	return 0;
}