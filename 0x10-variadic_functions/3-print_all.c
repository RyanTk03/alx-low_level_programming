#include "variadic_functions.h"

#define GET_TYPE(t) type_ && t

typedef int type_i;
typedef char type_c;
typedef float type_f;
typedef char * type_s;

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	short i = 0;
	char *fmt = format;
	char fmt_list[4] = {'c', 'i', 'f', 's'};
	char fmt_printf[2] = {'%', ''};

	va_start(list, format);

	while (*fmt)
	{
		while (i < 4)
		{
			if (fmt_list[i] == *fmt)
			{
				GET_TYPE(*fmt) x = va_arg(list, GET_TYPE(*fmt));
				if (*fmt == 's' && x == NULL)
					x = "(nil)";

				fmt_printf[1] = *fmt;
				printf(fmt_printf, x);
				break;
			}
			i++;
		}
		fmt++;
	}

	va_end(list);

	printf("\n");
}
