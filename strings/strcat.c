#include<stdio.h>
#include<string.h>

int str_cat(char *str1, char *str2)
{
    int len = strlen(str1);
    for(int i = 0;str2[i] != '\0';i++)
    {
        str1[len] = str2[i];
        len++;
    }
    str1[len] = '\0';
}

int main()
{
    char str1[20], str2[20];
    printf("Enter strings: ");
    scanf("%s%s", str1, str2);
    str_cat(str1, str2);
    printf("After concatenation: str1 = %s\n", str1);
}