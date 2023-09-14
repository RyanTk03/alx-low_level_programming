#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	va_start(list, format);

	while (*format)
	{
		switch (*format)
		{
			case 'c':
				printf("%c", va_arg(list, int));
			break;
			case 'i':
				printf("%d", va_arg(list, int));
			break;
			case 'f':
				printf("%f", va_arg(list, double));
			break;
			case 's':
			{
				char *str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
			}
			break;
			default:
			break;
		}

		if (*(format + 1))
			printf(", ");

		format++;
	}

	printf("\n");
	va_end(list);
}
