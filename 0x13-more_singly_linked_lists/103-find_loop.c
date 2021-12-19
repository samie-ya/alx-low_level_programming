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
	listint_t *slow = head, *fast = head, *new = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			while (new != NULL)
			{
				new = new->next;
				if (slow == new)
					return (slow);
			}
		}
	}
	return (NULL);
}
