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

	while (h != NULL)
	{
		if (index == n)
		{
			
		}
		n++;
		h = h->next;
	}
}
