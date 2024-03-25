#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error.
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
