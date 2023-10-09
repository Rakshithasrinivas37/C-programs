#include<stdio.h>

int equilibrium_index(int arr[], int size)
{
    int left_sum = 0, right_sum = 0;
    for(int i = 1;i < size;i++)
    {
        left_sum = left_sum+arr[i-1];
        right_sum = 0;
        for(int j = i+1;j < size;j++)
        {
            right_sum = right_sum+arr[j];
        }
        if(left_sum == right_sum)
        {
            return i;
        }
    }
    return 0;
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
    int res = equilibrium_index(arr, size);
    if(res > 0)
    {
        printf("Equilibrium index = %d\n", res);
    }
    else{
        printf("No equilibrium index\n");
    }
}