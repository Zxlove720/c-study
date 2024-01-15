#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int flower(int i)
{
	int count = 0;
	int temp = i;
	int sum = 0;
	while (temp)
	{
		temp /= 10;
		count++;
	}
	temp = i;
	while (temp)
	{
		sum += pow(temp % 10, count);
		temp /= 10;
	}
	if (sum == i)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	printf("你想打印从0-几的水仙花数字，请输入->\n");
	int n;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		if (flower(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}
