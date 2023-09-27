#include<stdio.h>

void miss_element(int arr[], int size)
{
    int total = size * (size+1)/2;
    for(int i = 0;i < size;i++)
    {
        total = total - arr[i];
    }
    printf("Missing element is %d\n", total);
}

int main()
{
    int arr[5] = {1, 5, 4, 2};
    int size = sizeof(arr)/sizeof(arr[0]);
    miss_element(arr, size);
    
    return 0;
}
