#include<stdio.h>

int str_len(char *str)
{
    int count = 0;
    for(int i = 0;str[i] != '\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);
    int length = str_len(str);
    printf("String length = %d\n", length);
}