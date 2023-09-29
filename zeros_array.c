#include<stdio.h>

void zeros_to_left(int arr[], int size)
{
    int count = 0;
    for(int i = 0;i < size;i++)
    {
        if(arr[i] == 0)
        {
            for(int j = i;j > count + 0;j--)
            {
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
            }
            count++;
        }
    }
    printf("Array elements: ");
    for(int i = 0;i < size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
    zeros_to_left(arr, size);

    return 0;
}