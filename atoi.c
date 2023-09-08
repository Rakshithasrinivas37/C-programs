#include<stdio.h>
#include<string.h>

int stoi(char *str)
{
    int sum = 0, digit;
    for(int i = 0;i < strlen(str);i++)
    {
        digit = str[i] - 48;
        sum = (sum * 10) + digit;
    }
    return sum;
}

int main()
{
    char str[20] = "1234";
    int val = stoi(str);
    
    printf("Integer: %d", val);
}
