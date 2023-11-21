#include "lists.h"

/**
 * free_listint2 - free a list and set head to NULL.
 *
 * @head: the head.
 */
void free_listint2(listint_t **head)
{
	listint_t *li = NULL;

	while (*head)
	{
		li = *head;
		*head = (*head)->next;
		free(li);
	}

	*head = NULL;
}
