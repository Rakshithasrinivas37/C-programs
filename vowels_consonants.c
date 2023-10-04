#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter string: ");
    scanf("%s", str);
    int v_count = 0, c_count = 0;
    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            v_count++;
        }
        else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v_count++;
        }
        else if((str[i] >= 98 && str[i] <= 100) || (str[i] >= 102 && str[i] <= 104) || (str[i] >= 106 && str[i] <= 110) || (str[i] >= 112 && str[i] <= 116) || (str[i] >= 118 && str[i] <= 122))
        {
            c_count++;
        }
        else if((str[i] >= 66 && str[i] <= 68) || (str[i] >= 70 && str[i] <= 72) || (str[i] >= 74 && str[i] <= 78) || (str[i] >= 80 && str[i] <= 84) || (str[i] >= 86 && str[i] <= 90))
        {
            c_count++;
        }
    }
    printf("Vowels count = %d, consonants count = %d\n", v_count, c_count);
}