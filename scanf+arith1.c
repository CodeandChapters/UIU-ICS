/*
Write a C program where you will declare an integer and a floating point variable, input
them using scanf, and print these values.
*/
#include <stdio.h>
int main()
{

    int inum;
    float fnum;

    scanf("%d%f", &inum, &fnum);
    printf("Integer value:%d\nFloating point value:%f", inum, fnum);

    return 0;
}