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
	printf("\t\t\t\t\t      欢迎使用学生成绩管理系统\n");
	printf("\t\t\t\t\t      1.输入学生信息\n");
	printf("\t\t\t\t\t      2.打印学生信息\n");
	printf("\t\t\t\t\t      3.查找学生信息\n");
	printf("\t\t\t\t\t      4.添加学生信息\n");
	printf("\t\t\t\t\t      5.删除学生信息\n");
	printf("\t\t\t\t\t      6.更新学生信息\n");
	printf("\t\t\t\t\t      7.将信息保存到本地\n");
	printf("\t\t\t\t\t      0.退出管理系统\n\n\n");
	printf("请选择-->");
}

bool addstudent(cls* my_class, int i)
{
	if (my_class->length >= maxsize)
	{
		return false;
	}
	printf("请输入第%d个学生的信息\n", i);
	printf("请输入姓名\n");
	scanf("%s", my_class->s[my_class->length].name);
	printf("请输入学号\n");
	scanf("%d", &my_class->s[my_class->length].number);
	printf("请输入三科成绩\n");
	int j = 0;
	for (j = 0; j < 3; j++)
	{
		scanf("%d", &my_class->s[my_class->length].score[j]);
	}
	my_class->length++;
	return true;
	printf("输入第%d个学生信息成功\n", i);
}

void printstudnet(cls my_class)
{
	int i = 0;
	printf("班上一共有%d个学生\n", my_class.length);
	printf("学生信息如下\n\n");
	printf("\t\t\t\t\t   姓名\t学号\t\t语文\t数学\t英语\n");
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
	printf("\t\t\t\t\t   请输入你想要查找的方式\n");
	printf("\t\t\t\t\t          1.按名字\n");
	printf("\t\t\t\t\t          2.按学号\n");
	printf("\t\t\t\t\t          3.按单科\n");
	printf("\n-->");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		system("cls");
		printf("请输入要查询的学生姓名\n");
		char name[10];
		scanf("%s", name);
		int number = searchbyname(my_class, name);
		if (number == -1)
		{
			printf("无法找到，请重新确认\n");
			system("pasue");
			system("cls");
			return;
		}
		printf("找到该学生了\n");
		printf("学生信息是:\n");
		printf("\t\t\t\t\t   姓名\t学号\t\t语文\t数学\t英语\n");
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
		printf("请输入要查询的学生学号\n");
		int id;
		scanf("%d", &id);
		int number = searchbynumber(my_class, id);
		if (number == -1)
		{
			printf("无法找到，请重新确认\n");
			system("pause");
			system("cls");
			return;
		}
		printf("找到该学生了\n");
		printf("学生信息是:\n");
		printf("\t\t\t\t\t   姓名\t学号\t\t语文\t数学\t英语\n");
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
		printf("查询程序退出，正在返回主程序\n");
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
		printf("选择错误，请重新选择\n");
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
		printf("学生已满\n");
		return;
	}
	printf("请输入你想要插入的位置\n");
	int place;
	scanf("%d", &place);
	student temp;
	printf("请输入你想要插入的学生信息\n");
	my_class->length++;
	printf("请输入姓名\n");
	scanf("%s", temp.name);
	printf("请输入学号\n");
	scanf("%d", &temp.number);
	printf("请输入三科成绩\n");
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
	printf("插入成功\n");
}

void deletestudent(cls* my_class)
{
	printf("现在有%d个学生\n", my_class->length);
	printstudnet(*my_class);
	system("pause");
	system("cls");
	flag:
	printf("\t\t\t\t\t   1.按照姓名删除\n");
	printf("\t\t\t\t\t   2.按照位置删除\n");
	printf("请选择删除的方式\n");
	printf("-->\n");
	int choice;
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		printf("请输入想要删除的姓名\n");
		char name[10];
		scanf("%s", name);
		int number = searchbyname(*my_class, name);
		my_class->length--;
		int i = 0;
		for (i = number; i<my_class->length; i++)
		{
			my_class->s[i] = my_class->s[i + 1];
		}
		printf("删除成功\n");
		break;
	}
	case 2:
	{
		printf("请输入想要删除第几个学生\n");
		int place;
		scanf("%d", &place);
		my_class->length--;
		int i = 0;
		for (i = place+1; i<my_class->length; i++)
		{
			my_class->s[i] = my_class->s[i + 1];
		}
		printf("删除成功\n");
		break;
	}
	case 0:
	{
		printf("删除程序退出，正在返回主程序\n");
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
		printf("选择错误，请重新选择\n");
		system("pause");
		system("cls");
		goto flag;
	}
	}
}

void updatestudent(cls* my_class)
{
	printf("请输入想要更新的学生的学号\n");
	int number;
	scanf("%d", &number);
	int id = searchbynumber(*my_class, number);
	printf("请重新输入该学生的信息\n");
	printf("请输入姓名\n");
	scanf("%s", my_class->s[id].name);
	printf("请输入学号\n");
	scanf("%d", &my_class->s[id].number);
	printf("请输入三科成绩\n");
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
		printf("文件打开失败\n");
		return;
	}
	fprintf(pf, "\t\t\t\t\t   姓名\t学号\t\t语文\t数学\t英语\n");
	int i = 0;
	for (i = 0; i<my_class->length; i++)
	{
		fprintf(pf,"\t\t\t\t\t   %s\t", my_class->s[i].name);
		fprintf(pf,"%d\t\t", my_class->s[i].number);
		fprintf(pf,"%d\t", my_class->s[i].score[0]);
		fprintf(pf, "%d\t", my_class->s[i].score[1]);
		fprintf(pf,"%d\n", my_class->s[i].score[2]);
	}
	printf("正在保存中\n");
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
			printf("要添加几个学生?\n");
			printf("-->");
			int n;
			scanf("%d", &n);
			system("cls");
			for (i = 0; i < n; i++)
			{
				bool flag = addstudent(&my_class, i + 1);
				if (flag == false)
				{
					printf("学生已满，请先删除或者扩容\n");
					break;
				}
				else
				{
					printf("输入第%d个学生信息成功\n", i + 1);
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
			printf("\n全体学生信息输入完毕\n");
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
			printf("感谢使用，程序正在退出\n");
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
			printf("选择失败，请重新选择\n");
			system("pause");
			system("cls");
		}
		}
	} while (choice);
	return 0;
}