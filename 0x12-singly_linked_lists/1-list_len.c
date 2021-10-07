#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
* list_len- prints the number of nodes
*
* @h: the start of a node
*
* Return: the numbers of nodes
*/
size_t list_len(const list_t *h)
{
int n = 0;
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
