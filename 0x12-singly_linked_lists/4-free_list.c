#include "lists.h"

/**
 * free_list - frees a list_t list.
 *
 * @head: the head of the list.
 */
void free_list(list_t *head)
{
	list_t *toDel = NULL;

	while (head)
	{
		toDel = head;
		head = head->next;
		free(toDel->str);
		free(toDel);
	}
}
