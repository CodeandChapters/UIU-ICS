/*
Write a C program where you will declare four integer variables (say a, b, c and d), input
them using scanf, and calculate a * b + (a – c) / d + b.
*/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the first integer:");
    scanf("%d",&a);

    printf("Enter the second integer:");
    scanf("%d",&b);

    printf("Enter the third integer:");
    scanf("%d",&c);

    printf("Enter the fourth ineteger:");
    scanf("%d",&d);

    printf("%d*%d+(%d-%d)/%d+%d=%d", a, b, a, c, d, b, (a * b + (a - c) / d + b));

    return 0;
}
