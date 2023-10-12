#include<stdio.h>

struct employee
{
    char name[20];
    struct address
    {
        char street[20];
        char city[20];
        char state[20];
        char zip[20];
    }add;
};

int main()
{
    struct employee e1 = {"Nameeth", {"Whitefield", "Banaglore", "Karnataka", "560066"}};
    printf("Address: %s, %s, %s - %s\n", e1.add.street, e1.add.city, e1.add.state, e1.add.zip);
}