#include<stdio.h>

struct student
{
    char name[20];
    int roll;
    int marks[5];
};

int main()
{
    struct student s1;
    int sum = 0;
    float avg_marks;
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter roll no.: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    for(int i = 0;i < 5;i++)
    {
        scanf("%d", &s1.marks[i]);
        sum = sum + s1.marks[i];
    }
    avg_marks = (float)sum/5;
    printf("Average marks: %lf\n", avg_marks);
}