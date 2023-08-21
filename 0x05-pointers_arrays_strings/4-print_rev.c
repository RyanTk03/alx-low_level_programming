#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: A pointer to the input string.
 *
 * Description:
 * This function takes a pointer to a null-terminated string and prints the
 * characters of the string in reverse order, followed by a new line.
 */
void print_rev(char *s)
{
int i = 0;
int length = 0;

/* Calculate the length of the string */
while (s[length] != '\0')
length++;

/* Print the string in reverse */
for (i = length - 1; i >= 0; i--)
_putchar(s[i]);

/* Print a new line */
_putchar('\n');
}
