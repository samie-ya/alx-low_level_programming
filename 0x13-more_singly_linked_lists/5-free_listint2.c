#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2- to free the listint
 *
 * @head: pointer to pointer to head of node
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *new;

	while (*head != NULL)
	{
		new = *head;
		*head = (*head)->next;
		free(new);
		new = NULL;
	}
}
