#include "lists.h"

/**
 * list_len - get the len of the list.
 *
 * @h: the head of the list.
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
