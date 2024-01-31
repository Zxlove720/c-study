#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);

}
int main()
{
	int n;
	scanf("%d", &n);
	print(n);
	//printf("%d \n", new);
	return 0;
}