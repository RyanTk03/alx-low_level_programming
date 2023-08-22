#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error.
 * Return: Always 0
 */
int main(void)
{
	char psw[84];
	int i = 0, s = 0, x, y;

	srand(time(0));

	while (s < 2772)
	{
		psw[i] = 33 + rand() % 94;
		s += psw[i++];
	}

	psw[i] = '\0';

	if (s != 2772)
	{
		x = (s - 2772) / 2;
		y = (s - 2772) / 2;

		if ((s - 2772) % 2 != 0)
			x++;

		for (i = 0; psw[i]; i++)
		{
			if (psw[i] >= (33 + x))
			{
				psw[i] -= x;
				break;
			}
		}

		for (i = 0; psw[i]; i++)
		{
			if (psw[i] >= (33 + y))
			{
				psw[i] -= y;
				break;
			}
		}
	}

	printf("%s", psw);

	return (0);
}
