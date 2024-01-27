#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<string.h>
#include<string.h>

//数字分离
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int temp = 0;
//	while (n)
//	{
//		temp = temp * 10 + n % 10;
//		n /= 10;
//	}
//	printf("%d\n", temp);
//	Sleep(200);
//
//	while (temp)
//	{
//		printf("%d ", temp % 10);
//		Sleep(200);
//		temp /= 10;
//	}
//
//	return 0;
//}

//最大公约数，最小公倍数

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int sum = a * b;
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//
//	}
//	printf("%d\n", b);
//	printf("%d", sum / b);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int i = 2;
//	int sum = a * b;
//	for (i = (a > b ? a : b); i > 1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n", i);
//			printf("%d", sum / i);
//			return 0;
//		}
//	}
//	printf("%d", 1);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int temp = a * b;
//	while (a % b)
//	{
//		int c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数是%d\n", b);
//	printf("最小公倍数是%d\n", temp / b);
//	return 0;
//}

//分离数字
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int temp=0;
//	while (n)
//	{
//		temp = temp * 10 + n % 10;
//		n /= 10;
//	}
//	while (temp)
//	{
//		printf("%d ", temp % 10);
//		temp /= 10;
//	}
//	
//	return 0;
//}


//求阶乘
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 1;
//	int e = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		e *= i;
//		sum += e;
//	}
//	printf("%d\n", e);
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int e = 1;
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		e *= i;
//		sum += e;
//	}
//	printf("%d %d", e, sum);
//
//	return 0;
//}

//int main()
//{
//	int n;
//	int count;
//	scanf("%d%d", &n, &count);
//	int i = 1;
//	int e = 0;
//	int sum = 0;
//	for (i = 1; i <= count; i++)
//	{
//		e = e * 10 + n;
//		sum += e;
//	}
//	printf("%d", sum);
//	return 0;
//}


//删除最大值

//int main()
//{
//	int arr[20];
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[i];
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("%d", max);
//	return 0;
//}


//题目描述:输入10个互不相同的整数并保存在数组中，找到该最大元素并删除它，输出删除后的数组
//int max_(int arr[], int* n)
//{
//	int i = 0;
//	int max = arr[i];
//	for (i = 0; i < *n; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	for (i = 0; i < *n; i++)
//	{
//		if (arr[i] == max)
//		{
//			return i;
//		}
//	}
//	(*n)--;
//}
//
//int main()
//{
//	int arr[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int n = 10;
//	for (i=max_(arr,&n); i < n-1; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int max_(int* arr, int n)
//{
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > arr[max])
//		{
//			max = i;
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int arr[20];
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = max_(arr,n); i < n - 1; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	n--;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	char a;
//	int zm, sz, kg, qt;
//	zm = 0, sz = 0, kg = 0, qt = 0;
//	while (1)
//	{
//		a= getchar();
//		if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
//		{
//			zm++;
//		}
//		else if (a >= '0' && a <= '9')
//		{
//			sz++;
//		}
//		else if (a == ' ')
//		{
//			kg++;
//		}
//		else
//		{
//			qt++;
//		}
//		if (a == '\n')
//		{
//			break;
//		}
//	}
//	printf("%d %d %d %d", zm, sz, kg, qt-1);
//	return 0;
//}

//#include<stdio.h>
//int main(void)
//{
//    /*********Begin*********/
//    int zm = 0, sz = 0, kg = 0, qt = 0;
//    char ch;
//    while (1)
//    {
        /*ch = getchar();
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
            zm++;
        else if (ch >= '0' && ch <= '9')
            sz++;
        else if (ch == ' ')
            kg++;
        else
        {
            qt++;
        }
        if (ch == '\n')
            break;*/
            //    }
            //    qt = qt - 1;
            //    printf("%d %d %d %d", zm, sz, kg, qt);
            //
            //    /*********End**********/
            //    return 0;
            //}


int main()
{
    char a[200];
    scanf("%s", a);
    int zm = 0, sz = 0, kg = 0, qt = 0;
    int i = 0;
    for (i = 0; i != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
            zm++;
        else if (a[i] >= '0' && a[i] <= '9')
            sz++;
        else if (a[i] == ' ')
            kg++;
        else
        {
            qt++;
        }
        if (a[i] == '\n')
            break;
    }
    printf("%d %d %d %d", zm, sz, kg, qt);

    return 0;
}