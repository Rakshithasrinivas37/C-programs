#include<stdio.h>

int alternate_bits(char num)
{
    int res = 0;
    for(int i = 0;i < 8;i=i+2)
    {
        if(((num>>i & 1) ^ (num>>(i+1) & 1)) == 1)
        {
            res = 1;
        }
        else{
            return 0;
        }
    }
    return res;
}

int main()
{
    char num = 0b10101010;
    int res = alternate_bits(num);
    if(res == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}