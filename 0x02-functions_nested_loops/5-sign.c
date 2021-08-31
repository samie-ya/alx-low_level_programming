#include "main.h"
/**
* print_sign- to print signs
*
* @n: insert character
*
* Return: value 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
_putchar(',');
_putchar(' ');
_putchar('\n');
return (0);
}
