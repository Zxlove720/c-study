#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    int fib(int i);
    int n = 0;
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}
int fib(int n) 
{
    //台阶为1,2时走法分别1，2种 1:(1) 2:(1,1),(2)
    //要走完n阶时，即我第一步要么走的1阶，要么就是2阶，   eg:      上3阶 
    //若第一步是走1阶的时候，那么还剩n-1个台阶          第一步：走1阶，剩余2阶
    //若第一步是走2阶的时候，那么还剩n-2个台阶          第一步：走2阶，剩余1阶
    //即转变为求我走1阶剩余台阶的走法+走2阶时剩余台阶的走法，即可递推到走最后一步的走法有多少种
    return n <= 2 ? n : fib(n - 1) + fib(n - 2);
}
