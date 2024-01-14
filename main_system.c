#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
int main()
{
	int input;
	int arr[100] = { 0 };
	printf("输入你要录入的成绩个数\n");
	int n;
	printf("请输入--->\n");
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	Sleep(1000);
	system("cls");
	do
	{
		menu();
		printf("请通过输入来选择功能--->");
		printf("\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			system("cls");
			output(arr, n);
			printf("按任意键继续--->\n");
			getch();
			system("cls");
			break;
		}
		case 2:
		{
			system("cls");
			output(arr, n);
			printf("\n\n\n");
			find(arr,n);
			printf("按任意键继续--->\n");
			getch();
			system("cls");
			break;
		}
		case 3:
		{
			system("cls");
			sort(arr,n);
			printf("按任意键继续--->\n");
			getch();
			system("cls");
			break;
		}
		case 4:
		{
			printf("还在开发中\n");
			break;
		}
		case 5:
		{
			printf(".......\n");
			break;
		}
		case 0:
		{
			system("cls");
			Sleep(2000);
			printf("系统退出\n");
			break;
		}
		default:
		{
			Sleep(1000);
			system("cls");
			printf("                                         选择错误，未能识别，请重新选择\n");
			Sleep(2000);
			system("cls");
		}
		}
	} while (input);
	return 0;
}
