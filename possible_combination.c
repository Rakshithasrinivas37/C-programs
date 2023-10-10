#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    int k = (int)pow(2, n);
    for(int i = 0;i < k;i++)
    {
        for(int j = n-1;j >= 0;j--)
        {
            if(i>>j & 1)
            {
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}