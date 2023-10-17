#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < (n-(i+1));j++)
        {
            printf(" ");
        }
        for(int k = 0;k <= i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i = n;i < (n*2) - 1;i++)
    {
        int j;
        for(j = 0;j < ((i - n)+1);j++)
        {
            printf(" ");
        }
        for(int k = 0;k < n-j;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}