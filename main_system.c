#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
int main()
{
	int input;
	int arr[100] = { 0 };
	printf("������Ҫ¼��ĳɼ�����\n");
	int n;
	printf("������--->\n");
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
		printf("��ͨ��������ѡ����--->");
		printf("\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			system("cls");
			output(arr, n);
			printf("�����������--->\n");
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
			printf("�����������--->\n");
			getch();
			system("cls");
			break;
		}
		case 3:
		{
			system("cls");
			sort(arr,n);
			printf("�����������--->\n");
			getch();
			system("cls");
			break;
		}
		case 4:
		{
			printf("���ڿ�����\n");
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
			printf("ϵͳ�˳�\n");
			break;
		}
		default:
		{
			Sleep(1000);
			system("cls");
			printf("                                         ѡ�����δ��ʶ��������ѡ��\n");
			Sleep(2000);
			system("cls");
		}
		}
	} while (input);
	return 0;
}
