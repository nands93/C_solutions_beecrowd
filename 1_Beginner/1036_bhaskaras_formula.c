/*Read 3 floating-point numbers. After, print the roots of bhaskara’s formula.
If it's impossible to calculate the roots because a division by zero or a square root of a negative number, presents the message “Impossivel calcular”.

Input
Read 3 floating-point numbers (double) A, B and C.

Output
Print the result with 5 digits after the decimal point or the message if it is impossible to calculate.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double A, B, C, R1, R2, DELTA;

    scanf("%lf %lf %lf", &A, &B, &C);

    DELTA = (pow(B, 2) - (4 * A * C));
    if (A != 0 && DELTA >= 0)
    {
        R1 = ((-1 * B) + sqrt(DELTA)) / (2 * A);
        R2 = ((-1 * B) - sqrt(DELTA)) / (2 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    else
        printf("Impossivel calcular\n");
    return (0);
}
