#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - deletes nodes at an index
*
* @head: pointer to pointer to beginning
*
* @index: the index to remove
*
* Return: 1 if successful else -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int n = 0, len;
	dlistint_t *h = *head;
	dlistint_t *del;
	dlistint_t *next;
	dlistint_t *previous;

	len = listint_len(*head);
	if (*head != NULL && index == 0)
	{
		next = (*head)->next;
		next->prev = NULL;
		free(*head);
		*head = next;
		return (1);
	}
	else if (index >= len)
		return (-1);
	else if (index > 0 && index < len)
	{
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
	}
	else
		return (-1);
	return (-1);
}

/**
* listint_len - prints the number of nodes of the list
*
* @h: pointer to the head of the list
*
* Return: the number of nodes
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
