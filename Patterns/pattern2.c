/*
    *
   **
  ***
 ****
*****
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
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
}