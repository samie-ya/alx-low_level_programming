#include "lists.h"

/**
* print_listint_safe- prints a linked list with a loop
*
* @head: pointer to the head of the list
*
* Return: the number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listint_t *h = (listint_t *)head;
	listint_t *slow = h, *fast = h;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			slow = h;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				printf("[%p] %d\n", (void *)slow, slow->n);
				i++;
			}
			return (i);
		}
	}
	exit(98);
}
