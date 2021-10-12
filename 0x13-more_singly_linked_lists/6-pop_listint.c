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
	listint_t *temp;

	temp = *head;
	if (*head != NULL)
	{
	*head = (*head)->next;
	free(temp);
	return ((*head)->n);
	}
	return (0);
}
