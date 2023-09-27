#include <stdio.h>
#define SIZE 5

void rem_duplicate_elements(int arr[])
{
    int size = SIZE;
    for(int i = 0;i < size;i++)
    {
        int j = i + 1;
        while(j < size)
        {
            if(arr[i] == arr[j])
            {
                for(int k = j;k < size;k++)
                {
                    arr[k] = arr[k+1];
                }
                size--;
                j = i + 1;
            }
            else
            {
                j++;
            }
        }
    }
    if(size == SIZE)
    {
        printf("No duplicate element found\n");
    }
    else
    {
        printf("Array elements are: ");
        for(int i = 0;i < size;i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main()
{
    int arr[SIZE];
    printf("Enter array elements: ");
    for(int i = 0;i < SIZE;i++)
    {
        scanf("%d", &arr[i]);
    }
    rem_duplicate_elements(arr);

    return 0;
}

