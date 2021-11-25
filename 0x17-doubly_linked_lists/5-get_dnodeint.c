#include "lists.h"
#include <stdlib.h>

/**
* get_dnodeint_at_index - to returnn the nth node
*
* @head: pointer to the beginning of the list
*
* @index: the nth node to be returned
*
* Return: the nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (index == n)
		{
			return (head);
		}
		n++;
		head = head->next;
	}
	return (NULL);
}
