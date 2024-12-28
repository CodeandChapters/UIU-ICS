/*
Write a C program that will calculate the terminal velocity of a moving body by using the
following equation:

                   v^2=u^2+2as
                   v=sqrt(u^2+2as)
                   v=sqrt(pow(u,2)+2as)

 You have to take as input the values of u , a  and  s in order, and output the value of   (not
  )
*/

#include <stdio.h>
#include <math.h>
int main()
{

  double u, a, s;

  printf("Enter the initial velocity:");
  scanf("%lf", &u);

  printf("Enter the acceleration:");
  scanf("%lf", &a);

  printf("Enter the displacement:");
  scanf("%lf", &s);

  double v = sqrt(pow(u, 2) + 2 * a * s);

  printf("The terminal velocity:%.2lf", v);

  return 0;
}
