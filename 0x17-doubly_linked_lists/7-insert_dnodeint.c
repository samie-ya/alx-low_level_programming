#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - to insert a new node at a given position
*
* @h: pointer to pointer to beginning of the node
*
* @idx: the position of the new node
*
* @n: the valude of the new node
*
* Return: address of the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new;
	dlistint_t *previous;
	dlistint_t *current;
	dlistint_t *head = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	if (idx == 0 && *h == NULL)
	{
		add_dnodeint(h, n);
	}
	else
	{
		while (head != NULL)
		{
			if (idx == i)
			{
				current = head;
				new->next = current;
				previous = current->prev;
				new->prev = previous;
				previous->next = new;
				current->prev = new;
				return (new);
			}
			i++;
			head = head->next;
		}
	}
	return (NULL);
}

/**
* listint_len - prints the number of nodes of the list
*
* @h: pointer to the head of the list
*
* Return: the number of nodes
*/

unsigned int listint_len(dlistint_t **h)
{
	unsigned int n = 0;

	while (*h != NULL)
	{
		n++;
		*h = (*h)->next;
	}
	return (n);
}
