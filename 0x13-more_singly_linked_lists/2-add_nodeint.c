#include "lists.h"

/**
 * add_nodeint - add a node at the beginnig of the list.
 *
 * @head: a pointer to the head of the list.
 * @n: the value of the new node.
 *
 * Return: the new node added.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *li = malloc(sizeof(listint_t));

	if (!li)
		return (NULL);

	li->n = n;
	li->next = *head;
	*head = li;

	return (li);
}
