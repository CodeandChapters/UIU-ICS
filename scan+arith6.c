/*
Write a C program which will calculate the area of a circle, given its radius. (Assume that
pi = 3.14159)
*/
#include <stdio.h>
int main()
{

    int radius;
    float area;

    printf("Enter the radius:");
    scanf("%d", &radius);

    area = 3.14159 * radius * radius;

    printf("Area=%f", area);

    return 0;
}