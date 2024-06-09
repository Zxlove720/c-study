#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// sort exercise

int* creatarray(int* size)
{
	printf("����Ҫһ����������?\n");
	scanf("%d", size);
	int* array = (int*)malloc(sizeof(int) * *size);
	if (array == NULL)
	{
		printf("NULL\n");
		return NULL;
	}
	int i;
	for (i = 0; i < *size; i++)
	{
		printf("�������%d��Ԫ��\n", i + 1);
		scanf("%d", &array[i]);
	}
	return array;
}

void displaylist(int* arr, int size)
{
	int i = 0;
	for (i = 1; i <= size; i++)
	{
		printf("%d ", arr[i]);
	}
}

void insertsort(int* arr, int size)
{
	if (arr == NULL)
	{
		return;
	}
	int i;
	int j;
	int temp;
	int low;
	int high;
	int mid;
	for (i = 1; i < size; i++)
	{
		if (arr[i] > arr[i - 1])
		{
			temp = arr[i];
			low = 0;
			high = i - 1;
			while (low <= high)
			{
				mid = (low + high) / 2;
				if (arr[mid] < temp)
				{
					high = mid - 1;
				}
				else
				{
					low = mid + 1;
				}
			}
			for (j = i - 1; j >= low && arr[j] < temp; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[low] = temp;
		}
	}
}

//void insertsort(int* arr, int n)
//{
//	int i;
//	int j;
//	int temp;
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] < arr[i - 1])
//		{
//			temp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j] > temp; j--)
//			{
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = temp;
//		}
//	}
//}

//void shellsort(int* arr, int size)
//{
//	int d;
//	int i;
//	int j;
//	int temp;
//	for (d = size / 2; d >= 1; d /= 2)
//	{
//		for (i = d; i < size; i++)
//		{
//			if (arr[i] < arr[i - d])
//			{
//				temp = arr[i];                                   
//				for (j = i; j >= d && arr[j - d] > temp; j -= d) 
//				{                                                
//					arr[j] = arr[j - d];						 
//				}
//				arr[j] = temp;
//			}
//		}
//	}
//}

void shellsort(int* arr, int size)
{
	int d;
	int i;
	int j;
	int temp;
	for (d = size / 2; d >= 1; d /= 2)
	{
		for (i = d; i < size; i++)
		{
			if (arr[i] < arr[i - d])
			{
				temp = arr[i];
				for (j = i; j >= d && arr[j - d] > temp; j -= d)
				{
					arr[j] = arr[j - d];
				}
				arr[j] = temp;
			}
		}
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int* arr, int size)
{
	int i;
	int j;
	for (i = 0; i < size - 1; i++)
	{
		bool flag = false;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
				flag = true;
			}
		}
		if (!flag)
		{
			return;
		}
	}

}

//int partition(int* arr, int low, int high)
//{
//	int key = arr[low];
//	while (low < high)
//	{
//		while (low < high && arr[high] >= key)
//		{
//			high--;
//		}
//		arr[low] = arr[high];
//		while (low < high && arr[low] <= key)
//		{
//			low++;
//		}
//		arr[high] = arr[low];
//
//	}
//	arr[low] = key;
//	return low;
//}
//
//void my_qsort(int* arr, int  low, int high)
//{
//	if (low < high)
//	{
//		int position = partition(arr, low, high);
//		my_qsort(arr, low, position - 1);
//		my_qsort(arr, position + 1, high);
//	}
//}

int partition(int* arr, int low, int high)
{
	int key = arr[low];
	while (low < high)
	{
		while (low < high && arr[high] >= key)
		{
			high--;
		}
		arr[low] = arr[high];
		while (low < high && arr[low] <= key)
		{
			low++;
		}
		arr[high] = arr[low];
	}
	arr[low] = key;
	return low;
}

my_qsort(int* arr, int low, int high)
{
	if (low < high)
	{
		int position = partition(arr, low, high);
		my_qsort(arr, low, position - 1);
		my_qsort(arr, position + 1, high);
	}
}

//void choosesort(int* arr, int size)
//{
//	int max;
//	int i;
//	int j;
//	for (i = 0; i < size - 1; i++)
//	{
//		max = i;
//		for (j = i + 1; j < size; j++)
//		{
//			if (arr[j] > arr[max])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			swap(&arr[i], &arr[max]);
//		}
//	}
//}

