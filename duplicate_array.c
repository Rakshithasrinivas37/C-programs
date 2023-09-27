#include <stdio.h>
#define SIZE 5

int duplicate(int arr[])
{
    for(int i = 0;i < SIZE;i++)
    {
        for(int j = i+1;j < SIZE;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("Duplicate element is %d\n", arr[j]);
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    int arr[SIZE];
    printf("Enter array elements: ");
    for(int i = 0;i < SIZE;i++)
    {
        scanf("%d", &arr[i]);
    }
    int res = duplicate(arr);
    if(res == 1)
    {
        printf("No duplicate element found\n");
    }
    return 0;
}

