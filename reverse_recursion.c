#include <stdio.h>

void reverse(char *str)
{
    if(*str)
    {
        reverse(str + 1);
        printf("%c", *str);
    }
}

int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);
    
    reverse(str);

    return 0;
}
