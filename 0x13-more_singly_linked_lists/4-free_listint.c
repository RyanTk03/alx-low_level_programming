#include "lists.h"

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
