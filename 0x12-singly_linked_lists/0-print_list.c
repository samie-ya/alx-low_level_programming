#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* print_list- prints the contents of a node
*
* @h: pointer to the first node
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nul)\n");
}
else
{
printf("[%d] ", h->len);
printf("%s\n", h->str);
}
h = h->next;
n++;
}
return (n);
}
