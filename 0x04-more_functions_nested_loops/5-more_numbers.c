#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14, ten times, followed by a new line.
 */
void more_numbers(void)
{
int i = 0, j = 0;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
