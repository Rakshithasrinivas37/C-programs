#include <stdio.h>

char first_non_repeat(char *str)
{
    for(int i = 0;str[i] != '\0';i++)
    {
        int count = 0;
        for(int j = i + 1;str[j] != '\0';j++)
        {
            if(str[i] == str[j] || str[i] == str[j] - 32 || str[i] == str[j] +32)
            {
                count++;
            }
        }
        if(count == 0)
        {
            return (str[i]);
        }
    }
}

int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);
    char ch = first_non_repeat(str);
    
    printf("First non-repeated character is %c\n", ch);

    return 0;
}
