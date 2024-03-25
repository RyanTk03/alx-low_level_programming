#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int sum = 0;

    for (int i = 0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }

    int digits = 1;
    int tempSum = sum;

    while (tempSum >= 10)
    {
        tempSum /= 10;
        digits++;
    }

    tempSum = sum;

    for (int i = 0; i < digits; i++)
    {
        int divisor = 1;

        for (int j = i + 1; j < digits; j++)
            divisor *= 10;

        _putchar((tempSum / divisor) + '0');
        tempSum %= divisor;
    }

    _putchar('\n');

    return (0);
}
