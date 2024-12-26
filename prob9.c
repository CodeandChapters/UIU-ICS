#include <stdio.h>
int main()
{

    float mark;

    printf("Enter your mark:");
    scanf("%f", &mark);

    if (mark >= 90 && mark <= 100)
    {
        printf("Grade point:4.00\nLetter grade:A(Plain)");
    }
    else if (mark >= 86 && mark < 90)
    {
        printf("Grade point:3.67\nLetter grade:A-(Minus)");
    }
    else if (mark >= 82 && mark < 86)
    {
        printf("Grade point:3.33\nLetter grade:B+(Plus)");
    }
    else if (mark >= 78 && mark < 82)
    {
        printf("Grade point:3.00\nLetter grade:B(Plain)");
    }
    else if (mark >= 74 && mark < 78)
    {
        printf("Grade point:2.67\nLetter grade:B-(Minus)");
    }
    else if (mark >= 70 && mark < 74)
    {
        printf("Grade point:2.33\nLetter grade:C+(Plus)");
    }
    else if (mark >= 66 && mark < 70)
    {
        printf("Grade point:2.00\nLetter grade:C(Plain)");
    }

    else if (mark >= 62 && mark < 66)
    {
        printf("Grade point:1.67\nLetter grade:C-(Minus)");
    }
    else if (mark >= 58 && mark < 62)
    {
        printf("Grade point:1.33\nLetter grade:D+(Plus)");
    }
    else if (mark >= 55 && mark < 58)
    {
        printf("Grade point:1.00\nLetter grade:D(Plain)");
    }

    else if (mark < 55)
    {
        printf("Grade point:0.00\nLetter grade:F(Fail)");
    }

    else
    {
        printf("The mark is invalid.");
    }

    return 0;
}