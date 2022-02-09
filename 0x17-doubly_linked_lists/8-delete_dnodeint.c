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
	dlistint_t *previous, *del, *next, *h = *head;

	len = listint_len(*head);
	if (index == 0)
	{
		if (h->next != NULL)
		{
			next = h->next;
			next->prev = NULL;
			*head = next;
		}
		else
			*head = NULL;
		free(h);
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
				previous = del->prev;
				next = del->next;
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
