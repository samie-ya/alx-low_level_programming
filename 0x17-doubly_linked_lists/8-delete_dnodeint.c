#include "lists.h"
#include <stdlib.h>

/**
*
*
*
*
*
*
*
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *h = *head;
	dlistint_t *del;
	dlistint_t *next;
	dlistint_t *previous;

	if (*head == NULL)
		return (-1);
	if (*head != NULL && index == 0)
	{
		next = (*head)->next;
		next->prev = NULL;
		free(*head);
		*head = next;
		return (1);
	}
	while (h != NULL)
	{
		if (index == n)
		{
			del = h;
			previous = del->prev;
			next = del->next;
			previous->next = next;
			next->prev = previous;
			free(del);
			return (1);
		}
		h = h->next;
		n++;
	}
	return (1);
}
