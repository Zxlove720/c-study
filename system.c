#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
void menu(void)
{
	printf("                                             ��ӭʹ��ѧ���ɼ�����ϵͳ\n");
	printf("                                                   1.����ɼ�\n");
	printf("                                                   2.�� �� ֵ\n");
	printf("                                                   3.��������\n");
	printf("                                                   4.��ӳɼ�\n");
	printf("                                                   5.........\n");
	printf("                                                   0.�˳�ϵͳ\n");

}
void output(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("��%d������ĳɼ���%d\n",i+1,arr[i]);
		Sleep(500);
	}
}
void find(int arr[], int n)
{
	int max, min;
	max = arr[0];
	min = arr[0];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i + 1] > max)
		{
			max = arr[i + 1];
		}
	}
	printf("�ɼ��е����ֵ��%d\n", max);
	for (i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("�ɼ��е���Сֵ��%d\n", min);
}
void semenu(void)
{
	printf("                                 1.���� 2.����\n");
}
void sort(int arr[], int n)
{
	output(arr, n);
flag:
	semenu();
	int ch;
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
	{
		int i, j;
		for (i = 0; i < n-1; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			printf("%d ", arr[i]);
		}
		break;
	}
	case 2:
	{
		int i, j;
		for (i = 0; i < n - 1; i++)
		{
			for (j = 0; j < n - 1 - i; j++)
			{
				if (arr[j] < arr[j + 1])
				{
					int temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for (i = 0; i < n; i++)
		{
			printf("%d ", arr[i]);
		}
		break;
	}
	default:
	{
		printf("������ѡ��\n");
		Sleep(500);
		goto flag;
		break;
	}
	}

}