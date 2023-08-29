#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle in the string
 * 	haystack.
 * @haystack: the string where search.
 * @needle: the string to search.
 *
 * Return: A pointer to the beginning of the located substring, or NULL
 * 	if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int hlen = 0, nlen = 0;
	int i = 0, j = 0;
	int find = 0;

	while (*needle)
		nlen++;

	while (*haystack)
		hlen++;

	for (i = 0; i < hlen - nlen; i++)
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
		return (&haystack[i]);
	else
		return (NULL);
}

