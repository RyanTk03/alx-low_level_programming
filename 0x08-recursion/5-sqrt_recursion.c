#include "main.h"

/**
 * _sqrt_check - Check if a number is the square root of another number.
 * @i: The root to check.
 * @n: The number square to check.
 *
 * Return: i if it is the square or -1 else.
 */
int _sqrt_check(int i, int n)
{
	if (i * i == n)
		return (i);

	if (i > n / 2)
		return (-1);

	return (_sqrt_check(i + 1, n));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number which the natural square root will be compute.
 *
 * Return: The square root if all gone well and -1 else.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_check(0, n));
}

