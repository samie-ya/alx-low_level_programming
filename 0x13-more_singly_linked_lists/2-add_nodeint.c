#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint- add node before head
 *
 * @head: pointer to pointer head
 *
 * @n: thenumbers to be added ona  new node
 *
 * Return: to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
