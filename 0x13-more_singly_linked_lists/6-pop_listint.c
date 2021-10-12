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
*/

int pop_listint(listint_t **head)
{
	int i;

	while (*head != NULL)
	{
		i = (*head)->n;
		*head = (*head)->next;
		free(*head);
		return (i);
	}
}
