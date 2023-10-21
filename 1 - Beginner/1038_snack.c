/* Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay.
This is a very simple program with the only intention of practice of selection commands.

Table here: https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1038_en.png

Input
The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

Output
The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.*/

#include <stdio.h>

int main(void)
{
    int X, Y;
    int table[5] = {1, 2, 3, 4, 5};
    float price[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    float total = 0;

    scanf("%d %d", &X, &Y);
    for (int i = 0; i < 5; i++)
    {
        if (X == table[i])
            total += price[i];
    }
    total = total * Y;
    printf("Total: R$ %.2f\n", total);
    return (0);
}