#include<stdio.h>

void swap_even_odd(int arr[], int size)
{
    int *ptr1 = arr;
    int *ptr2 = arr + (size-1);
    while(ptr1 < ptr2)
    {
        while((*ptr1%2 == 0) && (ptr1 < ptr2))
        {
            ptr1++;
        }
        while((*ptr2%2 != 0) && (ptr1<ptr2))
        {
            ptr2--;
        }
        if(ptr1 < ptr2)
        {
            int temp = *ptr1;
            *ptr1 = *ptr2;
            *ptr2 = temp;
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
    swap_even_odd(arr, size);
    printf("Array elements: ");
    for(int i = 0;i < size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}