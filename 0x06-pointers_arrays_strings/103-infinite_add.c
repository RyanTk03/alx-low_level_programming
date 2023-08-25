#include <stdio.h>
#include <string.h>

#include "main.h"

/**
 * reverse_string - Reverses the characters in a string.
 * @str: The string to be reversed.
 */
void reverse_string(char *str)
{
int i = 0;
int length = strlen(str);
for (i = 0, j = length - 1; i < j; i++, j--)
{
char temp = str[i];
str[i] = str[j];
str[j] = temp;
}
}

/**
 * infinite_add - Adds two positive numbers represented as strings.
 * @n1: The first number string.
 * @n2: The second number string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int index = 0;

while (*n1 != '\0' || *n2 != '\0' || carry != 0)
{
int digit1 = (*n1 != '\0') ? (*n1 - '0') : 0;
int digit2 = (*n2 != '\0') ? (*n2 - '0') : 0;

int sum = digit1 + digit2 + carry;
int digit = sum % 10;
carry = sum / 10;

if (index < size_r - 1)
{
r[index] = digit + '0';
index++;
}
else
return (0);

if (*n1 != '\0')
n1++;
if (*n2 != '\0')
n2++;
}

r[index] = '\0';
reverse_string(r);
return (r);
}
