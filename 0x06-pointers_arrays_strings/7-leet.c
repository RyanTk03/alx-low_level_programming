#include "main.h"

/**
 * leet - Encodes a string into 1337 according to specific rules.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
int i = 0;
int j = 0;
char leet_map[] = "AEOTLaeotl";
char leet_replacements[] = "4307143071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_map[j] != '\0'; j++)
{
if (str[i] == leet_map[j])
{
str[i] = leet_replacements[j];
break;
}
}
}

return (str);
}
