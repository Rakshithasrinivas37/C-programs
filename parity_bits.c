#include<stdio.h>

int main()
{
    char num = 0b00110111;
    int count = 0;
    for(int i = 0;i < 8;i++)
    {
        if(num>>i & 1)
        {
            count++;
        }
    }
    if(count%2 == 0)
    {
        printf("Even parity\n");
    }
    else{
        printf("Odd parity\n");
    }
}