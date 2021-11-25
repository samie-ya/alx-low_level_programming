#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_dlistint- prints all the elements of the list
*
* @h: pointer to the head of the list
*
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
