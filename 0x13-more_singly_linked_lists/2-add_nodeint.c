#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *li = malloc(sizeof(listint_t));

	if(!li)
		return (NULL);

	li->n = n;
	li->next = *head;
	*head = li;

	return (li);
}
