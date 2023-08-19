#include <stdio.h>
#include <math.h>

#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error.
 * Return: Always 0
 */
int main(void)
{
unsigned long long int num = 612852475143;
unsigned long long int largest_prime = 2;

while (num > 1)
{
if (num % largest_prime == 0)
num /= largest_prime;
else
largest_prime++;
}

printf("%llu\n", largest_prime);

return (0);
}
