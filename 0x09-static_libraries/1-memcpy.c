#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest
 * @dest: the destination memory.
 * @src: the source memory
 * @n: the number of bytes to copy.
 *
 * Return: A pointer to the destination memory.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}
