#include "main.h"
#include <stdlib.h>
/**
* *malloc_checked- to allocate memory using ammloc
*
* @b: the number of spaces requireed
*
* Return: if function - return to pointer
*         if not exit 98
*/
void *malloc_checked(unsigned int b)
{
void *dest;
dest = malloc(b);
if (dest == 0)
{
exit(98);
}
return (dest);
}
