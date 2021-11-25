#include "lists.h"
#include <stdlib.h>

/**
* sum_dlistint - finds the sum of all the data in list
*
* @head: pointer to the beginning of the node
*
* Return: total
*/

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head == NULL)
		total = 0;
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
