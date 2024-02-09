#include "main.h"

/**
 * mystrlen - get the size of a string.
 *
 * @b: the string.
 *
 * Return: the size of a string.
 */
int mystrlen(const char *b)
{
	int i = 0;

	while (b[i])
		i++;
	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: the binary string to convert
 *
 * Return: decimal version of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len, two_pow = 1;

	if (b == NULL)
		return (0);


	len = mystrlen(b) - 1;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] == '1')
		{
			result += two_pow;
		}
		two_pow *= 2;
		len--;
	}

	return (result);
}
