#include <stdio.h>

#include "main.h"

/**
 * print_array - Prints n elements of an array of integers, followed by a new
 * line.
 * @a: A pointer to the array of integers.
 * @n: The number of elements to print.
 *
 * Description:
 * This function takes a pointer to an array of integers and the number of
 * elements
 * to print. It prints the elements followed by a new line. The numbers are
 * separated
 * by commas and spaces. The numbers are displayed in the same order as they
 * are stored in the array.
 */
void print_array(int *a, int n)
{
int i = 0;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i < n - 1)
printf(", ");
}

printf("\n");
}
