#include "main.h"

/**
 * clear_bit- to set the nth bit to 0
 *
 * @n: number to be checked
 *
 * @index: the index to be checked starting from the right
 *
 * Return: 1 if successful
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
