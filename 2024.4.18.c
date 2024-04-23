#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//求集合的并集、交集、差集
typedef struct arr3
{
	int array[1000];
	int n;
}arr;

bool check(arr arr3, int number)
{
	int i = 0;
	for (i = 0; i < arr3.n; i++)
	{
		if (arr3.array[i] == number)
		{
			return true;
		}
	}
	return false;
}

arr add(int* arr1, int n1, int* arr2, int n2)
{
	int i = 0;
	arr arr3;
	arr3.n = 0;
	for (i = 0; i<n1; i++)
	{
		arr3.array[i] = arr1[i];
		arr3.n++;
	}
	int j = i;
	for (i = 0; i < n2; j++, i++)
	{
		bool flag = check(arr3, arr2[i]);
		if (flag)
		{
			continue;
		}
		arr3.array[arr3.n] = arr2[i];
		arr3.n++;
	}
	return arr3;
}

bool find(int number, int* arr2, int n2)
{
	int i = 0;
	for (i = 0; i < n2; i++)
	{
		if (arr2[i] == number)
		{
			return true;
		}
	}
	return false;
}

arr inarr(int* arr1, int n1, int* arr2, int n2)
{
	int i = 0;
	arr arr4;
	arr4.n = 0;
	for (i = 0; i < n1; i++)
	{
		if (find(arr1[i], arr2, n2))
		{
			arr4.array[arr4.n] = arr1[i];
			arr4.n++;
		}
	}
	return arr4;
}

bool checknode(int number, int* arr2, int n2)
{
	int i = 0;
	for (i = 0; i < n2; i++)
	{
		if (arr2[i] == number)
		{
			return true;
		}
	}
	return false;
}

arr chaarr(int* arr1, int n1, int* arr2, int n2)
{
	arr arr5;
	arr5.n = 0;
	int i = 0;
	for (i = 0; i < n1; i++)
	{
		if (checknode(arr1[i], arr2, n2))
		{
			continue;
		}
		arr5.array[arr5.n] = arr1[i];
		arr5.n++;
	}
	return arr5;
}

int main()
{
	printf("输入集合a的大小\n");
	int n1;
	scanf("%d", &n1);
	int* arr1 = NULL;
	arr1 = (int*)malloc(sizeof(int) * n1);
	if (arr1 == NULL)
	{
		printf("NULL\n");
		return -1;
	}
	printf("输入集合a的元素\n");
	int i = 0;
	for (i = 0; i < n1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("输入集合b的大小\n");
	int n2;
	scanf("%d", &n2);
	int* arr2 = NULL;
	arr2 = (int*)malloc(sizeof(int) * n2);
	if (arr2 == NULL)
	{
		printf("NULL\n");
		return -1;
	}
	printf("输入集合b的元素\n");
	int j = 0;
	for (j = 0; j < n2; j++)
	{
		scanf("%d", &arr2[j]);
	}
	//求并集
	arr addarray = add(arr1, n1, arr2, n2);
	printf("两个集合的并集是\n");
	for (i = 0; i < addarray.n; i++)
	{
		printf("%d ", addarray.array[i]);
	}
	printf("\n");
	arr inarray = inarr(arr1, n1, arr2, n2);
	printf("两个集合的交集是\n");
	for (i = 0; i < inarray.n; i++)
	{
		printf("%d ", inarray.array[i]);
	}
	printf("\n");
	arr chaarray = chaarr(arr1, n1, arr2, n2);
	printf("两个集合的差集是\n");
	for (i = 0; i < chaarray.n; i++)
	{
		printf("%d ", chaarray.array[i]);
	}
	return 0;
}