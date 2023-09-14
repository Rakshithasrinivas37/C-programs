#include <stdio.h>
#include <string.h>

int palindrome(char *str)
{
    int len = strlen(str);
    int j = len, flag = 0;
   
    for(int i = 0;i < len/2;i++)
    {
        if(str[i] == str[j - 1] || str[i] == str[j - 1] - 32 || str[i] == str[j - 1] + 32)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
        j--;
    }
    return flag;
}

int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);
    
    int res = palindrome(str);
    if(res == 0)
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }

    return 0;
}
