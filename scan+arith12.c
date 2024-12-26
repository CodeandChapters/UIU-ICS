/*
Suppose that in a country, there are notes of 1, 5, 10, 50, 100 and 500 units of currencies.
Write a C program which will take as input the amount of money to give, and find out the
number of each note to provide this amount of money so that a minimal number of notes
are given in total.
*/
#include <stdio.h>
int main()
{

    int imoney;

    printf("Amount:");
    scanf("%d", &imoney);

    int cmoney = imoney / 500;
    printf("%d note(s) of 500\n", cmoney);
    imoney = imoney % 500;

    cmoney = imoney / 100;
    printf("%d note(s) of 100\n", cmoney);
    imoney = imoney % 100;

    cmoney = imoney / 50;
    printf("%d note(s) of 50\n", cmoney);
    imoney = imoney % 50;

    cmoney = imoney / 10;
    printf("%d note(s) of 10\n", cmoney);
    imoney = imoney % 10;

    cmoney = imoney / 5;
    printf("%d note(s) of 5\n", cmoney);
    imoney = imoney % 5;

    cmoney = imoney / 1;
    printf("%d note(s) of 1", cmoney);

    return 0;
}