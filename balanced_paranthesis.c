#include<stdio.h>

int is_par(char *str)
{
    char str1[20];
    int j = 0, res;
    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            str1[j++] = str[i];
        }
        else if(str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if(str[i] == ')' && str1[--j] == '(')
            {
                res = 0;
            }
            else if(str[i] == ']' && str1[--j] == '[')
            {
                res = 0;
            }
            else if(str[i] == '}' && str1[--j] == '{')
            {
                res = 0;
            }
            else{
                return 1;
            }
        }
    }
    return res;
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    char str[size];

    printf("Enter string: ");
    scanf("%s", str);

    int res = is_par(str);
    if(res == 0)
    {
        printf("Balanced\n");
    }
    else
    {
        printf("Not balanced\n");
    }
}