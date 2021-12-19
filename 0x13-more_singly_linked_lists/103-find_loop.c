#include "lists.h"

/**
* find_listint_loop- finds a loop in a list
*
* @head: pointer to the head of the list
*
* Return: the address of the node
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head, *new = head, *fast2;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			fast2 = fast;
			while (new != NULL)
			{
				new = new->next;
				fast2 = fast2->next;
				if (fast2 == new)
					return (new);
			}
		}
	}
	return (NULL);
}
