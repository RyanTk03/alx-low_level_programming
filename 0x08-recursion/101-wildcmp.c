#include "main.h"

/**
 * cmp - compare two string.
 * @s1: The string 1.
 * @s2: The string 2.
 * @w: define if a wild char is active or not.
 *
 * Return: 1 if they are same and 0 else.
 */
int cmp(char *s1, char *s2, int w)
{
if (!s1)
{
if(*s2)
return (1);
else
return (0);
}

if (!*s2 && w)
return (1);
else if (!*s2 && *s1)
return (0);

if (*s2 != '*')
{
if (*s1 == *s2)
{
if (w)
    w = 0;
return (cmp(++s1, ++s2, w));
}
if (w)
return (cmp(++s1, s2, 1));
return (0);
}
else
{
s2++;
return (cmp(s1, s2, 1));
}
}


/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 *	considered identical, otherwise return 0.
 * @s1: The string 1.
 * @s2: The string 2.
 *
 * Return: Returns 1 if the strings can be considered identical, otherwise
 * return 0.
 */
int wildcmp(char *s1, char *s2)
{
int w = 0;
if (*s2 == '*')
{
w = 1;
s2++;
}
return (cmp(s1, s2, w));
}
