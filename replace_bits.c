#include<stdio.h>

int main()
{
    int num1 = 14, num2 = 16, p1 = 0, p2 = 4, n = 2;
    int mask1, mask2;
    mask1 = ((1<<n) - 1) << p1;
    num1 = num1 & mask1;

    mask2 = ~((1<<n) - 1) << p2;
    num2 = num2 & mask2;

    num2 = (num1 << p2-p1) | num2;
    printf("%d\n", num2);

}