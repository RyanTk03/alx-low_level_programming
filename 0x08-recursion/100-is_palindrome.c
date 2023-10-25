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


/**
 * _check_char - check if the opposite charactere are same.
 * @i: The position of the current charactere.
 * @l: The len of the string to check.
 * @s: The string to check.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int _check_char(int i, int l, char *s)
{
	if (l == 0 || i == l / 2)
		return (1);

	if (i < l / 2)
	{
		if (s[i] != s[l - 1 - i])
			return (0);

		return (_check_char(i + 1, l, s));
	}

	return (0);
}


/**
 * is_palindrome - Returns 1 if a string is a palindrome and 0 if not.
 * @s: The string to check.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (_check_char(0, l, s));
}

