#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* f = fopen("zxl.txt", "a");
	if (f == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	fputs("  wzb love zxl", f);
	fclose(f);
	f = NULL;
	return 0;
}