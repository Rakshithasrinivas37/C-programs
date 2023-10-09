#include<stdio.h>

/*
void lower_to_upper(char *str)
{
    for(int i = 0;str[i] != '\0';i++)
    {
        str[i] = str[i] - 32;
    }
}
*/

void upper_to_lower(char *str)
{
    for(int i = 0;str[i] != '\0';i++)
    {
        str[i] = str[i] + 32;
    }
}

int main()
{
    char str1[20];

    printf("Enter string: ");
    scanf("%s", str1);

    upper_to_lower(str1);
    printf("Copied string: %s\n", str1);
}