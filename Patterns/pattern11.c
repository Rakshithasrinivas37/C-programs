#include<stdio.h>

int main()
{
    int n = 7;
    int even, odd = 1;
    for(int i = 0;i < n;i++)
    {
        even = 2;
        for(int j = 0;j <= i;j++)
        {
            if(i%2 == 0 && j%2 == 0)
            {
                printf("* ");
            }
            else if(i%2 != 0)
            {
                printf("%d ", odd);
                odd = odd + 2;
            }
            else{
                printf("%d ", even);
                even = even * 2;
            }
        }
        printf("\n");
    }
}