#include<stdio.h>

void count_array(int *end, int *start)
{
    int count = end - start;
    printf("Count = %d\n", count);
}
int main()
{
    int arr[] = {1,2,3,4,5};
    count_array((arr + sizeof(arr)/sizeof(arr[0])), arr);
}