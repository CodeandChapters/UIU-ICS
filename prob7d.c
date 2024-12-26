/*
d) Calculate the volume of the box. The user will input the dimensions of the box
(width, length, and height).
*/

#include <stdio.h>

int main()
{

    int width, length, height;

    printf("Enter the width of the box:");
    scanf("%d", &width);

    printf("Enter the length of the box:");
    scanf("%d", &length);

    printf("Enter the height of the box:");
    scanf("%d", &height);

    int volume = width * length * height;

    printf("The volume of the box is :%d", volume);

    return 0;
}