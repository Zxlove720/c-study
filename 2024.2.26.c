#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>

int main()
{
	//�����ʼ��
	int n;
	scanf("%d", &n);
	int array[500];
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	//�����ֵ
	int max = array[0];
	for (i = 1; i < n; i++)
	{
		if (max < array[i])
		{
			max = array[i];
		}
	}
	printf("����������ֵ��%d\n", max);

	//ð������
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}

	//���ֲ���
	printf("����������Ҫ���ҵ�ֵ-->\n");
	int check;
	scanf("%d", &check);
	int left = 0;
	int right = n - 1;
	int flag = 0;
	while (left <= right)
	{
		int mid = (right + left) / 2;
		if (array[mid] > check)
		{
			right = mid - 1;
		}
		else if (array[mid] < check)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ���%d���±���%d\n", check, mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("�Ҳ���������������\n");
	}
	//��������
	for (i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	system("pause");
	return 0;
}