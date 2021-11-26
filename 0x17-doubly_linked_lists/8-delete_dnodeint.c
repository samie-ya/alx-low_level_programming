#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - deletes nodes at specified index
*
* @head: pointer to pointer to the beginning
*
* @index: the position to be deleted
*
* Return: 1 if successful else -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int n = 0, len;
	dlistint_t *h, *previous, *del, *next;

	len = listint_len(*head);
	h = *head;
	if ((index == 0) && (*head != NULL))
	{
		next = (*head)->next;
		next->prev = NULL;
		free(*head);
		*head = next;
		return (1);
	}
	else if (index >= len)
	{
		return (-1);
	}
	else
	{
		while (h != NULL)
		{
			if (index == n)
			{
				del = h;
				next = del->next;
				previous = del->prev;
				next->prev = previous;
				previous->next = next;
				free(del);
				return (1);
			}
			h = h->next;
			n++;
		}
	}
	return (-1);
}

/**
* listint_len - to find the number of nodes
*
* @h: pointer to the beginning
*
* Return: number of nodes
*/

unsigned int listint_len(dlistint_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
