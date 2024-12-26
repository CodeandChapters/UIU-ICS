/*
You are tasked with developing a program for an internet service provider. The company
offers different types of data packages, each with a different charge per GB. The packages
and their respective charges are as follows:
● Basic Package: 50 Taka per GB
● Standard Package: 100 Taka per GB
● Premium Package: 150 Taka per GB
Write a C program that:
1. Ask the user to choose a package by entering 1 for Basic, 2 for Standard, or 3 for
Premium.
2. Ask the user to input the number of GBs they want to use.
3. Calculates the total cost based on the selected package and data usage.
4. Prints the total cost and the selected package type.
You need to complete the program using if-else statements.
*/

#include <stdio.h>
int main()
{

    int bPackage, sPackage, pPackage, choice;
    float amGB;

    bPackage = 50;
    sPackage = 100;
    pPackage = 150;

    printf("Select the data package:\n");
    printf("1.Basic Package\n2.Standard Package\n3.Premium Package\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    printf("The number of GBs you want to use:");
    scanf("%f", &amGB);

    float tBpackage = bPackage * amGB;
    float tSpackage = sPackage * amGB;
    float tPpackage = pPackage * amGB;

    if (choice == 1)
    {
        printf("You selected the Basic Package\nThe total charge for your package is:%.2f", tBpackage);
    }
    else if (choice == 2)
    {
        printf("You selected the Standard Package\nThe total charge for your package is:%.2f", tSpackage);
    }
    else if (choice == 3)
    {
        printf("You selected the Premium Package\nThe total charge for your package is:%.2f", tPpackage);
    }
    else
    {
        printf("Your input is invalid");
    }

    return 0;
}