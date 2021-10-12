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

	while (*head != NULL)
	{
		next = *head;
		*head = (*head)->next;
		free(next);
	}
	head = NULL;
}
