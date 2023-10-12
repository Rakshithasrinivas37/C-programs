#include<stdio.h>
#include<string.h>

char *str_chr(char *str1, char *str2)
{
    while(*str1 != '\0')
    {
        int count = 0;
        for(int i = 0;str2[i] != '\0';i++)
        {
            if(str1[i] == str2[i])
            {
                count++;
            }
        }
        if(count == strlen(str2))
        {
            return str1;
        }
        else{
            str1++;
        }
    }
}

int main()
{
    char str1[20], str2[20];
    printf("Enter string: ");
    scanf("%[^\n]s", str1);
    printf("Enter string to be searched: ");
    scanf("%s", str2);
    char *str = str_chr(str1, str2);
    printf("string = %s\n", str);
}