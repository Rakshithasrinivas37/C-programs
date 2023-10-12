#include<stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int temp = num, count = 0;
    int max = num%10;
    int min = num %10;
    int val1, val2;
    while(num)
    {
        int rem = num%10;
        count++;
        if(rem >= max)
        {
            max = rem;
            val1 = count;
        }
        if(rem < min)
        {
            min = rem;
            val2 = count;
        }
        num = num/10;
    }
    int newnum = 0, limit = 1;
    for(int i = 1;i <= count;i++)
    {
        int rem = temp %10;
        if(i == val1)
        {
            newnum = min * limit + newnum;
        } 
        else if(i == val2)
        {
            newnum = max * limit + newnum;
        }
        else{
            newnum = rem * limit + newnum;
        }
        limit = limit * 10;
        temp = temp/10;
    }
    printf("After swapping digits: num = %d\n", newnum);
}