#include  "main.h"
/**
* print_line - prints _ n times
*
* @n: parameter used
*
* @i: used as a parameter
*
* Return: nothing
*/
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
return;
}
