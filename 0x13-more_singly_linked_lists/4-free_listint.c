#include "lists.h"

/**
 * free_listint - free a list.
 *
 * @head: the head.
 */
void free_listint(listint_t *head)
{
	listint_t *li = NULL;

	while (head)
	{
		li = head;
		head = head->next;
		free(li);
	}
}
