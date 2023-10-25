#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: The number which factorial to compute.
 *
 * Return: -1 if n < 0 or the factorial if all gone right
 */
int factorial(int n)
{
	if (n > 1)
		return (n * factorial(n - 1));
	else if (n == 0 || n == 1)
		return (1);
	else
		return (-1);
}

