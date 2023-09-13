#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the array of parameters.
 * @size: the size of the array.
 * @cmp: the function to call.
 *
 * Return: -1 on  error value >= 0 else.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
