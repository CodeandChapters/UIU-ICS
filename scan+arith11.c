/*
Write a C program which will take as input a time interval in seconds, and represent it in
hour-minute-second format.
*/
#include <stdio.h>
int main()
{

    int sec;
    printf("Enter time in seconds:");
    scanf("%d", &sec);

    int hour = sec / (60 * 60);
    sec = sec - (hour * (60 * 60));

    int minutes = sec / 60;
    sec = sec - (minutes * 60);

    int rsec = sec;

    printf("%d hour %d minutes %d seconds", hour, minutes, rsec);

    return 0;
}