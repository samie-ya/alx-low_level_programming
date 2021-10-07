#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* *add_node- to add to a node
*
* @head: pointer to the head pointer of the node
*
* @s: the strings to be added
*
* Return: to the address of the new element
*/
list_t *add_node(list_t **head, const char *s)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (0);
}
new->str = strdup(s);
new->len = _len(s);
new->next = *head;
*head = new;
return (*head);
}
/**
* _len- to determine the length of a string
*
* @s: the string to be used
*
* Return: length of a string
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
