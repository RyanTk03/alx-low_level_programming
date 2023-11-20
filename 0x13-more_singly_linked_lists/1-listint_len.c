#include "lists.h"

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
