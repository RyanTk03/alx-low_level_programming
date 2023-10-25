#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to raised.
 * @y: The power to  raised x with.
 *
 * Return: The power of x raised to the power y or -1 if an error occurs.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	if (y > 1)
		return (x * _pow_recursion(x, y - 1));

	return (x);
}

