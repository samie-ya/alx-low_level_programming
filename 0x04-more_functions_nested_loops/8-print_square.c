#include "main.h"
/**
* print_square- prints a square
*
* @i: parameter used
*
* @j: parameter used
*
* @size: parameter used
*
* Return: nothing
*/
void print_square(int size)
{
int i = 0;
int j;
if (size <= 0)
{
_putchar('\n');
}
if (size > 0)
{
while (i < size)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
i++;
}
}
_putchar('\n');
return;
}
