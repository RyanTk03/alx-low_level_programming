#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator:is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int nb = n;

	va_start(list, n);

	while (nb > 0)
	{
		printf("%d%s", va_arg(list, int), separator == NULL || nb == 1
				? "" : separator);
		nb--;
	}

	va_end(list);

	printf("\n");
}
