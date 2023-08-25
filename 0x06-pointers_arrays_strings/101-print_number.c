#include "main.h"

/**
 * print_digit - Recursively prints the digits of an integer.
 * @n: The integer to be printed.
 */
void print_digit(int n)
{
if (n > 9)
print_digit(n / 10);

_putchar((n % 10) + '0');
}

/**
 * print_number - Prints an integer to the standard output.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n == 0)
_putchar('0');
else
print_digit(n);

}
