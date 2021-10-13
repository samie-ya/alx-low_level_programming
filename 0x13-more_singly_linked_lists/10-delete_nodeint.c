#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index- deletes nodes at ccertain index
 *
 * @head: pointer to pointer for head
 *
 * @index: the index to be deleted
 *
 * Return: 1 if node is not empty
 *         -1 if node is empty
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous;
	listint_t *current;
	unsigned int i;

	i = 1;
	if (head != NULL)
	{
		if (index > 0)
		{
			previous = *head;
			while (previous != NULL)
			{
				if (i == index)
				{
					current = previous->next;
					previous->next = current->next;
					free(current);
					return (1);
				}
				previous = previous->next;
				i++;
			}
			return (-1);
		}
		else
		{
			if (*head != NULL)
			{
				current = (*head)->next;
				free(*head);
				*head = current;
				return (1);
			}
			return (-1);
		}
	}
	return (-1);
}
