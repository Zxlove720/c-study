#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//�������� ����
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n /= 10;
//	}
//	return 0;
//}


//�������� ����
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int temp = 0;
//	while (n)
//	{
//		temp = temp * 10 + (n % 10);
//		n /= 10;
//	}
//	while (temp)
//	{
//		printf("%d ", temp % 10);
//		temp /= 10;
//	}
//	return 0;
//}


//���Լ������С�������������棩
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	int temp = a * b;
//	for (i = (a > b ? a : b); i >= 1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("���Լ����%d\n", i);
//			printf("��С��������%d", temp / i);
//			return 0;
//		}
//	}
//	return 0;
//}


//���Լ������С��������շת�������

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
//
//	}
//	printf("���Լ����%d\n",b);
//	printf("��С��������%d\n",temp/b );
//	return 0;
//}


//��׳�
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int e = 1;
//	for (i = 1; i <= n; i++)
//	{
//		e *= i;
//	}
//	printf("%d", e);
//
//
//	return 0;
//}

//��׳˵ĺ�
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int e = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		e *= i;
//		sum += e;
//	}
//	printf("%d\n", e);
//	printf("%d\n", sum);
//	return 0;
//}


//ͳ���ַ���

//int main()
//{
//	char a;
//	int sz, zm, kg, qt;
//	sz = 0;
//	zm = 0;
//	kg = 0;
//	qt = 0;
//	while (1)
//	{
//		a = getchar();
//		if (a == '\n')
//		{
//			break;
//		}
//		if (a >= '0' && a <= '9')
//		{
//			sz++;
//		}
//		else if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
//		{
//			zm++;
//		}
//		else if (a == ' ')
//		{
//			kg++;
//		}
//		else
//		{
//			qt++;
//		}
//		
//
//	}
//	printf("sz=%d,zm=%d,kg=%d,qt=%d", sz, zm, kg, qt);
//
//
//	return 0;
//}


//a+aa+aaa+aaaa

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int x;
//	printf("�Ӽ���?\n");
//	scanf("%d", &x);
//	long long temp = 0;
//	int i = 1;
//	long long sum = 0;
//	for (i = 1; i <= x; i++)
//	{
//		temp = temp * 10 + n;
//		sum += temp;
//	}
//	printf("%lld", sum);
//	return 0;
//}


//����ɾ�����ֵ
//int main()
//{
//	int arr[1000];
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] > arr[max])
//		{
//			max = i;
//		}
//	}
//	for (i = max; i < n - 1; i++)
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

int main()
{
	/*char a = '1', b = '2';
	printf("%c,", b++);
	printf("%d\n", b - a);*/
	//char* a = "asdasd";
	//printf("%s", a);
	/*int ab.c; */
	//printf("%%d%d", 123);
}