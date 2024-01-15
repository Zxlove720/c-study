#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void input(int *arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}
int sum(int* arr, int size)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
void double0(int* arr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		arr[i] *= 2;
	}
}
void output(int* arr, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("double%d = %d\n",i, arr[i]);
	}

}
int main()
{
	/*int arr[5] = {0};
	int n;
	scanf("%d", &n);
	input(arr, n);
	int size = sizeof(arr) / sizeof(arr[0]);
	double0(arr, size);
	output(arr, size);
	printf("sum= %d\n", sum(arr, size));*/
	char arr[] = {"abcd"};
	printf("%s", arr);
	return 0;
}