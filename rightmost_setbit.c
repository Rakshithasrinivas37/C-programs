#include<stdio.h>

int main()
{
    char num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i  = 7;i >= 0;i--)
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
    int rightmost_bit = num & -num;
    int res = num & rightmost_bit;
    for(int i  = 7;i >= 0;i--)
    {
        if(res>>i & 1)
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