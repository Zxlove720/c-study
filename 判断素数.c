#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, n, k;
	scanf("%d", &n);
	k = sqrt(n);
	for (i = 2; i <= k; i++)
	{
		if (n % i == 0)
			break;
	}
	if (i > k)
		printf("%d������\n");
	else
		printf("%d��������\n");
	return 0;
}