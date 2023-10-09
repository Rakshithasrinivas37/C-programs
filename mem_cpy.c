#include<stdio.h>
#include<string.h>

void mem_cpy(void *dest, void *src, int size)
{
    char *str1 = (char *)dest;
    char *str2 = (char *)src;

    int i = 0;
    for(i = 0; i < size;i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
}
int main()
{
    char str1[20];
    char str2[20];

    printf("Enter string: ");
    scanf("%s", str1);

    mem_cpy(str2, str1, strlen(str1));
    printf("Copied string: %s\n", str2);
}