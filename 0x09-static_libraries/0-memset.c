#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: the memory area pointer.
 * @b: the byte to fill in the memoory area.
 * @n: the number of bytes to fill.
 *
 * Return: A pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
