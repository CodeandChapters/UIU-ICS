#include <stdio.h>
#include <math.h>
int main()
{

    int a, b, c;

    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    printf("Enter the third number:");
    scanf("%d", &c);

    int dis = b * b - 4 * a * c;
    double x1, x2;

    if (dis > 0)
    {
        dis = sqrt(dis);
        x1 = (-b + dis) / (2 * a);
        x2 = (-b - dis) / (2 * a);

        printf("x1=%.2lf\nx2=%.2lf", x1, x2);
    }

    else if (dis == 0)
    {
        x1 = -b / (2 * a);
        x2 = x1;

        printf("x1=%.2lf\nx2=%.2lf", x1, x2);
    }
    else
    {
        printf("There is no real root.");
    }

    return 0;
}