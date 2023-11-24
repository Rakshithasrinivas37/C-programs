#include<stdio.h>

int main()
{
    int N, K;
    scanf("%d%d", &N, &K);

    int count = 0;
    for(int i = 1;i <= N;i++)
    {
        if((i ^ K) > (i & K))
        {
            count++;
        }
    }
    printf("%d\n", count);
}