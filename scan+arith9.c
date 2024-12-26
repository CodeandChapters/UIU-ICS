/*
Write a C program which will take as input the height of an object in centimeters, and
represent it in meter-centimeter format.
*/
#include <stdio.h>
int main()
{

    int cm;

    printf("Enter the height in centimeter:");
    scanf("%d", &cm);

    int m = cm / 100;
    int remain_cm = cm % 100;

    printf("%d meter %d centimeter", m, remain_cm);

    return 0;
}