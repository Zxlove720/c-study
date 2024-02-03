#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void solve(void) {
    /*********Begin*********/
    int i = 200;
    for (i = 200; i <= 3000; i++)
    {
        if (i < 1000 && i >= 200)
        {
            if (i % 10 == i / 100)
                printf("%d\n", i);
        }
        if (i >= 1000)
        {
            if (i % 10 == i / 1000 && (i / 10) % 10 == (i / 100) % 10)
                printf("%d\n", i);
        }


    }
    /*********End**********/
}
int main(void)
{
    solve();
    return 0;
}
