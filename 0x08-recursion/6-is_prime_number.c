#include "main.h"

/**
 * _prime_check - Check if a number is prime number or not.
 * @d: The current divisor.
 * @n: The number to check.
 *
 * Return: 1 if n if prime number, 0 else.
 */
int _prime_check(int d, int n)
{
	if (n % d == 0)
		return (0);

	if (d > n / 2)
		return (1);

	return (_prime_check(d + 1, n));
}


/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 *	otherwise return 0.
 * @n: The number to check.
 *
 * Return: Returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
		return (0);

	return (_prime_check(2, n));
}

