#include "main.h"
/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: A pointer to the input string.
 *
 * Description:
 * This function takes a pointer to a null-terminated string and prints the
 * second half of the string, followed by a new line. If the number of
 * characters in the string is odd, the function prints the last n characters
 * of the string, where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
int length = 0;
int start_index = 0;

/* Calculate the length of the string */
while (str[length] != '\0')
length++;

start_index = length % 2 == 0 ? length / 2 : (length + 1) / 2;

/* Print the second half of the string */
while (str[start_index] != '\0')
{
_putchar(str[start_index]);
start_index++;
}

/* Print a new line */
_putchar('\n');
}
