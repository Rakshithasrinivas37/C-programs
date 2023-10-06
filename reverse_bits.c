#include<stdio.h>

char reverse_bits(char num)
{
    char reverse = 0;
    for(int i = 0;i < 8;i++)
    {
        reverse = reverse<<1;
        reverse = reverse | (num & 1);
        num = num>>1;
    }
    return reverse;
}

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
    char res = reverse_bits(num); 
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