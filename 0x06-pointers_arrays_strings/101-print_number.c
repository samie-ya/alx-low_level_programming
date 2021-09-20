#include "main.h"
/**
* print_number- prints numbers
*
* @n: number
*
* Return: No return value
*/
void print_number(int n)
{
unsigned int i = n;
if (n < 0)
{
_putchar('-');
n *= -1;
}
if ((i / 10) > 0)
print_number(i / 10);
_putchar ((i % 10) + '0');
}
