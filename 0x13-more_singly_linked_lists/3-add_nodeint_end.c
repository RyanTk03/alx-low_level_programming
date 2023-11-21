#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of list.
 *
 * @head: point to the head of the list.
 * @n: the value of the new node.
 *
 * Return: the new node added.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *li = malloc(sizeof(listint_t));
	listint_t *l = *head;

	if (!li)
		return (NULL);

	while (l && l->next)
		l = l->next;

	li->n = n;
	li->next = NULL;

	if (l)
		l->next = li;
	else
		l = li;

	return (li);
}

