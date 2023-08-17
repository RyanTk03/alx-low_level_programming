#include "main.h"

/**
 * times_table - Prints the 9 times table.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0'); // Print the first digit of the row

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			result = i * j;

			if (result <= 9)
				_putchar(' '); // Extra space for single-digit numbers

			_putchar((result / 10) + '0'); // Print tens digit
			_putchar((result % 10) + '0'); // Print ones digit
		}

		_putchar('\n');
	}
}
