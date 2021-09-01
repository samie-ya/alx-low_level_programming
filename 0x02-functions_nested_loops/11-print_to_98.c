#include "main.h"
/**
*
*
*
*
*
*/
void print_to_98(int n)
{
n = '0';
while (n <= 98)
{
_putchar(n % 10);
_putchar(',');
_putchar(' ');
n++;
}
_putchar('\n');
return;
}
