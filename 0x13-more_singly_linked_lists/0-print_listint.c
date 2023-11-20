#include "lists.h"

/**
 * print_listint - print list of integer.
 *
 * @h: the head of the list.
 *
 * Return: the size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
