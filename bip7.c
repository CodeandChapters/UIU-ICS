/*
Program that will receive the values of an integer, a floating point number, a character from
the keyboard and print those values.
*/
#include <stdio.h>
int main()
{

    int inum;
    float fnum;
    char cvalue;

    printf("Enter an integer value:");
    scanf("%d", &inum);

    printf("Enter a floating point value:");
    scanf("%f", &fnum);
    
    getchar();

    printf("Enter a character value:");
    scanf("%c", &cvalue);

    printf("The integer value:%d\n", inum);
    printf("The floating point value:%f\n", fnum);
    printf("The character value:%c", cvalue);

    return 0;
}