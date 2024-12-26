/*
Write a C program which will calculate the terminal velocity of a moving body by using
the following equation:

                      v=u+at

You have to take as input u ,  a and  t in order. Can you figure out the data types for all the
variables?
*/
#include <stdio.h>
int main()
{

    int u;
    float a;
    float t;

    printf("Enter initial velocity:");
    scanf("%d", &u);

    printf("Enter the acceleration:");
    scanf("%f", &a);

    printf("Enter the time:");
    scanf("%f", &t);

    float v = u + a * t;

    printf("Terminal velocity:%.2f", v);

    return 0;
}