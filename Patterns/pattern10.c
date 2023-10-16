/*
    *
   **
  ***
 ****
*****
****
***
**
*
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    int len = (n*2) - 1;
    for(int i = 0;i < n;i++)
    {
        int k = i;
        for(int j = 0;j < n;j++)
        {
            if(j == n - 1 - k)
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
    for(int i = n;i < len;i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(i+j < len)
            {
                printf("*");
            }

        }
        printf("\n");
    }
}