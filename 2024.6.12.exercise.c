#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void insertsort(int* arr, int n)
{
	int i;
	int j;
	int temp;
	for (i = 1; i < n; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			temp = arr[i];
			for (j = i - 1; j >= 0 && arr[j] > temp; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int* arr, int n)
{
	int i;
	int j;
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j > i; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				swap(&arr[j], &arr[j - 1]);
			}
		}
	}
}

void sheelsort(int* arr, int n)
{
	int d;
	int i;
	int j;
	for (d = n / 2; d >= 1; d /= 2)
	{
		for (i = d; i <n; i++)
		{
			if (arr[i] < arr[i - d])
			{
				int temp = arr[i];
				for (j = i; j >= d && arr[j - d] > temp; j -= d)
				{
					swap(&arr[j - d], &arr[j]);
				}
				arr[j] = temp;
			}
		}
	}
}

int partition(int* arr, int low, int high)
{
	int key = arr[low];
	while (low < high)
	{
		while (low < high && arr[high] > key)
		{
			high--;
		}
		arr[low] = arr[high];
		while (low < high && arr[low] < key)
		{
			low++;
		}
		arr[high] = arr[low];
	}
	arr[low] = key;
	return low;
}

void my_qsort(int* arr, int n, int low, int high)
{
	if (low < high)
	{
		int position = partition(arr, low, high);
		my_qsort(arr, n, low, position - 1);
		my_qsort(arr, n, position + 1, high);
	}
}


void display(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	printf("请输入你想要多大的数组?\n");
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL)
	{
		printf("NULL\n");
		return -1;
	}
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
		scanf("%d", &arr[i]);
	}
	//insertsort(arr, n);
	//bubblesort(arr, n);
	//sheelsort(arr, n);
	int low = 0;
	int high = n - 1;
	my_qsort(arr, n, low, high);
	display(arr, n);
	return 0;
}