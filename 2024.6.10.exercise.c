#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* creatarray(int n)
{
	int* array = (int*)malloc(sizeof(int) * n);
	if (array == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	int i;
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		scanf("%d", &array[i]);
	}
	return array;
}

int parttion(int* arr, int low, int high)
{
	int temp = arr[low];
	while (low < high)
	{
		while (low < high && arr[high] >= temp)
		{
			high--;
		}
		arr[low] = arr[high];
		while (low < high && arr[low] <= temp)
		{
			low++;
		}
		arr[high] = arr[low];
	}
	arr[low] = temp;
	return low;
}

void my_qsort(int* arr, int low, int  high)
{
	if (low < high)
	{
		int postion = parttion(arr, low, high);
		my_qsort(arr, low, postion - 1);
		my_qsort(arr, postion + 1, high);
	}
}


void displaylist(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}


int main()
{
	printf("请输入你要多大的数组?\n");
	int n;
	scanf("%d", &n);
	int* arr = creatarray(n);
	int low = 0;
	int high = n - 1;
	my_qsort(arr, low, high);
	displaylist(arr, n);
	return 0;
}