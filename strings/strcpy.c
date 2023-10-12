#include<stdio.h>

char *str_cpy(char *str1, char *str2)
{
    int i = 0;
    for(i = 0;str2[i] != '\0';i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
}

int main()
{
    char str1[20], str2[20];
    printf("Enter strings: ");
    scanf("%s%s", str1, str2);
    str_cpy(str1, str2);
    printf("After copy: str1 = %s\n", str1);
}