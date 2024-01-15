#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<errno.h>
#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("zxl.docx", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return -1;
//	}
//	char a[20];
//	fscanf(pf, "%s", a);
//	printf("%s", a);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//my_strlen(char* a)
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
//	//my_strlen
//	char* a = "abcdef";
//	printf("%d", my_strlen(a));
//
//	return 0;
//}


//void my_strcpy(char* a, char* b)
//{
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	my_strcpy;
//	char a[20];
//	char b[10] = "abcdefg";
//	my_strcpy(a, b);
//	printf("%s", a);
//	return 0;
//}


//char* my_strcat(char* a, char* b)
//{
//	char* temp = a;
//	while (*a != '\0')
//	{
//		a++;
//	}
//	while (*a++ = *b++)
//	{
//		;
//	}
//	return temp;
//}
//
//int main()
//{
//	char a[20] = "abcd";
//	char b[10] = "efgh";
//	my_strcat(a, b);
//	printf("%s", a);
//	return 0;
//}

int my_strcmp(char* a, char* b)
{
	while (*a == *b && *a!='\0')
	{
		a++;
		b++;
	}
	if (*a == *b)
	{
		return 0;
	}
	return *a - *b;

}

int main()
{
	char* a = "abcdz";
	char* b = "abcde";
	int ret = my_strcmp(a, b);
	if (ret > 0)
	{
		printf(">");
	}
	else if (ret == 0)
	{
		printf("=");
	}
	else
	{
		printf("<");
	}
	return 0;
}