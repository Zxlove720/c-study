#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[5] = { 0 };
	int i = 1;
	int j = 1;
	for (i = 0; i <= 4; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int change = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = change;
			}
		}
	}
	for (i = 0; i <= 4; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}