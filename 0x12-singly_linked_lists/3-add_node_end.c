#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* *add_node_end- adds to end of a  node
*
* @head: pointer to the head pointer
*
* @s: string to be duplicated
*
* Return: to the new address
*/
list_t *add_node_end(list_t **head, const char *s)
{
list_t *new;
list_t *last;
last = *head;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (0);
}
new->str = strdup(s);
new->len = _len(s);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (*head);
}
while (last->next != NULL)
{
last = last->next;
}
last->next = new;
return (new);
}
/**
* _len- length of a string
*
* @s: string to be checked
*
* Return: length of the string
*/
int _len(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
