#include<stdio.h>

int main()
{
    char num;
    printf("Enter num: ");
    scanf("%hd", &num);
    int k;
    printf("Enter k: ");
    scanf("%d", &k);
    printf("Before rotate: ");
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
    for(int i = 0;i < k;i++)
    {
        int num1 = num>>7 & 1;
        num = num << 1;
        num = num | num1;
    }
    printf("\nAfter rotate: ");
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