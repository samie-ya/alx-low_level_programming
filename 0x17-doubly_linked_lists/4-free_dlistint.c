#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - frees the allocated memories in doubly linked
*
* @head: pointer to head
*
* Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

