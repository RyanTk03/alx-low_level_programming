#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: The number of argument.
 * @argv: The arguments values.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
