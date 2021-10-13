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
	listint_t *next;
	listint_t *now;

	now = *head;
	if (*head == NULL)
	{
		return;
	}
	while (now != NULL)
	{
		next = now->next;
		free(now);
		now = next;
	}
	*head = NULL;
}
