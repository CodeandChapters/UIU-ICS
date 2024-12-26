/*
Program that will take an floating point number as input from the keyboard and use printf
function to perform the followings:

**
(a) Print the number right justified within 10 columns
(b) Print the number to be right justified to 2 columns (Assuming the input has more
than 2 digits)
(c) Print the number rounded to two decimal places
(d) Print the number rounded to integer (without using conversion or type casting)
(e) Prints the number in exponential notation/scientific notation
*/
#include <stdio.h>
int main()
{

    float fnum;

    printf("Enter the floating point number:");
    scanf("%f", &fnum);

    printf("Val: %10f\n", fnum);
    printf("Val: %2f\n", fnum);
    printf("Val: %.2f\n", fnum);
    printf("Val: %.0f\n", fnum);
    printf("Val: %e\n", fnum);

    return 0;
}