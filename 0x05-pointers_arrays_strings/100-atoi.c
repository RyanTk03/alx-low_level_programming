#include <stdio.h>
#include <limits.h>

#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: A pointer to the input string.
 *
 * Return: The integer value extracted from the string.
 *
 * Description:
 * This function converts a string to an integer, taking into account optional
 * positive (+) or negative (-) signs before the number. If there are no
 * numbers
 * in the string, the function returns 0. The function avoids declaring new
 * variables of "type" array and does not hard-code special values.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;
int length = 0;

while (s[i] != '\0')
{
length++;
i++;
}

i = 0;

while (i < length && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign = -sign;

i++;
}

result *= sign;

while (s[i] >= '0' && s[i] <= '9')
{

if ((result > INT_MAX / 10) || (result == INT_MAX / 10 && s[i] - '0' >
INT_MAX % 10))
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}

result = result * 10 + (s[i] - '0');
i++;
}

return (result *sign);
}
