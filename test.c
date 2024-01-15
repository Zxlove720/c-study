#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int search(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	int key;
	scanf("%d", &key);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > key)
		{
			right = mid - 1;//1234567
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	if (left > right)
		return -1;
}
int main()
{
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(array) / sizeof(array[0]);
	int ret = search(array, sz);
	printf("%d", ret);
	return 0;
}