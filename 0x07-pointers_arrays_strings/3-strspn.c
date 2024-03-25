#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The input string.
 * @accept: The string containing accepted characters.
 *
 * Return: The number of bytes in the initial segment of s consisting only of
 *         bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 0;

while (*s && !found)
{
char *a = accept;
while (*a)
{
if (*s == *a)
{
count++;
found = 1;
break;
}
a++;
}
if (!found)
break;
s++;
}

return (count);
}
