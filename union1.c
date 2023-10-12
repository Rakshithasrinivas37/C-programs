#include<stdio.h>

union bit_32
{
    int num;
    struct bit_16
    {
        short int a;
        short int b;
    }b_16;

    struct bit_8
    {
        char n1;
        char n2;
        char n3;
        char n4;
    }b_8;
};

int main()
{
    union bit_32 b1;
    b1.num = 0xABCD1234;
    printf("32-bit: %x\n", b1.num);
    printf("16-bit: %hx %hx\n", b1.b_16.a, b1.b_16.b);
    printf("8-bit: %hhx, %hhx, %hhx, %hhx\n", b1.b_8.n1, b1.b_8.n2, b1.b_8.n3, b1.b_8.n4);
}