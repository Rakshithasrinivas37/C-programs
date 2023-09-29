#include<stdio.h>

void compare_array(int arr1[], int arr2[], int size)
{
    int count = 0; 
    int arr[size];
    for(int i = 0;i < size;i++)
    {
        for(int j = 0;j < size;j++)
        {
            if(arr1[i] == arr2[j])
            {
                arr[count] = arr1[i];
                count++;
            }
        }
    }
    printf("Common array elements: ");
    for(int i = 0;i < count;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int num, sum;
    printf("Enter number: ");
    scanf("%d", &num);
    int arr[num], arr1[num];
    printf("Enter array1 elements: ");
    for(int i = 0;i < num;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter array2 elements: ");
    for(int i = 0;i < num;i++)
    {
        scanf("%d", &arr1[i]);
    }
    compare_array(arr, arr1, num);

    return 0;
}