#include "main.h"

/**
 * print_binary- converts number to binary
 *
 * @n: number used
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	if ((n & 1) == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('1');
	}
}
