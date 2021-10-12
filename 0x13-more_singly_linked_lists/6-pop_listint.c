#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint- to delete the head of the node
 *
 * @head: pointer to pointer head
 *
 * Return: if list is not empty- the data of the head to be deleted
 *         if list is  empty- return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int i;

		while (*head != NULL)
		{
			new = *head;
			i = (*head)->n;
			*head = (*head)->next;
			free(new);
			return (i);
		}

	return (0);
}
