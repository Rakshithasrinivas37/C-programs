#include<stdio.h>

int main()
{
    short int num; 
    short int bit;
    printf("Enter number: ");
    scanf("%hd", &num);
    printf("Enter bit: ");
    scanf("%d", &bit);
    printf("Before set: ");
    for(int i = 15;i >= 0;i--)
    {
        if(num>>i & 1)
        {
            printf("1");
        }
        else{
            printf("0");
        }
    }
    num = num | ((1<<bit) - 1);
    num = num & ((1<<bit) - 1);
    printf("\nAfter toggling: ");
    for(int i = 15;i >= 0;i--)
    {
        if(num>>i & 1)
        {
            printf("1");
        }
        else{
            printf("0");
        }
    }
}