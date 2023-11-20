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
