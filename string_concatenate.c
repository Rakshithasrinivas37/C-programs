#include<stdio.h>
#include<string.h>

void str_cat(char *str1, char *str2)
{
    int len = strlen(str1);
    memcpy(str1+5, str2, strlen(str2));
    printf("%s\n", str1);
}

int main()
{
    char str1[20], str2[20];
    printf("Enter two string: ");
    scanf("%s%s", str1, str2);
    str_cat(str1, str2);
}