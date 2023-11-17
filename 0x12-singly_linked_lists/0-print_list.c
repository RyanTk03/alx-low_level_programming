#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 *
 * @h: The head of the list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	do {
		if (h != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)");
			else
				printf("[%d] %s", h->len, h->str);
			h = h->next;
			n++;
		}
	} while (h != NULL);

	return (n);
}
