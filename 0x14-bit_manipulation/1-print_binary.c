#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zero = 1; /* Flag to skip leading zeros */

	while (mask > 0)
	{
		if ((n & mask) == mask)
		{
			putchar('1');
			leading_zero = 0; /* Once the first '1' is encountered, set the flag to 0 */
		}
		else if (!leading_zero)
		{
			putchar('0');
		}

		mask >>= 1; /* Shift the mask to the right */
	}

	if (leading_zero)
	{
		putchar('0'); /* If the number is 0, print a single '0' */
	}
}
