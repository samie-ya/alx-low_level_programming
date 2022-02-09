#include "main.h"
#include <stdlib.h>

/**
* _realloc - to make more memories
*
* @ptr: pointer to memory
*
* @old_size: old size of a memory
*
* @new_size: new size of a memory
*
* Return:
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	int i;

	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL && new_size != 0)
	{
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
		{
			str[i] = ptr[i];
		}
		for (j = 0; j < new_size; j++)
		{
			str[i + j] = ptr[j];
		}
	}
	else
	{
		return (NULL);
		free(ptr);
	}
	
}
