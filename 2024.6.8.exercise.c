#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////void insertsort(int* arr, int n)
////{
////	int i;
////	int j;
////	int temp;
////	for (i = 1; i < n; i++) // ��ʼ��������Ĵ���,������1��ʼ��ǰ��Ƚ�
////	{
////		if (arr[i] < arr[i - 1]);// �����һ������(��С��)ǰһ��,���������
////		{
////			temp = arr[i];// ��temp��Ҫ�����Ԫ���ݴ�
////			for (j = i - 1; j >= 0 && arr[j] > temp; j--) // ��ʼ��������Ҫ���ƶ�i��ǰһ��Ԫ��
////			{
////				arr[j + 1] = arr[j]; // �ƶ�Ԫ��
////			}
////			arr[j + 1] = temp; // �ɹ�����1��Ԫ��
////		}
////	}
////}
//
//
//void insertsort(int* arr, int n)
//{
//	int i; // ���ڱ�����������Ԫ��
//	int j; // ���ڿ��������ƶ�
//	int temp; // ���ڼ�¼�������Ԫ��
//	for (i = 1; i < n; i++) // ������1��ʼ��Ϊ�˱�����ǰ���Ԫ�ؽ��бȽϣ�
//	{
//		if (arr[i] < arr[i - 1])// ��������Ҫ�����������
//		{
//			temp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j] > temp; j--) // ֻҪ��������������������Ԫ��ǰ��
//			{
//				arr[j + 1] = arr[j]; // Ԫ��ǰ��
//			}
//			arr[j + 1] = temp; // ������һ��Ԫ��
//		}
//	}
//}
//
////���ڱ��Ĳ�������
//void insertssortpro(int* arr, int n)
//{
//	// ��Ƚ�����ͨ�Ĳ����������ֽ�����0�����ڱ�,��ʵҲ����temp�Ĺ���,�������Է�ֹ�±�Խ��
//	int i;
//	int j;
//	for (i = 2; i <= n; i++)
//	{
//		if (arr[i] < arr[i - 1])
//		{
//			arr[0] = arr[i];
//			for (j = i - 1; arr[j] > arr[0]; --j)
//			{
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = arr[0];
//		}
//	}
//}
//
////void insetsortpromax(int* arr, int n)
////{
////	//�������ڱ��������ö��ֲ���ȷ�������λ��
////	int i;
////	int j;
////	int left;
////	int right;
////	int mid;
////	for (i = 2; i <= n; i++)
////	{
////		if (arr[i] > arr[i - 1])
////		{
////			arr[0] = arr[i];
////			left = 1;
////			right = i - 1;
////			while (left <= right)
////			{
////				mid = (left + right) / 2;
////				if (arr[mid] < arr[0])
////				{
////					right = mid - 1;
////				}
////				else
////				{
////					left = mid + 1;
////				}
////			}
////			for (j = i - 1; j >= left; j--)
////			{
////				arr[j + 1] = arr[j];
////			}
////			arr[left] = arr[0];
////		}
////	}
////
////}
//
////void insetsortpromax(int* arr, int n)
////{
////	//�������ڱ��������ö��ֲ���ȷ�������λ��
////	int i;
////	int j;
////	int left;
////	int right;
////	int mid;
////	for (i = 2; i <= n; i++)
////	{
////		if (arr[i] < arr[i - 1])
////		{
////			arr[0] = arr[i];
////			left = 1;
////			right = i - 1;
////			while (left <= right)
////			{
////				mid = (left + right) / 2;
////				if (arr[mid] > arr[0])
////				{
////					right = mid - 1;
////				}
////				else
////				{
////					left = mid + 1;
////				}
////			}
////			for (j = i - 1; j >= left; j--)
////			{
////				arr[j + 1] = arr[j];
////			}
////			arr[left] = arr[0];
////		}
////	}
////}
//
//void insertsortpromax(int* arr, int n)
//{
//	int i;
//	int j;
//	int left;
//	int right;
//	int mid;
//	for (i = 2; i <= n; i++)
//	{
//		if (arr[i] < arr[i - 1])
//		{
//			arr[0] = arr[i];
//			left = 1;
//			right = i - 1;
//			while (left <= right)
//			{
//				mid = (left + right) / 2;
//				if (arr[mid] > arr[0])
//				{
//					right = mid - 1;
//				}
//				else
//				{
//					left = mid + 1;
//				}
//			}
//			for (j = i - 1; j >= left; j--)
//			{
//				arr[j + 1] = arr[j];
//			}
//			arr[left] = arr[0];
//		}
//	}
//}
//
//void displaylist(int* arr, int n)
//{
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[50];
//	int n;
//	printf("����������Ҫ��������?\n");
//	scanf("%d", &n);
//	int i = 0;
//	//�����ڱ���
//	/*for (i = 0; i < n; i++)
//	{
//		printf("�������%d��Ԫ��\n", i + 1);
//		scanf("%d", &arr[i]);
//	}*/
//	for (i = 1; i <= n; i++)
//	{
//		printf("�������%d��Ԫ��\n", i);
//		scanf("%d", &arr[i]);
//	}
//	//insertsort(arr, n);
//	/*insertssortpro(arr, n);*/
//	insertsortpromax(arr, n);
//	displaylist(arr, n);
//	return 0;  
//}

