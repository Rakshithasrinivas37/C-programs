#include<stdio.h>

int check_same_array(int *arr, int *ptr1, int *ptr2, int size)
{
    int flag = 0;
    int *start = arr;
    int *end = arr + size - 1;
    while(ptr1 <= end)
    {
        if(ptr1 == ptr2)
        {
            flag = 1;
        }
        ptr1++;
    }
    while(ptr1 >= start)
    {
        if(ptr1 == ptr2)
        {
            flag = 1;
        }
        ptr1--;
    }
    while(ptr2 >= start)
    {
        if(ptr1 == ptr2)
        {
            flag = 1;
        }
        ptr2--;
    }
    while(ptr2 <= end)
    {
        if(ptr1 == ptr2)
        {
            flag = 1;
        }
        ptr2++;
    }
    return flag;
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
    int *ptr1 = &arr[0];
    int a = 10;
    int *ptr2 = &a;
    int res = check_same_array(arr, ptr1, ptr2, size);
    if(res == 1)
    {
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}