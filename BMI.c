#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("��ӭʹ��BMI�Բ�\n");
	printf("�����������ߣ�m�������أ�kg��\n");
	float tall;
	float weight;
	scanf("%f%f", &tall, &weight);
	float BMI = weight / (tall * tall);
	printf("���BMI�� %.2f\n", BMI);
	if (BMI < 18.5 && BMI>0)
	{
		printf("ƫ��\n");
	}
	else if (BMI >= 18.5 && BMI < 23.9)
	{
		printf("����\n");
	}
	else if (BMI >= 23.9 && BMI < 27.9)
	{
			printf("����\n");
	}
	else if (BMI >= 27.9 && BMI <= 70)
	{
			printf("����\n");
	}
	else if (BMI <= 0 || BMI >= 70)
	{
			printf("�������\n");
	}
	return 0;
}