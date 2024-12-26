/*
Write a C program which will take as input the height of an object in inches, and
represent it in feet-inch format.
*/

#include <stdio.h>
int main()
{

    int inch;

    printf("Enter the height in inch:");
    scanf("%d", &inch);

    int feet = inch / 12;
    int remain_inch = inch % 12;

    printf("%d feet %d inch", feet, remain_inch);

    return 0;
}