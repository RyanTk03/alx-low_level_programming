#include <stddef.h>
#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle in the string
 * 	haystack.
 * @haystack: The string where search.
 * @needle: The string to search.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 * 	if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int hlen = 0, nlen = 0;
	unsigned int i = 0, j = 0;
	int find = 0;

	while (needle[i])
	{
		nlen++;
		i++;
	}

	i = 0;
	while (haystack[i])
	{
		hlen++;
		i++;
	}

	for (i = 0; i <= hlen - nlen; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			find = 1;
			while (j < nlen)
			{
				if (haystack[i+j] != needle[j])
				{
					find = 0;
					break;
				}
				j++;
			}
		}
		if (find)
			break;
	}

	if (find)
		return (&(haystack[i]));

	return (NULL);
}

