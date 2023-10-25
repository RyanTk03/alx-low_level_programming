#include "main.h"

/**
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: The string to show
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
	}
	else
		return;

	s--;
	_putchar(*s);
}

