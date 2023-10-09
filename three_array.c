#include<stdio.h>

void common_element(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3)
{
    int count = 0;
    int arr_common[size3];

    for(int i = 0;i < size1;i++)
    {
        for(int j = 0;j < size2;j++)
        {
            if(arr1[i] == arr2[j])
            {
                for(int k = 0;k < size3;k++)
                {
                    if(arr2[j] == arr3[k])
                    {
                        arr_common[count] = arr3[k];
                        count++;
                    }
                }
            }
        }
    }
    printf("Common elements: ");
    for(int i = 0;i < count;i++)
    {
        printf("%d ", arr_common[i]);
    }
    printf("\n");
}

int main()
{
    int arr1[] = {1,5,10,20,40,80}, arr2[] = {6,7,20,80,100}, arr3[] = {3,4,15,20,30,70,80,120};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int size3 = sizeof(arr3)/sizeof(arr3[0]);

    
    common_element(arr1, arr2, arr3, size1, size2, size3);
}