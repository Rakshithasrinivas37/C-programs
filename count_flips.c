#include<stdio.h>

int count_flips(int num1, int num2)
{
    int count = 0;
    int num = num1 ^ num2;
    int i = 0;
    while(num > 0)
    {
        if(num>>i & 1)
        {
            count++;
        }
        i++;
        num = num >> 1;
    }
    return count;
}

int main()
{
    int num1, num2;
    printf("Enter numbers: ");
    scanf("%d%d", &num1, &num2);
    int count = count_flips(num1, num2);
    printf("No. of flips: %d\n", count);
}