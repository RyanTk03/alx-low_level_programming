#include <stdio.h>

#include "main.h"

/**
 * main - a program that prints the number of arguments passed into it.
 * @argv: The arguments.
 * @argc: The number of argument.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%d\n", argc);

	return (0);
}
