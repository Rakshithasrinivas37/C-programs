#include <stdio.h>

int check_digits(char *str)
{
    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] < 48 || str[i] > 57)
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);
    int res = check_digits(str);
    if(res == 0)
    {
        printf("FALSE");
    }
    else
    {
        printf("TRUE");
    }
    return 0;
}