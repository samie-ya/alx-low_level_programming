#include "lists.h"
#include <stdlib.h>

/**
 * free_listint- to free the listint
 *
 * @head: pointer to head of node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
