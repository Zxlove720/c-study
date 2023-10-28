#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int zxl(x, y)
{
	return x + y;
}
int main()
{
	int a;
	int b;
	scanf("%d%d", &a, &b);
	int sum = zxl(a, b);
	printf("%d\n", sum);
	return 0;
}*/
/*int jian(x, y)
{
	return x - y;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int sum = jian(a, b);
	printf("%d\n", sum);
	return 0;
}*/
int main()
{
	printf("请输入两个数a和b");
	int a = 0;
	int b = 0;
	scanf("%d%d", &a,&b);
	if (a <= b)
	{
		printf("%d\n",b);
	}
	else
	{
		printf("%d\n",a);
	}
	return 0;

}