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
	unsigned int i = 0;
	listint_t *new;
	listint_t *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		if (i == idx)
		{
			temp = new;
			new->next = temp;
		}
		temp = temp->next;
		i++;
	}
	return (new);
}
