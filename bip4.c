/*
Program that will declare an integer, a floating point number, a character. Then it will
initialize them with values and print those values.
*/
#include <stdio.h>
int main()
{

    int inum;
    float fnum;
    char cvalue;

    inum = 5;
    fnum = 3.141593;
    cvalue = 'a';

    printf("The integer value: %d\n", inum);
    printf("The floating point value: %f\n", fnum);
    printf("The character value: %c", cvalue);

    return 0;
}