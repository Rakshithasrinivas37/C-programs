/*
You are given n triangles, specifically, their sides a, b and cand . 
Print them in the same style but sorted by their areas from the smallest one to the largest one. 
It is guaranteed that all the areas are different.

Input Format

The first line of each test file contains a single integer n.  
lines follow with three space-separated integers a, b, and c.

Output Format

Print exactly n lines. On each line print 3 space-separated integers, the a, b and c of the corresponding triangle.

Sample Input 0

3
7 24 25
5 12 13
3 4 5

Sample Output 0

3 4 5
5 12 13
7 24 25
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double calculate_area(int a, int b, int c) {
    double s = (double)(a + b + c) / 2;
    double area = (double)sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

void sort_by_area(triangle* tr, int n) 
{
    for(int i = 0;i < n;i++)
    {
        for(int k = i+1;k < n;k++)
        {
            if(calculate_area(tr[i].a, tr[i].b, tr[i].c) > calculate_area(tr[k].a, tr[k].b, tr[k].c))
            {
                triangle temp = tr[i];
                tr[i] = tr[k];
                tr[k] = temp;
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}