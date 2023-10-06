#include<stdio.h>
#include<math.h>

int isRepeated(int num)
{
    int rem, p = 1;
    int count = 0;
    while(num)
    {
        rem = num % 10;
        p = p * rem;
        num = num/10;
        count++;
    }
    if((int)pow(rem, count) == p && count != 0)
    {
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    for(int i = 1;i < 1000;i++)
    {
        if(isRepeated(i))
        {
            printf("%d ", i);
        }
    }
}