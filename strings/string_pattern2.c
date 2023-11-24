#include<stdio.h>
#include<string.h>

int main()
{
    int T;
    scanf("%d", &T);
    char str[T][100];
    for(int i = 0;i < T;i++)
    {
        scanf("%s", str[i]);
    }

    int count = 0;
    for(int i = 0;i < T;i++)
    {
        char s1[50] = "\0", s2[50] = "\0";
        int num1 = 0, num2 = 0;
        int len = strlen(str[i]);
        if(str[i][0] == 'a' && str[i][len - 1] == 'b')
        {
            for(int j = 0;str[i][j] != '\0';j++)
            {
                if(str[i][j] == 'a')
                {
                    s1[num1++] = str[i][j];
                }
                else if(str[i][j] == 'b')
                {
                    s2[num2++] = str[i][j];
                }
                else{
                    break;
                }
            }
            printf("%s %s\n", s1,s2);
            if(strcmp(str[i], strcat(s1, s2)) == 0)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
}