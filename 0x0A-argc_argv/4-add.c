#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#include "main.h"

/**
 * main - Adds positive numbers.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, 1 if there is an error.
 */
int main(int argc, char *argv[])
{

int sum = 0;
int i = 0;

if (argc == 1)
{
/* No numbers provided, print 0 and return */
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
/* Convert the argument to a long integer */
char *endptr;
long num = strtol(argv[i], &endptr, 10);

/* Check for conversion errors */
if (*endptr != '\0' || num < 0)
{
printf("Error\n");
return (1);
}

/* Check for overflow */
if (num + sum > INT_MAX)
{
printf("Error\n");
return (1);
}

sum += (int)num;
}

printf("%u\n", sum);

return (0);
}
