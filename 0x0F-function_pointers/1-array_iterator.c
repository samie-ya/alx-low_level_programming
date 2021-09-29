#include "function_pointers.h"
/**
* array_iterator- list an array
*
* @array: array to be listed
*
* @size: size of an array
*
* @action: pointer used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array != 0 && size > 0 && action != 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
