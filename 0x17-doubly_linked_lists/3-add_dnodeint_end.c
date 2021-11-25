#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - Adds a node at the end of the list
*
* @head: pointer to pointer to the beginning of the node
*
* @n: new value of new node
*
* Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		new->next = NULL;
		last->next = new;
		new->prev = last;
		return (new);
	}
	return (NULL);
}
