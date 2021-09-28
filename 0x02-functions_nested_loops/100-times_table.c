#include "main.h"
/**
* print_times_table- to print tims table for n < 15
*
* @n: integen used
*/
void print_times_table(int n)
{
int i;
int j;
int k;
int l;
if (n < 15 && n >= 0)
{
for (i = 0; i <= n; i++)
{
_putchar('0');
for (j = 1; j <= n; j++)
{
_putchar(',');
_putchar(' ');
k = i * j;
if (k <= 9)
{
_putchar(' ');
_putchar(' ');
_putchar((k % 10) + '0');
}
if (k < 100 && k > 9)
{
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
if (k >= 100)
{
l = k / 10;
_putchar((l / 10) + '0');
_putchar((l % 10) + '0');
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}
}
}
