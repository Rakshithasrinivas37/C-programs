#include<stdio.h>

void power_of_2(int num)
{
    if(num & num - 1)
    {
        printf("False\n");
    }
    else{
        printf("True\n");
    }
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    power_of_2(num);
}