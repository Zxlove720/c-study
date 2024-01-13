#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}*/
#include <stdio.h>

/*int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)
			printf("%d ", i);
	}
	return 0;
}*/
#include <stdio.h>
/*int main() {
	int x = 3;
	int y = 3;
	switch (x % 2) 
	{
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("second");
			break;
		default: printf("hello");
		}
	case 2:
		printf("third");
	}
	return 0;
}*/
/*int main()
{
	int i;
	for (i = 3; i <= 100; i += 3)
	{
		printf("%d ", i);
	}
	return 0;
}*/
/*int main()
{
	int n;
	scanf("%d", &n);
	while (n != 0)
	{
		printf("%d", n % 10);
		n=n / 10;
	}
	return 0;
}*/
/*int main()
{
	int i= 1;
	float sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		if (i%2==0)
		{
			float jian = 1.0 / i;
			sum -= jian;
		}
		else
		{
			float jia = 1.0 / i;
			sum += jia;
		}
	}
	printf("%f\n", sum);
	return 0;
}*/
/*int main()
{
	int year;
	for (year = 1000; year <= 2000;year+=4)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d\n", year);
		}
		if (year % 400 == 0)
		{
			printf("%d\n", year);
		}
	}
	return 0;
}*/
#include <stdio.h>
int main() 
{
	int numbers[10];
	int max;
	printf("Enter 10 integers: \n");
	for (int i = 0; i < 10; i++) 
	{
		scanf("%d", &numbers[i]);
	}
	max = numbers[0];
	for (int i = 1; i < 10; i++) 
	{
		if (numbers[i] > max) 
		{
			max = numbers[i];
		}
	}
	printf("The maximum number is: %d\n", max);
	return 0;
}