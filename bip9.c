/*
Program that will declare a variable from each data type: double, boolean. Then it will
initialize them with values and print them.
*/

#include <stdio.h>
#include <stdbool.h> //learned from W3school that C doesn't have a built in bool data type.Have to import <stdbool.h> header file.
int main()
{

    double dnum;
    bool bvalue;

    dnum = 3.14;
    bvalue = true; // boolean variable takes true or false as value

    printf("The double value:%e\n", dnum);    // just googled how to print in scientific notation
    printf("The boolean value:%d", bvalue); // boolean values are returned as integers,therefore using %d format specifier

    return 0;
}