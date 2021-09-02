#include "main.h"
/**
* print_diagonal- print space n times and the \
*
* @n: parameter used
*
* Return: nothing
*/
void print_diagonal(int n)
{
int i = 0;
int j;
if (n <= 0)
{
_putchar('\n');
}
if (n > 0)
{
while (i < n)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
i++;
}
}
}
