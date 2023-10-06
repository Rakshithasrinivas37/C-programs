#include<stdio.h>

int main()
{
    short int num; 
    short int bit = 3;
    printf("Enter number: ");
    scanf("%hd", &num);
    printf("Before toggling: ");
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
    num = num ^ (1<<bit);
    bit = 5;
    num = num ^ (1<<bit);
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