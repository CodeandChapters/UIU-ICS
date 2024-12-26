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

    printf("The area of the garden is:%d square meters\n", g_area);
    printf("The area covered by the garden and the surrounding road is:%d square meters", p_g_area);

    return 0;
}