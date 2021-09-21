#include "main.h"
#include <stdlib.h>
/**
* *create_array- to create an array
*
* @size: size of array
*
* @c: array
*
* Return: if not 0 - to pointer
*         if 0 - 0
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
ptr = malloc(sizeof(char) * size);
if (ptr == 0)
{
return (0);
}
if (size == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
