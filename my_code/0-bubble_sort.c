#include "sort.h"

/**
* bubble_sort - this function is used to print array of integers
*               in ascending order using bubble sort
*
* @array: the array to be sorted
*
* @size: the size of the array
*
* Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (size < 2)
		print_array(array, size);
	else
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					print_array(array, size);
				}
			}
		}
	}
}
