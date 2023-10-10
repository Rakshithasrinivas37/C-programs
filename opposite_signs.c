#include<stdio.h>
#include<stdbool.h>

bool opposite_signs(int num1, int num2)
{
    if(((num1>>31 & 1) && ((num2>>31 & 1) == 0)) || ((num2>>31 & 1) && ((num1>>31 & 1) == 0)))
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int num1, num2;
    printf("Enter numbers: ");
    scanf("%d%d", &num1, &num2);
    bool res = opposite_signs(num1, num2);
    if(res == 1)
    {
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}