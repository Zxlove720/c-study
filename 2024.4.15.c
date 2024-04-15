#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


/*s 中字符的 ASCII 码分别为：'h' = 104 ，'e' = 101 ，'l' = 108 ，'o' = 111 。所以 s 的分数为
| 104 - 101 | +| 101 - 108 | +| 108 - 108 | +| 108 - 111 | = 3 + 7 + 0 + 3 = 13 。*/

int scoreOfString(char* s)
{
    int i = 0;
    int count=0;
    for (i = 0; s[i]; i++)
    {
        if (s[i + 1] == '\0')
        {
            break;
        }
        count += (abs(s[i] - s[i + 1]));
    }
    return count;
}

int main()
{
    char a[50] = {0};
    scanf("%s", a);
    printf("%d", scoreOfString(a));
	return 0;
}


int peakIndexInMountainArray(int* arr, int arrSize)
{
    int i = 0;
    int target = 0;
    int max = 0;
    for (i = 0; i < arrSize; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (i = 0; i < arrSize; i++)
    {
        if (arr[i] == max)
        {
            return max;
        }
    }
    return -1;
}