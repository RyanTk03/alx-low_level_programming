#include "main.h"

/**
 * is_separator - Checks if a character is a word separator.
 * @c: The character to check.
 *
 * Return: true if c is a separator, false otherwise.
 */
int is_separator(char c)
{
int i = 0;
char separators[] = " \t\n,;.!?\"(){}";
for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
return (1);
}
return (0);
}

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;

if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - ('a' - 'A');

i++;

while (str[i] != '\0')
{
if (is_separator(str[i]))
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - ('a' - 'A');
}
else
i++;
}

return (str);
}
