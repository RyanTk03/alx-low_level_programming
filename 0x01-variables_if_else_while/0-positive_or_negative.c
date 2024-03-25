#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error.
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d is %s\n", n,  n > 0 ? "positive" : n < 0 ? "negative" : "zero");
	return (0);
}
