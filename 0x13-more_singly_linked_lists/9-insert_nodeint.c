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
*
*
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new;
	listint_t *previous;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx > 0)
	{	
		while (*head != NULL)
		{
			if (i == idx)
			{
				previous = *head;
				new->next = previous->next;
				previous->next = new;
				return (new);
			}
			if (i < idx)
			{
				return (new);
			}
			*head = (*head)->next;
			i++;
		}
	}
	else
	{
	new->next = *head;
	*head = new;
	}
	return (new);
}
