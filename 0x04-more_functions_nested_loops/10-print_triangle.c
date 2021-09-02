#include "main.h"
/**
* print_triangle- making triange
*
* @size: parameter used
*
* Return: Nothing
*/
void print_triangle(int size)
{
int i;
int j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = size - i; j > 0; j--)
{
_putchar(' ');
}
for (j = 0; j < i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
if (size <= 0)
{
_putchar('\n');
}
}
