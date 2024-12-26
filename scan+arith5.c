/*
Write a C program where you will declare four floating point variables (say a, b, c and d),
input them using scanf, and calculate (a + b – c) * d – a / d.
*/
#include <stdio.h>
int main()
{

    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d);

    printf("(%.1f+%.1f-%.1f)*%.1f-%.1f/%.1f=%.6f", a, b, c, d, a, d, (a + b - c) * d - a / d);

    return 0;
}