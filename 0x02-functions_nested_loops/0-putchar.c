#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error.
 * Return: On success 0, on error 1.
 */
int main(void)
{
	int i = 0;
	char *str = "_putchar";

	while (str[i])
	{
		if (_putchar(str[i]) < 0)
			return (1);
		i++;
	}

	_putchar('\n');

	return (0);
}
