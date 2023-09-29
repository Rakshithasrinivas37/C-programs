#include<stdio.h>

void kth_largest_smallest(int *arr, int size, int k)
{
    for(int i = 0;i < size-1;i++)
    {
        for(int j = 0;j < size-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("After sorting, Array elements: ");
    for(int i = 0;i < size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nKth largest element is %d\n", arr[size - k]);
    printf("Kth smallest element is %d\n", arr[k-1]);
    
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
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    kth_largest_smallest(arr, size, num);
    

    return 0;
}