#include<stdio.h>
#include <stdlib.h>

char *dec_to_bin(char num)
{
    char *str = (char *)malloc(8 * sizeof(char));
    for(int i = 7;i >= 0;i--)
    {
        if(num>>i & 1)
        {
            str[7 - i] = '1';
        }
        else{
            str[7 - i] = '0';
        }
    }
    str[8] = '\0';
    return str;
}

int main()
{
    char num;
    printf("Enter number: ");
    scanf("%hhd", &num);
    char *str = dec_to_bin(num);
    printf("%s\n", str);
}