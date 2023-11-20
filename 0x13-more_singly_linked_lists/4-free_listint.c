#include "lists.h"

/**
 * free_listint - free a list.
 *
 * @head: the head.
 */
void free_listint(listint_t *head)
{
	listint_t *li = head;

	while (li)
	{
		li = head;
		head = head->next;
		free(li);
	}
}