//void shellsort(int* arr, int n)
//{
//	int d;
//	int i;
//	int j;
//	int temp;
//	for (d = n / 2; d >= 1; d /= 2)
//	{
//		for (i = d; i < n; i++)
//		{
//			if (arr[i] < arr[i - d])
//			{
//				temp = arr[i];
//				for (j = i - d; j >= 0 && arr[j] > temp; j -= d)
//				{
//					arr[j + d] = arr[j];
//				}
//				arr[j + d] = temp;
//			}
//		}
//	}
//}

//void shellsort(int* arr, int n)
//{
//	int d;
//	int i;
//	int j;
//	int temp;
//	for (d = n / 2; d >= 1; d /= 2)
//	{
//		for (i = d; i < n; i++)
//		{
//			if (arr[i] > arr[i - d])
//			{
//				temp = arr[i];
//				for (j = i - d; j >= 0 && arr[j] < temp; j -= d)
//				{
//					arr[j + d] = arr[j];
//				}
//				arr[j + d] = temp;
//			}
//		}
//	}
//}
//
//
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;  
//}
//
////void bubblesort(int* arr, int n)
////{
////	int i;
////	int j;
////	for (i = 0; i < n - 1; i++)
////	{
////		bool flag = false;
////		for (j = n - 1; j > i; j--)
////		{
////			if (arr[j] > arr[j - 1])
////			{
////				int temp = arr[j - 1];
////				arr[j - 1] = arr[j];
////				arr[j] = temp;
////				flag = true;
////			}
////		}
////		if (!flag)
////		{
////			return;
////		}
////	}
////}
//
//
//void bubblesort(int* arr, int n)
//{
//	int i;
//	int j;
//	for (i = 0; i < n - 1; i++)
//	{
//		bool flag = false;
//		for (j = n - 1; j > i; j--)
//		{
//			if (arr[j] < arr[j - 1])
//			{
//				flag = true;
//				swap(&arr[j], &arr[j - 1]);
//			}
//		}
//		if (!flag)
//		{
//			return;
//		}
//	}
//
//
//}
//
//

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

void insertsort(int* arr, int n)
{
	int i;
	int j;
	int temp;
	int low;
	int high;
	int mid;
	for (i = 1; i < n; i++)
	{
		low = 0;
		high = i - 1;
		if (arr[i] < arr[i - 1])
		{
			temp = arr[i];
			while (low <= high)
			{
				mid = (low + high) / 2;
				if (arr[mid] > temp)
				{
					high = mid - 1;
				}
				else
				{
					low = mid + 1;
				}
			}
			for (j = i - 1; j >= low; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[low] = temp;
		}
	}
}

//void shellsort(int* arr, int n)
//{
//	int d;
//	int i;
//	int j;
//	int temp;
//	for (d = n / 2; d >= 1; d /= 2)
//	{
//		for (i = d; i < n; i++)        
//		{                              
//			if (arr[i] > arr[i - d])   
//									   
//			{
//				temp = arr[i];
//				for (j = i; j >= d && arr[j - d] > temp; j-=d)
//				{
//					arr[j] = arr[j - d];
//				}
//				arr[j] = temp;
//
//			}
//		}
//	}
//}



//void shellsort(int* arr, int n)
//{
//	int d;
//	int i;
//	int j;
//	for (d = n / 2; d >= 1; d /= 2)
//	{
//		for (i = d; i < n; i++)
//		{
//			if (arr[i] < arr[i - d])
//			{
//				int temp = arr[i];
//				for (j = i; j >= d && arr[j - d] > temp; j -= d)
//				{
//					arr[j] = arr[j - d];
//				}
//				arr[j] = temp;
//			}
//		}
//	}
//
//}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//void bubblesort(int* arr, int n)
//{
//	int i;
//	int j;
//	for (i = 0; i < n - 1; i++)
//	{
//		bool flag = false;
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(&arr[j], &arr[j + 1]);
//				flag = true;
//			}
//		}
//		if (!flag)
//		{
//			return;
//		}
//	}
//
//}


//void bubblesort(int* arr, int n)
//{
//	int i;
//	int j;
//	for (i = 0; i < n - 1; i++)
//	{
//		bool flag = false;
//		for (j = n - 1; j > i; j--)
//		{
//			
//			if (arr[j] < arr[j - 1])
//			{
//				swap(&arr[j], &arr[j - 1]);
//				flag = true;
//			}
//		}
//		if (!flag)
//		{
//			return;
//		}
//	}
//}

int partition(int* arr, int low, int high)
{
	int pivot = arr[low];
	while (low < high)
	{                                             
		while (low < high && arr[high] <= pivot)  				  				  
		{
			high--;
		}
		arr[low] = arr[high];
		while (low < high && arr[low] >= pivot)
		{
			low++;
		}
		arr[high] = arr[low];
	}
	arr[low] = pivot;
	return low;
}

void my_qsort(int* arr, int low, int high)
{
	if (low < high)
	{
		int position = partition(arr, low, high);
		my_qsort(arr, low, position - 1);
		my_qsort(arr, position + 1, high);
	}
}

void display(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[50];
	int i;
	printf("��������Ҫһ�����������?\n");
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("�������%d��Ԫ��\n", i + 1);
		scanf("%d", &arr[i]);
	}
	//insertsort(arr, n);
	//shellsort(arr, n);
	//bubblesort(arr, n);
	int low = 0;
	int high = n - 1;
	my_qsort(arr, low, high);
	display(arr, n);
	return 0;
}