#include<stdio.h>

int main()
{
    int A, B, N;
    scanf("%d%d%d", &A, &B, &N);

    int count = 0;
    while(A <= N)
    {
        A += B;
        count++;
    }
    printf("%d\n", count);
}