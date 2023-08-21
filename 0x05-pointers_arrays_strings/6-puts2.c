#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * character, followed by a new line.
 * @str: A pointer to the input string.
 *
 * Description:
 * This function takes a pointer to a null-terminated string and prints every
 * other character of the string, starting with the first character, followed
 * by a new line.
 */
void puts2(char *str)
{
int i = 0;
int lenght = _strlen(str);

/* Iterate through the characters, printing every other one */
while (i < lenght)
{
_putchar(str[i]);
i += 2;
}

/* Print a new line */
_putchar('\n');
}
