/*
Write a C program where you will declare two floating point variables, initialize them by
values of your choice, and perform the basic arithmetic operations on them. Note that
the remainder operation is invalid for floating point numbers.
*/
#include <stdio.h>
int main()
{

    float num1, num2;

    num1 = 95.401;
    num2 = 22.622;

    printf("%.3f+%.3f=%.3f\n", num1, num2, (num1 + num2));
    printf("%.3f-%.3f=%.3f\n", num1, num2, (num1 - num2));
    printf("%.3f*%.3f=%.6f\n", num1, num2, (num1 * num2));
    printf("%.3f/%.3f=%.6f\n", num1, num2, (num1 / num2));

    return 0;
}