#include "search_algos.h"

/**
* interpolation_search- This function will use interpolation searching
*
* @array: the array to be searched
*
* @size: the size of array
*
* @value: the value to be checked
*
* Return: -1 if array is NULL or value not found else index
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t probe, low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	while (value >= array[low] && value <= array[high])
	{
		probe = low + (((double)(high - low) / (array[high] -
				array[low])) * (value - array[low]));
		if (array[probe] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
			return (probe);
		}
		else if (array[probe] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
			low = (probe + 1);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
			high = (probe - 1);
		}
	}
	probe = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	printf("Value checked array[%ld] is out of range\n", probe);
	return (-1);
}
