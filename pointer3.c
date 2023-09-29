#include<stdio.h>

int main()
{
    char *str1 = "Hello";
    char *str2 = "world";

    char **ptr1 = &str1;
    char **ptr2 = &str2;

    printf("Before swap: str1 = %s, str2 = %s\n", *ptr1, *ptr2);

    char **temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("After swap: str1 = %s, str2 = %s\n", *ptr1, *ptr2);

}