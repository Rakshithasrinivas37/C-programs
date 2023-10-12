#include<stdio.h>

int main()
{
    char num = 0b10101100;
    int n = 3, pos = 2;
    char mask = (1<<n) - 1;
    mask = mask << pos;
    num = num & mask;
    num = num >> pos;
    for(int i = 2;i >= 0;i--)
    {
        if(num>>i & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}