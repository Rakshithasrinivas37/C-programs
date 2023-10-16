/*
    *
   ***
  *****
 *******
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
        for(int j = 0;j < n;j++)
        {
            if(j == n - 1 - k && k >= 0)
            {
                printf("*");
                k--;
            }
            else{
                printf(" ");
            }
        }
        for(int j = n;j < len;j++)
        {
            if((j == n + (++k)) && k < i)
            {
                printf("*");
            } 
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}