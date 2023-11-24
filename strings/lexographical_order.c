#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char *str1, char *str2)
{
    char *temp = (char *)malloc(sizeof(str1));
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void lexographic_order(char *str1, char *str2)
{
    char **temp;
    if(str1[0] > str2[0])
    {
        swap(str1, str2);
    }
    else if(str1[0] == str2[0])
    {
        for(int i = 1;str1[i] != '\0' || str2[i] != '\0';i++)
        {
            if(str1[i] > str2[i])
            {
                swap(str1, str2);
                break;
            }
            else if(str1[i] == str2[i])
            {
                continue;
            }
            else
            {
                break;
            }
        }
    }
}

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);

    char **str = (char **)malloc(row * sizeof(char *));
    for(int i = 0;i < row;i++)
    {
        str[i] = (char *)malloc(col * sizeof(char));
    }
    printf("Enter strings: \n");
    for(int i = 0;i < row;i++)
    {
        scanf("%s", str[i]);
    }

    for(int  i = 0;i < row -1;i++)
    {
        for(int j = 0;j < row - 1;j++)
        {
            lexographic_order(str[j], str[j+1]);
        }
    }
    printf("After sorting: \n");
    for(int i = 0;i < row;i++)
    {
        printf("%s\n", str[i]);
    }
}