#include<stdio.h>
#include<stdlib.h>

void search_element(int arr[], int size)
{
    int *arr_visited = (int *)calloc(size, sizeof(int));
    for(int i = 0;i < size;i++)
    {
        int count = 1;
        if(arr_visited[i] != -1)
        {
            for(int j = i+1;j < size;j++)
            {
                if((arr[i] ^ arr[j]) == 0)
                {
                    count++;
                    arr_visited[j] = -1;
                }
            }
            if(count != 3)
            {
                printf("%d ", arr[i]);
            }
        }
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
    search_element(arr, size);
}