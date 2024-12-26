/*
Write a C program that will take as input two floating point numbers  a and  b, and print
the value of a^b
*/
#include <stdio.h>
#include <math.h>
int main()
{

    double a, b;
    printf("Enter the base:");
    scanf("%lf", &a);

    printf("Enter the exponent:");
    scanf("%lf", &b);

    printf("%.1f^%.1f=%.2f", a, b, pow(a, b));

    return 0;
}