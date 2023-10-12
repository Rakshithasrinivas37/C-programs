#include<stdio.h>
#include<math.h>

struct point_space
{
    float x;
    float y;
    float z;
};

int main()
{
    struct point_space p1 = {1.0, 2.0, 3.0};
    struct point_space p2 = {4.0, 6.0, 8.0};

    double output = sqrt(pow(p2.x-p1.x, 2) + pow(p2.y-p1.y, 2) + pow(p2.z-p1.z, 2));
    printf("output = %0.3lf\n", output);
}
