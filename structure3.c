#include<stdio.h>

struct book
{
    char title[20];
    char author[20];
    int price;
};

int main()
{
    struct book b1 = {"C in depth", "Srivatsava", 450};
    int discount;
    printf("Enter discount: ");
    scanf("%d", &discount);
    int dis_amnt = (discount * b1.price)/100;
    int new_price = b1. price - dis_amnt;
    printf("New price: %d\n", new_price);

}