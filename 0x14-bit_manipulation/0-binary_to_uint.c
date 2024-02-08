#include "main.h"

/**
 * mypow - elevate to a power a number.
 *
 * @base: the base to elevate.
 * @exponent: the exponent.
 *
 * Return: the base set to power.
 */
unsigned int mypow(unsigned int base, int exponent)
{
	if (exponent != 0)
	{
		unsigned int result = 1;
		int i;

		/* for positif exponent */
		if (exponent > 0)
			for (i = 0; i < exponent; ++i)
				result *= base;
		/* for negatif exponent : not used, so not implemented */
		else
			result = 0;

		return (result);
	}

	return (1);
}

/**
 * mystrlen - get the size of a string.
 *
 * @b: the string.
 *
 * Return: the size of a string.
 */
size_t mystrlen(const char *b)
{
	size_t i = 0;

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
	int len, base_two;

	if (b == NULL)
		return (0);


	len = mystrlen(b) - 1;

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] == '1')
		{
			result += mypow(2, len);
		}
	}

	return (result);
}
