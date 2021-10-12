#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - to add node to end of node
 *
 * @head: pointer to pointer head
 *
 * @n: number to be added
 *
 * Return: to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	last = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
	{
	last = last->next;
	}
	last->next = new;
	return (new);
}
