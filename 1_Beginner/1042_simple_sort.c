/*
Read three integers and sort them in ascending order. After, print these values in ascending order, a blank line and then the values in the sequence as they were readed.

Input
The input contains three integer numbers.

Output
Present the output as requested above.
*/

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int arr[3] = {a, b, c};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n%d\n%d\n%d\n", a, b, c);

    return (0);
}