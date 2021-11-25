#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - adds a node at the beginning of a list
*
* @head: pointer to pointer to head
*
* @n: the value of new node
*
* Return: address of new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (new);
	}
	return (NULL);
}
