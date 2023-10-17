/*
*********
 *******
  *****
   ***
    *
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
        for(int j = 0;j < n;j++)
        {
            if(j >= i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(int j = n;j < len-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}