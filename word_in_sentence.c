/*
Given a sentence 's' print each word of the sentence in a new line.

Input Format

The first and only line contains a sentence, .

Constraints


Output Format

Print each word of the sentence in a new line.

Sample Input 0

This is C 
Sample Output 0

This
is
C
Explanation 0

In the given string, there are three words ["This", "is", "C"]. We have to print each of these words in a new line.

Sample Input 1

Learning C is fun
Sample Output 1

Learning
C
is
fun
*/

#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter string: \n");
    scanf("%[^\n]", str);

    for(int i = 0;str[i] != '\0';i++)
    {
        if(str[i] == ' ')
        {
            printf("\n");
        }
        else{
            printf("%c", str[i]);
        }
    } 
    printf("\n");
}