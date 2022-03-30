#include "search_algos.h"

/**
* jump_search- This is a jump search algorithim
*
* @array: the array to be checked
*
* @size: the size of the array
*
* @value: the value to be found
*
* Return: -1 if value not found and array is NULL, index if found
*/

int jump_search(int *array, size_t size, int value)
{
	size_t high, i, low;

	if (array == NULL)
		return (-1);
	low = 0;
	high = sqrt(size);
	while (high <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		if (value <= array[high])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", low, high);
			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (value == array[i])
					return (i);
			}
		}
		low = high;
		high += sqrt(size);
	}
	/*printf("Value checked array[%ld] = [%d]\n", low, array[low]);*/
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	return (-1);
}
