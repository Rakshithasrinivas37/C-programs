#include<stdio.h>

int peak_element(int arr[], int size)
{
    if(size == 1)
    {
        return arr[0];
    }
    else if(arr[0] >= arr[1])
    {
        return arr[0];
    }
    else if(arr[size - 1] >= arr[size - 2])
    {
        return arr[size - 1];
    }
    for(int i = 0;i < size;i++)
    {
        if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1])
        {
            return arr[i];
        }
    }
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i = 0;i < size;i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = peak_element(arr, size);
    printf("Peak element is %d\n", result);

    return 0;
}