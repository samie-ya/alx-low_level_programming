#include "lists.h"
#include <stdlib.h>
/**
* free_list- frees the list
*
* @head: pointer to head of the node
*
* Return: Nothing
*/
void free_list(list_t *head)
{
list_t *new;
while (head != NULL)
{
new = head;
head = head->next;
free(new->str);
free(new);
}
}
