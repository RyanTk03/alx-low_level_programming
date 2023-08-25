#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: Pointer to the input string.
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
int i = 0, j = 0;
char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13_alphabets[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (str[i] != '\0')
{
for (j = 0; j < 52; j++)
{
if (str[i] == alphabets[j])
{
str[i] = rot13_alphabets[j];
break;
}
}
i++;
}

return (str);
}
