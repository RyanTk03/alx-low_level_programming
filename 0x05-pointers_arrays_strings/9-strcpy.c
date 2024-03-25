#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to dest.
 *
 * Description:
 * This function copies the string pointed to by src, including the terminating
 * null byte ('\0'), to the buffer pointed to by dest. The function returns a
 * pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (original_dest);
}
