#include<stdio.h>

int count_bits(int num)
{
    int count = 0;
    if(num == 0)
    {
        return 0;
    }
    else if(num & 1)
        count = 1 + count_bits(num>>1);
    else
        count_bits(num>>1);
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int res = count_bits(num);
    printf("No. of set bits: %d\n", res);
}