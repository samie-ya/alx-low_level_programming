#include "search_algos.h"

/**
* binary_search- This will search an array with binary search
*
* @array: the array to be searched
*
* @size: the size of the array
*
* @value: the value to be searched
*
* Return: -1 if array is null or value isn't found else index
*/

int binary_search(int *array, size_t size, int value)
{
	size_t mid, i;
	int j = 0;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (j == 1)
			printf(", ");
		printf("%d", array[i]);
		j = 1;
	}
	printf("\n");
	if (size > 1)
	{
		if (size % 2 == 0)
		{
			mid = size / 2;
			if (value == array[mid - 1])
				return (mid - 1);
			else if (value > array[mid - 1])
				return (binary_search(&array[mid], mid, value));
			else if (value < array[mid - 1])
				return (binary_search(array, (mid - 1), value));
		}
		else
		{
			mid = (size + 1) / 2;
			if (value == array[mid - 1])
				return (mid - 1);
			else if (value > array[mid - 1])
				return (binary_search(array, (mid - 1), value));
			else if (value < array[mid - 1])
				return (binary_search(&array[mid], mid, value));
		}
	}
	return (-1);
}
