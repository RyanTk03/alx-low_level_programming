#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *li = *head;

	while (li)
	{
		li = *head;
		*head = *head->next;
		free(li);
	}

	*head = NULL;
}
