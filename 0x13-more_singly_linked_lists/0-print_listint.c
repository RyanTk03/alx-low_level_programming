#include "lists.h"

size_t print_listint(const listint_t *h)
{
	listint_t *li = h;
	size_t n = 0;

	while (li)
	{
		printf("%d\n", li->n);
		li = li->next;
		n++;
	}

	return (n);
}
