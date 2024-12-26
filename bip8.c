/*
Program that will take three integer numbers from keyboard but assign only the first and
last inputs to variables and skip any assignment of the middle one.
*/
#include <stdio.h>
int main()
{

    int num1, num3;

    printf("Enter the first value:");
    scanf("%d", &num1);

    printf("Enter the middle value:");
    scanf("%*d");

    printf("Enter the last value:");
    scanf("%d", &num3);

    printf("First Value=%d, Last Value=%d", num1, num3);

    return 0;
}