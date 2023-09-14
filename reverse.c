#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    int len = strlen(str);
     int j = len;
    printf("%d\n", len);
    for(int i = 0;i < len/2;i++)
    {
        char ch = str[i];
        str[i] = str[j - 1];
        str[j - 1] = ch;
        j--;
    }
    str[len] = '\0';
    printf("Reversed string is: %s", str);
}

int main()
{
    char str[20];
    printf("Enter string: ");
    gets(str);
    
    reverse(str);

    return 0;
}

