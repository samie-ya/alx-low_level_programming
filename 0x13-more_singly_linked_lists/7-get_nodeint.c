#include "lists.h"

/**
 * get_nodeint_at_index - find the nth node
 *
 * @head: pointer to head
 *
 * @index: the nth node
 *
 * Return: if head is not null - the nth node
 *         else null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (0);
}
