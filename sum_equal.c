#include<stdio.h>

void sum_equal(int arr[], int num, int sum)
{
    for(int i = 0;i < num;i++)
    {
        for(int j = i + 1;j < num;j++)
        {
            if((arr[i] + arr[j]) == sum)
            {
                printf("Array values: %d and %d gives sum %d\n", arr[i], arr[j], sum);
            }
        }
    }
}

int main()
{
    int num, sum;
    printf("Enter number: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter array elements: ");
    for(int i = 0;i < num;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter sum value: ");
    scanf("%d", &sum);
    sum_equal(arr, num, sum);

    return 0;
}