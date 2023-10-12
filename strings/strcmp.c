#include<stdio.h>

int str_cmp(char *str1, char *str2)
{
    for(int i = 0;str1[i] != '\0' || str2[i] != '\0';i++)
    {
        if(str1[i] > str2[i])
        {
            return 1;
        }
        else if(str1[i] < str2[i])
        {
            return -1;
        }
    }
    return 0;
}

int main()
{
    char str1[20], str2[20];
    printf("Enter strings: ");
    scanf("%s%s", str1, str2);
    int res = str_cmp(str1, str2);
    if(res == 0)
    {
        printf("Equal\n");
    }
    else{
        printf("Not equal\n");
    }
}