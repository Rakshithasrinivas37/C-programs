#include<stdio.h>

char *str_chr(char *str1, char ch)
{
    while(*str1 != '\0')
    {
        if(*str1 == ch)
        {
            return str1;
        }
        else
        {
            str1++;
        }
    }
}

int main()
{
    char str1[20], ch;
    printf("Enter string: ");
    scanf("%s", str1);
    printf("Enter character: ");
    scanf(" %c", &ch);
    char *str = str_chr(str1, ch);
    printf("string = %s\n", str);
}