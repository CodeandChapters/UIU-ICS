#include <stdio.h>

int main()
{
    unsigned int un_int = 4294967295;
    unsigned long int un_lint = 4294967295;
    unsigned long long int un_llint = 18446744073709551615;
    unsigned short int un_sint = 65535;

    printf("The unsigned int value: %u\n", un_int);
    printf("The unsigned long int value: %lu\n", un_lint);
    printf("The unsigned long long int value: %llu\n", un_llint);
    printf("The unsigned short int value: %hu\n", un_sint);

    return 0;
}
