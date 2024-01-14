#define _CRT_SECURE_NO_WARNINGS
#include"test.h"
void menu(void)
{
	printf("                                             欢迎使用学生成绩管理系统\n");
	printf("                                                   1.输出成绩\n");
	printf("                                                   2.找 极 值\n");
	printf("                                                   3.进行排序\n");
	printf("                                                   4.添加成绩\n");
	printf("                                                   5.........\n");
	printf("                                                   0.退出系统\n");

}
void output(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("第%d个输入的成绩是%d\n",i+1,arr[i]);
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
	printf("成绩中的最大值是%d\n", max);
	for (i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("成绩中的最小值是%d\n", min);
}
void semenu(void)
{
	printf("                                 1.升序 2.降序\n");
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
		printf("请重新选择！\n");
		Sleep(500);
		goto flag;
		break;
	}
	}

}