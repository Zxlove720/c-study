#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

////void insertsort(int* arr, int n)
////{
////	int i;
////	int j;
////	int temp;
////	for (i = 1; i < n; i++) // 开始插入排序的代码,从索引1开始和前面比较
////	{
////		if (arr[i] < arr[i - 1]);// 如果后一个大于(或小于)前一个,则进入排序
////		{
////			temp = arr[i];// 用temp将要排序的元素暂存
////			for (j = i - 1; j >= 0 && arr[j] > temp; j--) // 开始根据排序要求移动i的前一个元素
////			{
////				arr[j + 1] = arr[j]; // 移动元素
////			}
////			arr[j + 1] = temp; // 成功排序1个元素
////		}
////	}
////}
//
//
//void insertsort(int* arr, int n)
//{
//	int i; // 用于遍历整个数组元素
//	int j; // 用于控制数组移动
//	int temp; // 用于记录待排序的元素
//	for (i = 1; i < n; i++) // 从索引1开始（为了便于与前面的元素进行比较）
//	{
//		if (arr[i] < arr[i - 1])// 满足排序要求，则进入排序
//		{
//			temp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j] > temp; j--) // 只要满足排序条件，则所有元素前移
//			{
//				arr[j + 1] = arr[j]; // 元素前移
//			}
//			arr[j + 1] = temp; // 排序完一个元素
//		}
//	}
//}
//
////带哨兵的插入排序
//void insertssortpro(int* arr, int n)
//{
//	// 相比较于普通的插入排序，这种将索引0当作哨兵,其实也就是temp的功能,但还可以防止下标越界
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
////	//引入了哨兵，并且用二分查找确定其插入位置
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
////	//引入了哨兵，并且用二分查找确定其插入位置
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
//	printf("请输入你想要多大的数组?\n");
//	scanf("%d", &n);
//	int i = 0;
//	//不带哨兵的
//	/*for (i = 0; i < n; i++)
//	{
//		printf("请输入第%d个元素\n", i + 1);
//		scanf("%d", &arr[i]);
//	}*/
//	for (i = 1; i <= n; i++)
//	{
//		printf("请输入第%d个元素\n", i);
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
	printf("请输入想要一个多大是数组?\n");
	int n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d个元素\n", i + 1);
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