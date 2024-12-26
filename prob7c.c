/*Calculate the total cost of paving the road. The user will input the cost per square
meter of paving*/

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

    int cost_per_sqm;

    printf("Enter the cost of paving per square meter:");
    scanf("%d", &cost_per_sqm);

    int tCost = p_area * cost_per_sqm;

    printf("Total cost of paving the road:%d", tCost);

    return 0;
}