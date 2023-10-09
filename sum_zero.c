#include<stdio.h>

int sum_zero(int arr[], int size)
{
    int sum = 0;
    for(int i = 0;i < size;i++)
    {
        sum = 0;
        for(int j = i;j < size;j++)
        {
            sum = sum + arr[j];
            if(sum == 0)
            {
                return 1;
            }
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
    int res = sum_zero(arr, size);
    if(res == 0)
    {
        printf("False\n");
    }
    else{
        printf("True\n");
    }
}