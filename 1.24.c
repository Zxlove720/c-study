#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//main()
//{
//	float a, b, c, t;
//	a = 3;
//	b = 7;
//	c = 1;
//	if (a > b)
//	{
//		t = a; a = b; b = t;
//	}
//	if (a > c)
//	{
//		t = a; a = c; c = t;
//	}
//	if (b > c)
//	{
//		t = b; b = c; c = t;
//	}
//	printf("%5.2f,%5.2f,%5.2f", a, b, c);
//}
//#include <stdio.h>
//main()
//{
//	int num, c;
//	scanf("%d", &num);
//	do 
//	{ 
//		c = num % 10; 
//		printf("%d", c);
//	} 
//	while ((num/=10)>0);
//	printf("\n");
//}

//#include <stdio.h>
//#define N 4
//main()
//{
//	int i, j;
//	for (i = 1; i <= N; i++)
//	{
//		for (j = 1; j < i; j++)
//			printf(" ");
//		printf("*");
//		printf("\n");
//	}
//}
//

//#include <stdio.h>
//int m[3][3] = { {1},{2},{3} };
//int n[3][3] = { 1,2,3 };
//main()
//{
//	printf("%d", m[1][0] + n[0][0]);
//	printf("%d\n", m[0][1] + n[1][0]);
//}
#include<stdio.h>
//int main()
//{
//	int i = 3;
//	while (i--)
//	{
//		printf("%d", i);
//	}
//
//	return 0;
//}

int main()
{
	int x = 0, y = 0, z = 0;
	x++ && y++ && z++;
	printf("%d %d %d", x, y, z);

	return 0;
}