void choosesort(int* arr, int size)
{
	int i;
	int j;
	int min;
	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&arr[i], &arr[min]);
		}
	}
}


//void headadjust(int* arr, int place, int size)
//{
//	arr[0] = arr[place];  // ������0�����ͷλ�õ�Ԫ��
//	int i;
//	for (i = 2 * place; i <= size; i *= 2)  // ���ղ������Ѱ��
//	{ 
//		if (i < size && arr[i] < arr[i + 1])  // ����õ��������û����������
//		{
//			i++; // ѡ��������
//		}
//		if (arr[0] >= arr[i])  // �����ǰ��ͷ������������������˳�ѭ��
//		{
//			break;
//		}
//		else
//		{
//			arr[place] = arr[i];      // ��ͷλ��Ԫ�ظ�Ϊi���ڵ�λ�õ�Ԫ�أ����ģ�
// 			place = i;                // ��ǰλ����i
//		} 
//	}
//	arr[place] = arr[0];              // ��ǰλ�ð�ԭ����Ԫ�ش���
// }
//
//void buildmaxheap(int* arr, int size)
//{
//	int i;
//	for (i = size / 2; i > 0; i--)//���������
//	{
//		headadjust(arr, i, size);
//	}
//}
//
//void heapsort(int* arr, int size)
//{
//	buildmaxheap(arr, size); //�Ƚ���һ�������
//	int i;
//	for (i = size; i > 1; i--)
//	{
//		swap(&arr[i], &arr[1]);// �����һ��Ԫ�غ͵�һ��Ԫ�ؽ������ﵽ�������е�Ч��
//		headadjust(arr, 1, i - 1);//ÿ�ν��������Ƿ��Ǵ����
//	}
//}

//void headadjust(int* arr, int k, int size)
//{
//	arr[0] = arr[k];
//	int i;
//	for (i = 2 * k; i <= size; i *= 2) // ��ʼ������
//	{
//		if (i < size && arr[i] < arr[i + 1]) // ȷ����������
//		{
//			i++; //������������������������
//		}
//		if (arr[i] <= arr[0])
//		{
//			break;
//		}
//		else
//		{
//			arr[k] = arr[i];
//			k = i;
//		}
//	}
//	arr[k] = arr[0];
//}
//
//void buildmaxheap(int* arr, int size)
//{
//	int i;
//	for (i = size / 2; i > 0; i--)
//	{
//		headadjust(arr, i, size);
//	}
//}
//
//void heapsort(int* arr, int size)
//{
//	buildmaxheap(arr, size);
//	int i;
//	for (i = size; i > 1; i--)
//	{
//		swap(&arr[1], &arr[i]);
//		headadjust(arr, 1, i - 1);
//	}
//}

void headadjust(int* arr, int k, int size)
{
	arr[0] = arr[k];
	int i;
	for (i = k * 2; i <= size; i *= 2)
	{
		if (i < size && arr[i] < arr[i + 1])
		{
			i++;
		}
		if (arr[0] > arr[i])
		{
			break;
		}
		else
		{
			arr[k] = arr[i];
			k = i;
		}
	}
	arr[k] = arr[0];

}

void buildmaxheap(int* arr, int size)
{
	int i;
	for (i = size / 2; i > 0; i--)
	{
		headadjust(arr, i, size);
	}
}

void heapsort(int* arr, int size)
{
	buildmaxheap(arr, size);
	int i;
	for (i = size; i > 1; i--)
	{
		swap(&arr[1], &arr[i]);
		headadjust(arr, 1, i - 1);
	}
}

int main()
{
	//int* arr = creatarray(&size);
	//insertsort(arr, size);
	//shellsort(arr, size);
	//bubblesort(arr, size);
		//int low = 0;
		//int high = size - 1; 
		//my_qsort(arr, low, high);
	//choosesort(arr, size);
	printf("����������Ҫ��������?\n");
	int n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL)
	{
		return -1;
	}
	int i;
	for (i = 1; i <= n; i++)
	{
		printf("�������%d��Ԫ��\n", i);
		scanf("%d", &arr[i]);
	}
	heapsort(arr, n);
	displaylist(arr, n);
}