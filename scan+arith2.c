/*
Write a C program where you will declare two integer variables, input them using scanf,
and perform the basic arithmetic operations on them.
*/
#include <stdio.h>
int main()
{

    int num1, num2;
    scanf("%d%d", &num1, &num2);

    printf("%d+%d=%d\n", num1, num2, (num1 + num2));
    printf("%d-%d=%d\n", num1, num2, (num1 - num2));
    printf("%d*%d=%d\n", num1, num2, (num1 * num2));
    printf("%d/%d=%d\n", num1, num2, (num1 / num2));
    printf("%d%%%d=%d", num1, num2, (num1 % num2));

    return 0;
}