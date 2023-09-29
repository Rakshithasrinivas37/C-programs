#include<stdio.h>

void sort_array(int *arr, int size)
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
    
}
int count_occurence(int arr[], int size, int num)
{
    int count = 0;
    for(int i = 0;i < size;i++)
    {
        if(arr[i] == num)
        {
            count++;
        }
    }
    return count;
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
    sort_array(arr, size);
    printf("After sorting, Array elements: ");
    for(int i = 0;i < size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int count = count_occurence(arr, size, num);
    printf("No. of occurence: %d\n", count);

    return 0;
}