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
//������define����
//#define num 3
//int main()
//{
//	printf("%d", num);
//	return 0;
//}
//�����ĺ궨��
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
//#define sz(type) printf("hehe\t"#type"�Ĵ�СΪ%d\n",(int)sizeof(type))
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
//int main()
//{
//#if 2==3
//	printf("haha");
//#endif
//#if 2!=3
//	printf("hehe");
//#endif
//}
//��#�ķ�ʽ��ʵ����ż�������
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