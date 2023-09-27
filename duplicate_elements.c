#include <stdio.h>
#define SIZE 5

void duplicate_elements(int arr[])
{
    int duplicate[SIZE];
    int count = 0;
    for(int i = 0;i < SIZE;i++)
    {
        for(int j = i+1;j < SIZE;j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate[count] = arr[j];
                count++;
            }
        }
    }
    if(count == 0)
    {
        printf("No duplicate element found\n");
    }
    else
    {
        printf("Duplicate elements: ");
        for(int i = 0;i < count;i++)
        {
            printf("%d ", duplicate[i]);
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
    duplicate_elements(arr);

    return 0;
}
