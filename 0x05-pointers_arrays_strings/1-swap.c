#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 *
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Description:
 * This function takes two pointers to integers and swaps their values.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
