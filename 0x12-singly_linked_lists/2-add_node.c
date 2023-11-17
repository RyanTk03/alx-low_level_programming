#include "lists.h"

/**
 * add_node - that adds a new node at the beginning of a list_t list.
 *
 * @head: the head of the list.
 * @str: the string value.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newList = malloc(sizeof(list_t));

	if (!newList)
		return (NULL);

	newList->str = strdup(str);
	newList->len = strlen(str);
	newList->next = *head;

	*head = newList;

	return (newList);
}
