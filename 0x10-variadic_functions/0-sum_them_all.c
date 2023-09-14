#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of item.
 *
 * Return: the sum or 0 if n = 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	while (n > 0)
	{
		s += va_arg(list, int);
		n--;
	}

	va_end(list);

	return (s);
}
