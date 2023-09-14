#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int nb = n;

	va_start(list, n);

	while (nb > 0)
	{
		char *s = va_arg(list, char *);

		printf("%s%s", s == NULL ? "(nil)" : s, separator == NULL ||
				nb == 1 ? "" : separator);
		nb--;
	}

	va_end(list);

	printf("\n");
}
