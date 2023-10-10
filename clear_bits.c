#include<stdio.h>

int main()
{
    char num, k;
    printf("Enter num and k values: ");
    scanf("%hhd%hhd", &num, &k);
    printf("Before clear: ");
    for(int i = 7;i >= 0;i--)
    {
        if(num>>i & 1)
        {
            printf("1");
        }
        else{
            printf("0");
        }
    }
    num = num & (1<<7-k)-1;
    printf("\nAfter clear: ");
    for(int i = 7;i >= 0;i--)
    {
        if(num>>i & 1)
        {
            printf("1");
        }
        else{
            printf("0");
        }
    }
    printf("\n");
}