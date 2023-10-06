#include<stdio.h>

int main()
{
    char num = 0b11100110;
    char num1, num2;

    num1 = num>>1 & 0b01010101;
    num2 = num<<1 & 0b10101010;

    num = num1 | num2;

    for(int i = 7;i >= 0;i--)
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