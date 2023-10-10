#include<stdio.h>

int main()
{
    char num;
    printf("Enter number: ");
    scanf("%hd", &num);
    int bits;
    printf("Enter number of bits: ");
    scanf("%d", &bits);
    num = num & ((1<<bits) - 1);
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