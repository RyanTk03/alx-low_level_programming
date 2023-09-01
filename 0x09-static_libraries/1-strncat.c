#include "main.h"

/**
 * _strncat - Concatenates two strings with a limit on the number of
 * characters copied.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to concatenate from src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;

while (*dest_ptr != '\0')
dest_ptr++;

while (*src != '\0' && n > 0)
{
*dest_ptr = *src;
dest_ptr++;
src++;
n--;
}

*dest_ptr = '\0';
return (dest);
}

