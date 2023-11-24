#include <stdio.h>
#include<string.h>

char alpha[30] = "abcdefghstuvwxyzijklmnopqr";

int get_val(char var)
{
    for(int i=0;i<=26;i++)
    {
        if(var == alpha[i])
        {
            return i;
        }
    }
}

int main()
{
    int k;
    char str[200];
    scanf("%d", &k);
    scanf("%s", str);

    int i = 0;
    while(str[i] != '\0')
    {
        int val = 0;
        while(val < k - 1)
        {
            for(int j = i;j < k + i - 1 && str[j] && str[j+1];j++)
            {
                if(get_val(str[j]) > get_val(str[j+1]))
                {
                    str[j] = str[j] ^ str[j+1];
                    str[j+1] = str[j] ^ str[j+1];
                    str[j] = str[j] ^ str[j+1];
                }
            }
            val++;
        }
        i = i + k;
        val = 0;
        while(val < k - 1)
        {
            for(int j = i;(j < k + i - 1) && str[j] && str[j+1];j++)
            {
                if(get_val(str[j]) < get_val(str[j+1]))
                {
                    str[j] = str[j] ^ str[j+1];
                    str[j+1] = str[j] ^ str[j+1];
                    str[j] = str[j] ^ str[j+1];
                }
            }
            val++;
        }
        i = i + k;
    }
    printf("%s\n",str);

    return 0;
}