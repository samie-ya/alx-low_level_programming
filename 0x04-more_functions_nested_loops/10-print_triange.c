#include "main.h"
/**
* print_triangle- making triange
*
* Return: Nothing
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
int i = ;
while (i < size)
{
_putchar(' ');
_putchar('#');
_putchar('\n');
i++;
}
}
