#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * Description  checks for if the charactere is an upercase
 *
 * Param int c the charactere to check
 * Return 1 if it's uppercase, 0 else
 */
int _isupper(int c)
{
	int u = 'A';
	while (u <= 'Z')
	{
		if (c == u)
			return (1);
		u++;
	}
	return (0);
}

