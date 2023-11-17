#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: the head of the list
 * @str: the string value
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nl = malloc(sizeof(list_t));
	list_t *l = *head;

	if (!nl)
		return (NULL);

	nl->str = strdup(str);
	nl->len = strlen(str);
	nl->next = NULL;

	while (l->next)
		l = l->next;

	l->next = nl;

	return (nl);
}
