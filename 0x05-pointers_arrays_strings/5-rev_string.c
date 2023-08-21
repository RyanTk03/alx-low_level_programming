#include "main.h"

/**
 * rev_string - Reverses a string in-place.
 * @s: A pointer to the input string.
 *
 * Description:
 * This function takes a pointer to a null-terminated string and reverses the
 * order of its characters in-place.
 */
void rev_string(char *s)
{
int i = 0;
int length = 0;

/* Calculate the length of the string */
while (s[length] != '\0')
length++;

/* Swap characters from the beginning and end until the middle is reached */
for (i = 0; i < length / 2; i++)
{
char temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
