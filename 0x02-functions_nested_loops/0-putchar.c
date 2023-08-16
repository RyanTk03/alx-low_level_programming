#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error.
 * Return: On success 1, on error -1.
 */
int main(void)
{
	int i = 0;
	char *str = "_putchar";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');

	return (1);
}
