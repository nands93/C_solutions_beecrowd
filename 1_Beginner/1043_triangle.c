/*
Read three point floating values (A, B and C) and verify if is possible to make a triangle with them.
If it is possible, calculate the perimeter of the triangle and print the message:

Perimetro = XX.X

If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:

Area = XX.X

Input
The input file has tree floating point numbers.

Output
Print the result with one digit after the decimal point.*/

#include <stdio.h>

int main(void)
{
    double a, b, c, area, per;
    scanf("%lf %lf %lf", &a, &b, &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        per = a + b + c;
        printf("Perimetro = %.1lf\n", per);
    }
    else
    {
        area = (c / 2) * (a + b);
        printf("Area = %.1lf\n", area);
    }
    return (0);
}