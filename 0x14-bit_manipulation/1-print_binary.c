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
	int i;
	unsigned long int j, k, l, length;

	length = len(n);
	length -= 1;

	if (n == 0)
	{
		_putchar('0');
	}
	for (i = length; i >= 0; i--)
	{
		j = i;
		k = 1 << j;
		l = n & k;
		if (l == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
	}
}

/**
 * len- calculates the length that the binary will be
 *
 * @n: the number used
 *
 * Return: length of the binary
 */

int len(unsigned long int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		n = n / 2;
		i++;
	}
	return (i);
}
