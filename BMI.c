#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("欢迎使用BMI自测\n");
	printf("请输入你的身高（m）和体重（kg）\n");
	float tall;
	float weight;
	scanf("%f%f", &tall, &weight);
	float BMI = weight / (tall * tall);
	printf("你的BMI是 %.2f\n", BMI);
	if (BMI < 18.5 && BMI>0)
	{
		printf("偏瘦\n");
	}
	else if (BMI >= 18.5 && BMI < 23.9)
	{
		printf("正常\n");
	}
	else if (BMI >= 23.9 && BMI < 27.9)
	{
			printf("超重\n");
	}
	else if (BMI >= 27.9 && BMI <= 70)
	{
			printf("肥胖\n");
	}
	else if (BMI <= 0 || BMI >= 70)
	{
			printf("输入错误\n");
	}
	return 0;
}