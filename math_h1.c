/*
Write a C program that will take as input a floating-point number, and print the floor and
the ceiling of that number.
*/
#include <stdio.h>
#include <math.h>
int main()
{

    double fnum;
    printf("Enter a floating-point number:");
    scanf("%lf", &fnum);

    printf("Floor=%.1f\nCeiling=%.1f", floor(fnum), ceil(fnum));
}