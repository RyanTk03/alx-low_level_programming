#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: The string which length to calculate
 *
 * Return: the len of the sting s.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(++s));

	return (0);
}

