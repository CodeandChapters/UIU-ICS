/*
Write a C program where you will declare two integer variables, initialize them by values
of your choice, and perform the basic arithmetic operations on them. The basic arithmetic
operations are addition (+), subtraction (-), multiplication (*), division (/) and remainder
(%).
*/
#include <stdio.h>
int main()
{
    int num1, num2;
    num1 = 18;
    num2 = 7;

    printf("%d+%d=%d\n", num1, num2, (num1 + num2));
    printf("%d-%d=%d\n", num1, num2, (num1 - num2));
    printf("%d*%d=%d\n", num1, num2, (num1 * num2));
    printf("%d/%d=%d\n", num1, num2, (num1 / num2));
    printf("%d%%%d=%d\n", num1, num2, (num1 % num2));

    return 0;
}