#include <stdio.h>

#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argv: The arguments.
 * @argc: The number of argument.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	(void)argc;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
