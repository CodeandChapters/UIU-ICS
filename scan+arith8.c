/*
Write a C program which will calculate the displacement of a moving body by using the
following equation:

                     s=ut+1/2*a*t*t

You have to take as input u ,  a and t  in order. Have you faced any problem regarding the
output?
*/
#include <stdio.h>
int main()
{

    int u;
    float a;
    float t;

    printf("Enter the initial velocity:");
    scanf("%d", &u);

    printf("Enter the acceleration:");
    scanf("%f", &a);

    printf("Enter the time:");
    scanf("%f", &t);

    float s = u * t + 0.5 * a * t * t;

    printf("Displacement:%.2f", s);

    return 0;
}