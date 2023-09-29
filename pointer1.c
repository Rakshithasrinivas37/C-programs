#include<stdio.h>

int main()
{
    int *ptr = NULL;
    int size = (char *)(ptr+1) - (char *)ptr;

    printf("sizeof int = %d\n", size);
}