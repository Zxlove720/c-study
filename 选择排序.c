#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j < 10; j++)
		{
			if (arr[j] < arr[i])
			{
				int change = arr[i];
				arr[i] = arr[j];
				arr[j] = change;
			}
		}
	}
	for (i = 0; i <=9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}