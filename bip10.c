/*
Program that will declare a variable from each data type: long int, long long int, long double,
short int. Then it will initialize them with values and print them.
*/
#include <stdio.h>
int main()
{

    long int li_num = 123455789;

    long long int lli_num = 12345432122;

    long double ld_num = 1.1E+10;

    short int si_num = 31577;

    printf("The long int value:%ld\n", li_num);
    printf("The long long int value:%lld\n", lli_num);
    printf("The long double value:%Le\n", ld_num);
    printf("The short int value:%hd\n", si_num);

    return 0;
}
