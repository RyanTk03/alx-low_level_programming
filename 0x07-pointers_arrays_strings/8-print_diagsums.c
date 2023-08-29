#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the matrix (1D array).
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0;

for (int i = 0; i < size; i++)
{
sum1 += a[i * size + i];  // Diagonal from top-left to bottom-right
sum2 += a[i * size + (size - 1 - i)];  // Diagonal from top-right to bottom-left
}

printf("%d, %d\n", sum1, sum2);
}
