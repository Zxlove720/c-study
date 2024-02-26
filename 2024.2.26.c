#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	//数组初始化
	int n;
	scanf("%d", &n);
	int array[500];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	//找最大值
	int max = array[0];
	for (i = 1; i < n; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}
	printf("该数组的最大值是%d\n", max);

	//冒泡排序
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	//二分查找
	printf("请输入你想要查找的值-->\n");
	int check;
	scanf("%d", &check);
	int left = 0;
	int right = n - 1;
	int flag = 0;
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (array[mid] > check)
		{
			right = mid - 1;
		}
		else if (array[mid] < check)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，是%d，下标是%d\n", check, mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("找不到，请重新输入\n");
	}
	//遍历数组
	for (i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	system("pause");
	return 0;
}