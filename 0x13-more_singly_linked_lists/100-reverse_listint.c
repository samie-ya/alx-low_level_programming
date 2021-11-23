#include "lists.h"

/**
* reverse_listint- to reverse the linked list
*
* @head: pointer to pointer to head
*
* Return: to the head of the node
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL, *prev = NULL;

	if (*head == NULL)
		return (*head);
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (prev);
}
