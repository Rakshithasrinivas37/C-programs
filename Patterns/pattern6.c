/*
*       *
**     **
***   ***
**** ****
*********
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i = 0;i < n;i++)
    {
        int k = i;
        for(int j = 0;j < len;j++)
        {
            if(j <= i)
            {
                printf("*");
                if(i == 4 && j == 4)
                {
                    k--;
                }
            }
            else if(j == len - 1 - k)
            {
                printf("*");
                k--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}