#include "lists.h"

/**
 * listint_len - get the size of the list
 * @h: the head of the list
 *
 * Return: The size of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
