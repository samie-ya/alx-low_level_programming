#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index- inserts node at a point
 *
 * @head: pointer to pointer head
 *
 * @idx: the index of list where to add
 *
 * @n: the number to be associated with the new node
 *
 * Return: if head is not empty- return to address of new node
 *         if head is empty- return  null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *previous;
	unsigned int i = 1;

	previous = *head;
	if (*head != NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
		{
			return (0);
		}
		new->n = n;
		if (idx > 0)
		{
			while (previous != NULL)
			{
				if (i == idx)
				{
					new->next = previous->next;
					previous->next = new;
					return (new);
				}
				previous = previous->next;
				i++;
			}
		}
		else
		{
		new->next = *head;
		*head = new;
		return (new);
		}
	}
	return (NULL);
}
