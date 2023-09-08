#include <stdio.h>

void duplicate(char *str)
{
    int count = 0,flag = 0;
    char str1[20];
    for(int i = 0;str[i] != '\0';i++)
    {
        for(int k = 0;k < count;k++)
        {
            if(str1[k] == str[i])
            {
                    flag = 1;
            }
        }
        if(flag == 0)
        {
            for(int j = i + 1;str[j] != '\0';j++)
            {
               if(str[i] == str[j] || str[i] == str[j] - 32 || str[i] == str[j] +32)
               {
                   str1[count] = str[i];
                   count++;
                   break;
               }
            }
        }
        flag = 0;
    }
    printf("Duplicate characters are: ");
    for(int i = 0;i < count;i++)
    {
        printf("%c ", str1[i]);
    }
    printf("\n");
}

int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);
    
    duplicate(str);
    
    return 0;
}
