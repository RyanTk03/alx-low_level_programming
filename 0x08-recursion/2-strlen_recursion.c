#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: The string which length to calculate
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s));
}
