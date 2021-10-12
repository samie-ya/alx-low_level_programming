#include "lists.h"

/**
 * listint_len - to determine the number of nodes
 *
 * @h: pointer to head of node
 *
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
