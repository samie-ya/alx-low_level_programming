#include "main.h"
#include <stdlib.h>
/**
* *_calloc- write the function of calloc with malloc
*
* @nmemb: elements of array
*
* @size: bytes of each element
*
* Return: if function fails - 0
*         if function works - return to pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
unsigned int j;
char *dest;
if (nmemb == 0 || size == 0)
{
return (0);
}
j = nmemb * size;
dest = malloc(j);
if (dest == 0)
{
return (0);
free(dest);
}
for (i = 0; i  < j; i++)
{
dest[i] = 0;
}
return (dest);
}
