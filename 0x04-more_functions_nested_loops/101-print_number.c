#include "main.h"
/**
* print_number- prints number without hard coding
*
* Return: Nothing
*/
void print_number(int n)
{
if (n < 0)
{
n = (-1) * n;
}
if (n < 10)
{
_putchar((n) + '0');
}
