#include "search_algos.h"

/**
* linear_search- This function will search array linearly
*
* @array: This is the array to search
*
* @size: The size of the array
*
* @value: The value to be searched
*
* Return: -1 if no value or array is null, else the index
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
