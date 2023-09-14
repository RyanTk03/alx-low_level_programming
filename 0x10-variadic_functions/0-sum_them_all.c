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
	unsigned int nb = n;

	va_start(list, n);

	while (nb > 0)
	{
		s += va_arg(list, int);
		nb--;
	}

	va_end(list);

	return (s);
}
