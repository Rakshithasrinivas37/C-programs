#include<stdio.h>

void array_product(int arr[], int size)
{
    int arr_product[size];
    int product = 1;
    for(int i = 0;i < size;i++)
    {
        product = 1;
        for(int j = 0;j < size;j++)
        {
            if(i == j)
                continue;
            else
                product = product * arr[j];
        }
        arr_product[i] = product;
    }
    printf("Array products: ");
    for(int i = 0;i < size;i++)
    {
        printf("%d ", arr_product[i]);
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
    array_product(arr, size);
}