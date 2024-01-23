#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	FILE* f = fopen("zxl.txt", "w");
//	fputs("I LOVE YOU ", f);
//	fclose(f);
//	f = NULL;
//	{
//		FILE* f = fopen("zxl.txt", "r");
//		char F[50];
//		fgets(F, 50, f);
//		printf("%s", F);
//		fclose(f);
//		f = NULL;
//	}
//	return 0;
//}
//int main()
//{
//	FILE* pf = fopen("zxl.txt", "r");
//	/*fprintf(pf, "WZB");*/
//	char arr[10];
//	int i = 0;
//	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
//	{
//		fscanf(pf, "%s", arr);
//		printf("%s", arr);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
struct peo
{
	char name[20];
	int age;
	char sex[5];
	int num;
};
int main()
{
	struct peo p1 = { 0 };
	FILE* PF = fopen("peo.txt", "r");
	fscanf(PF,"%s%d%s%d", p1.name, (&p1.age), p1.sex, (&p1.num));
	fclose(PF);
	PF = NULL;
	printf("%s,%d,%s,%d", p1.name, p1.age, p1.sex, p1.num);
}
