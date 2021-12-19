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
	listint_t *slow = head, *fast = head;

	if (head == NULL)
		return (NULL);
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
		{
			slow = head;
			{
				while (slow != NULL)
				{
					slow = slow->next;
					fast = fast->next;
					if (fast == slow)
						return (slow);
				}
			}
		}
		return (NULL);
	}
	return (NULL);
}
