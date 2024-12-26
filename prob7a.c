// a) Calculate the area of the path surrounding the garden.

#include <stdio.h>
int main()
{

    int wgarden, lgarden, wpath;

    printf("Enter the width of the garden:");
    scanf("%d", &wgarden);

    printf("Enter the length of the garden:");
    scanf("%d", &lgarden);

    printf("Enter the width of the path surrounding the garden:");
    scanf("%d", &wpath);

    int g_area = wgarden * lgarden;
    int p_g_area = ((wgarden + (2 * wpath)) * (lgarden + (2 * wpath)));
    int p_area = p_g_area - g_area;

    printf("The area of the path:%d", p_area);

    return 0;
}