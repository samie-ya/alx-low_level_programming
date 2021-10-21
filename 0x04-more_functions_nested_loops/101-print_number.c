#include "main.h"

/**
 * print_number- to print number without hard coding
 *
 * @n: the number to be printed
 *
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		n1 = n;
	}
	n1 = n;
	if (n1 / 10 > 0)
	{
		print_number(n1 / 10);
		_putchar((n1 % 10) + '0');
	}
	else
	{
		_putchar(n1 + '0');
	}
}
