#include "function_pointers.h"
/**
* int_index- to search for integer
*
* @array: array searched
*
* @size: size of array
*
* @cmp: pointer used
*
* Return: i if found an integer
*         -1 if not forund an integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
while (i < size)
{
cmp(array[i]);
if (cmp(array[i]))
{
return (i);
}
i++;
}
return (-1);
}
