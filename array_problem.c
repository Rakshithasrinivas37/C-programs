#include<stdio.h>

int main()
{
    int n;
    printf("Enter value for 'n': ");
    scanf("%d", &n);

    int arr[n], sum = 0;
    
    printf("Enter array elements: ");
    for(int i = 0;i < n;i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int size = (n%2 == 0)?(n/2 - 1):n/2;

    int var = 2, res;
    for(int i = 0;i <= size;i++)
    {
        int sum1 = 0;
        res = 1;
        for(int j = 0;(j < var) && (j < n);j++)
        {
            if(arr[j] == 0)
            {
                arr[j] = -sum;
            }
            sum1 = sum1 + arr[j];
        }
        if(sum1 == 0)
        {
            res = 0;
        }
        var += 2;
    }
    printf("%d\n", res);

}