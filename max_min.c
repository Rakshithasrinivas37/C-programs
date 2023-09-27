#include<stdio.h>
#define SIZE 5

void max_min(int arr[])
{
    int max = arr[0];
    int min = arr[0];
    for(int i = 1;i < SIZE;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        else if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Max = %d, Min = %d\n", max, min);
}

int main()
{
    int arr[SIZE];
    printf("Enter array elements: ");
    for(int i = 0;i < SIZE;i++)
    {
        scanf("%d", &arr[i]);
    }
    max_min(arr);

    return 0;
}
