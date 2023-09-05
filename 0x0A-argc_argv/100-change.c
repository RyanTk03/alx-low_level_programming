#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 * main - a program that prints the minimum number of coins to make change for
 *	an amount of money.
 * @argc: The number of arguments.
 * @argv: The value of arguments.
 *
 * Return: 1 on error, 0 else.
 */
int main(int argc, char *argv[])
{
int i = 0;
int count = 0;
int coins[] = {25, 10, 5, 2, 1};
int num_coins = sizeof(coins) / sizeof(coins[0]);
int cents = atoi(argv[1]);

if (argc != 2)
{
printf("Error\n");
return (1);
}

if (cents < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < num_coins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
count++;
}
}

printf("%d\n", count);

return (0);
}
