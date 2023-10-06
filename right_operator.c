#include<stdio.h>

void right_shift(char num, int bits)
{
    for(int i = 0;i < bits;i++)
    {
        num = num/2;
    }
    printf("\nAfter shift: ");
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
}

int main()
{
    char num;
    int bits;
    printf("Enter number: ");
    scanf("%hhd", &num);
    printf("Enter bit value: ");
    scanf("%d", &bits);
    printf("Before shift: ");
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
    right_shift(num, bits);
}