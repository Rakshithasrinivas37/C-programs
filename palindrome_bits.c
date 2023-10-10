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
    char num = 0b10000001;
    char res = reverse_bits(num); 
    if(num ^ res)
    {
        printf("Its not palindrome\n");
    }
    else
    {
        printf("Its palindrome\n");
    }
}