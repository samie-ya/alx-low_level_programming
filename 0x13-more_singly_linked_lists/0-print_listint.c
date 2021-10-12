#include "lists.h"
#include <stdio.h>

/**
* print_listint- prints the elements of listint_t
*
* @h: pointer to head
*
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
