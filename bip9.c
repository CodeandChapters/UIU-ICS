/*
Program that will declare a variable from each data type: double, boolean. Then it will
initialize them with values and print them.
*/

#include <stdio.h>
#include <stdbool.h>
int main()
{

    double dnum;
    bool bvalue;

    dnum = 3.14;
    bvalue = true;

    printf("The double value:%e\n", dnum);    
    printf("The boolean value:%d", bvalue); 

    return 0;
}
