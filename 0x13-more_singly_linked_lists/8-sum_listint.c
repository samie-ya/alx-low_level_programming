#include "lists.h"

/**
 * sum_listint - find the sum of the data on nodes
 *
 * @head: pointer to head of the nde
 *
 * Return: if head is not empty sum
 *         else 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
