#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<errno.h>
//bool isPowerOfThree(int n)
//{
//    int i;
//    for (i = 0; i <= 100; i++)
//    {
//        if (pow(3, i) == n)
//            return true;
//    }
//    return false;
//}
//
//bool isPowerOfThree(int n) {
//    if (n <= 0)
//    {
//        return false;
//    }
//    if (n == 1 || n == 3 || n == 9 || n == 27 || n == 81 || n == 243 || n == 729 || n == 2187 || n == 6561 || n == 19683 || n == 59049 || n == 177147 || n == 531441 || n == 1594323 || n == 4782969 || n == 14348907 || n == 43046721 || n == 129140163 || n == 387420489 || n == 1162261467)
//        return true;
//    return false;
//}

//int main()
//{
//	FILE* pf = fopen("zxl.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return -1;
//	}
//	fprintf(pf, "I love you");
//	fclose(pf);
//	pf = NULL;
//	FILE* ff = fopen("zxl.txt", "a");
//	if (ff == NULL)
//	{
//		printf("%s", strerror(errno));
//		return -1;
//	}
//	fprintf(ff,"\nzxl");
//	fclose(ff);
//	ff = NULL;
//}

//倒序数组
//sort
/*void sort(int* arr, int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++)
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
}
int main()
{
	int arr[100];
	int n;
	scanf("%d",&n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}*/



//排序，查找
void sort(int* arr, int n)
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
}

int search(int* arr, int n)
{
	int left = n - 1;
	int right = 0;
	printf("你想找哪个数？\n");
	int p;
	scanf("%d", &p);
	while (left >= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > p)
		{
			left = mid - 1;
		}
		else if (arr[mid] < p)
		{
			right = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left < right)
	{
		return -1;
	}
}
int main()
{
	int arr[1000];
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	int ret = search(arr, n);
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("是第%d个数", ret + 1);
	}
}