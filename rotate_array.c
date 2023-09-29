#include<stdio.h>

void rotate_array(int arr[], int size, int k)
{
    for(int i = 0;i < k;i++)
    {
        int num = arr[0];
        for(int j = 0;j < size;j++)
        {
            int num1 = num;
            if(j == size - 1)
            {
                arr[0] = num1;
            }
            else
            {
                num = arr[j+1];
                arr[j+1] = num1;
            }
        }
    }
    printf("After rotating, Array elements: ");
    for(int i = 0;i < size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size, k;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i = 0;i < size;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter k value: ");
    scanf("%d", &k);
    rotate_array(arr, size, k);

    return 0;
}