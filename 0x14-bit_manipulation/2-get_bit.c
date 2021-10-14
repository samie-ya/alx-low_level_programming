#include "main.h"

/**
 * get_bit- to get the nth bit
 *
 * @n: number to be checked
 *
 * @index: the index to be checked starting from the right
 *
 * Return: the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	i = (n >> index) & 1;
	return (i);
}
