#include "lists.h"
#include <stdlib.h>
/**
* dlistint_len - prints the number of nodes of the list
*
* @h: pointer to the head of the list
*
* Return: the number of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
