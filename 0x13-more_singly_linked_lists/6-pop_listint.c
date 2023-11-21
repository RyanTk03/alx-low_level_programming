#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t.
 *
 * @head: the head.
 *
 * Return: the head node’s data (n) if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *li = *head;
	int ret = 0;

	if (li)
	{
		ret = (*head)->n;
		*head = (*head)->next;
		free(li);
	}

	return (ret);
}

