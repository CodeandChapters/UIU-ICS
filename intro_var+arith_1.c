/*
Write a C program where you will declare an integer, a floating point and a character
variable, initialize them by values of your choice, and print these values.
*/
#include <stdio.h>
int main()
{

    int inum;
    float fnum;
    char cvalue;

    inum = 17;
    fnum = 3.508;
    cvalue = 'W';

    printf("Integer value:%d\nFloating point value:%f\nCharacter value:%c", inum, fnum, cvalue);

    return 0;
}