#define _CRT_SECURE_NO_WARNINGS

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("FILE=%s,DATE=%s,LINE=%ld,TIME=%s,arr=%d\n", __FILE__, __DATE__, __LINE__, __TIME__, arr[i]);
//	}
//	return 0;
//}
//基础的define定义
//#define num 3
//int main()
//{
//	printf("%d", num);
//	return 0;
//}
//基本的宏定义
//#define sum(a,b) a+b
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	printf("%d", sum(x, y));
//	return 0;
//}
//#define sz(type) sizeof(type)
//int main()
//{
//	printf("%d", (int)sz(int));
//	return 0;
//}
//#define pt(type) sizeof(type))
//int main()
//{
//	printf("%d", (int)pt(int);
//	return 0;
//}
//#define a printf("hehe")
//int main()
//{
//	a;
//	return 0;
//}
//#define sz(type) printf("hehe\t"#type"的大小为%d\n",(int)sizeof(type))
//int main()
//{
//	sz(char);
//
//	return 0;
//}
//#define num(a,type) printf("thenumberis"#a"="#type,a)
//int main()
//{
//	num(2,%d);
//	return 0;
//}
//#define like(a,b) a##b
//int main()
//{
//	int zxl = 520;
//	printf("%d", like(zx, l));
//	return 0;
//}
int main()
{
#if 2==3
	printf("haha");
#endif
#if 2!=3
	printf("hehe");
#endif
}
//用#的方式来实现奇偶数的输出
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i <= n; i++)
//#if (0)
//	{
//
//		if(i%2==0)
//		printf("%d ", i);
//	}
//#endif
//	return 0;
//}









//字符串函数
#include<string.h>
#include<errno.h>
#include<stdlib.h>
//strlen函数
//mystrlen函数
//size_t my_strlen(char* a)
//{
//	int count = 0;
//	while (*a != '\0')
//	{
//		count++;
//		a++;
//	}
//	return count;
//}
//int main()
//{
//	char *a = "abcdefg";
//	//printf("%d", (int)strlen(a));
//	printf("%d", (int)my_strlen(a));
//	return 0;
//}

//strcpy函数
//int main()
//{
//	char a[20] = {0};
//	strcpy(a, "abcdefg");
//	printf("%s", a);
//}

//my_strcpy
//char* my_strcpy(char* a, char* b)
//{
//	char* ret = a;
//	while (*a++ = *b++)
//		;
//	return ret;
//}
//int main()
//{
//	char a[20];
//	char* b = "abcdefg";
//	my_strcpy(a, b);
//	printf("%s", a);
//	return 0;
//}


//strcat函数
//int main()
//{
//	char a[20] = "abcdefg\n";
//	strcat(a, "hijklmn");
//	printf("%s",a);
//	return 0;
//}
//int main()
//{
//	char a[50] = "abcdefg\n";
//	char b[20] = "hijklmn";
//	strcat(a, b);
//	printf("%s", a);
//	return 0;
//}

//my_strcat函数
//char* my_strcat(char* a, char* b)
//{
//	char* ret = a;
//	while (*a != '\0')
//		a++;
//	while (*b != '\0')
//	{
//		*a = *b;
//		*a++;
//		*b++;
//	}
//		;
//	return ret;
//}
//int main()
//{
//	char a[20] = "abcdefg\n";
//	char b[10] = "hijklmn";
//	printf("%s", my_strcat(a, b));
//	return 0;
//}


//比较两个字符串的长度
//int compare(char* a, char* b)
//{
//	if (strlen(a) > strlen(b))
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char a[10] = "abcdefg";
//	char b[10] = "hijksasda";
//	if (compare(a, b))
//	{
//		printf("a");
//	}
//	else
//		printf("b");
//	return 0;
//}