#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

//bool istrue(int i)
//{
//	int temp = i;
//	int sum = 0;
//	int mid;
//	while (i)
//	{
//		mid = i % 10;
//		sum += (int)pow(mid, 3);
//		i /= 10;
//	}
//	if (sum == temp)
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int i;
//	for (i = 100; i <= 1000; i++)
//	{
//		if (istrue(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


// 第6题
//int main()
//{
//	int n;
//	printf("请输入一个数字\n");
//	scanf("%d", &n);
//	if (n < 1)
//	{
//		printf("%d", n);
//	}
//	else if (n >= 1 && n < 10)
//	{
//		printf("%d", 2 * n - 1);
//	}
//	else
//	{
//		printf("%d", 3 * n - 11);
//	}
//
//	return 0;
//}



//第七题
int main()
{
	int n;
	printf("请输入一个成绩\n");
	scanf("%d", &n);
	if (n > 100 || n < 0)
	{
		printf("error");
		return -1;
	}
	if (n <= 100 && n >= 90)
	{
		printf("A");
	}
	else if (n >= 80 && n <= 89)
	{
		printf("B");
	}
	else if (n >= 70 && n <= 79)
	{
		printf("C");
	}
	else if (n >= 60 && n <= 69)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	return 0;
}