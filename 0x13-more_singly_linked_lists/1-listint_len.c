#include "lists.h"

/**
 * listint_len - get the size of the list
 * @h: the head of the list
 *
 * Return: The size of the list
 */
size_t listint_len(const listint_t *h)
{
	listint_t *li = h;
	size_t n = 0;

	while (li)
	{
		li = li->next;
		n++;
	}

	return (n);
}
