#include<stdio.h>
#include<stdlib.h>

void search(int arr[], int size)
{
    int *arr_repeat = (int *)calloc(size, sizeof(int));
    for(int i = 0;i < size;i++)
    {
        if(arr_repeat[i] != -1)
        {
            int count = 0;
            for(int j = i+1;j < size;j++)
            {
                if((arr[i]^arr[j]) == 0)
                {
                    count++;
                    arr_repeat[j] = -1;
                }
            }
            if(count == 0)
            {
                printf("%d\n", arr[i]);
            }
        }
    }
    free(arr_repeat);
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
    search(arr, size);
}