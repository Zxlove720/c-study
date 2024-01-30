#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	printf("你想打印个什么尺寸的菱形？\n");
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <=n - 1; i++)
	{
		for (j = 0; j < 2*i-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(n-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	} 

	return 0;
}