// b) Calculate the perimeter of the garden

#include <stdio.h>
int main()
{

    int wgarden, lgarden;

    printf("Enter the width of the garden:");
    scanf("%d", &wgarden);

    printf("Enter the length of the garden:");
    scanf("%d", &lgarden);

    int gPeri = 2 * (wgarden + lgarden);

    printf("The Perimeter of the garden:%d", gPeri);

    return 0;
}