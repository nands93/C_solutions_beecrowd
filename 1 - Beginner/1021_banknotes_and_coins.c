/*Read a value of floating point with two decimal places. This represents a monetary value.
After this, calculate the smallest possible number of notes and coins on which the value can be decomposed.
The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01.
Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

Input
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output
Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double money;
    double banknotes[6] = {100, 50, 20, 10, 5, 2};
    double coins[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int count;

    scanf("%lf", &money);
    money += 0.001; // The exercise somehow was wrong. The problem was the precision of float numbers. So that line fix that in this exercise

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++)
    {
        count = money / banknotes[i];
        money = fmod(money, banknotes[i]);
        printf("%d nota(s) de R$ %.2lf\n", count, banknotes[i]);
    }
    printf("MOEDAS:\n");
    for (int j = 0; j < 6; j++)
    {
        count = money / coins[j];
        money = fmod(money, coins[j]);
        printf("%d moeda(s) de R$ %.2lf\n", count, coins[j]);
    }
    return (0);
}