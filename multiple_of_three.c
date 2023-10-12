#include<stdio.h>

int multiple_of_three(int num)
{
    int count_even = 0, count_odd = 0;
    for(int i = 0;i <= 31;i++)
    {
        if(i%2 == 0 && num>>i & 1)
        {
            count_even++;
        }
        else if(i%2 != 0 && num>>i & 1)
        {
            count_odd++;
        }
    }
    if((count_even - count_odd)%3 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int res = multiple_of_three(num);
    if(res == 1)
    {
        printf("Multiple of three\n");
    }
    else{
        printf("Not multiple of three\n");
    }
}