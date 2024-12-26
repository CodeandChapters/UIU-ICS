/*
Write a C program where you will declare two floating point variables, input them using
scanf, and perform the basic arithmetic operations on them.
*/
#include <stdio.h>
int main()
{

    float num1, num2;

    scanf("%f%f", &num1, &num2);
    printf("%.3f+%.3f=%.3f\n", num1, num2, (num1 + num2));
    printf("%.3f-%.3f=%.3f\n", num1, num2, (num1 - num2));
    printf("%.3f*%.3f=%.6f\n", num1, num2, (num1 * num2));
    printf("%.3f/%.3f=%.6f", num1, num2, (num1 / num2));

    return 0;
}