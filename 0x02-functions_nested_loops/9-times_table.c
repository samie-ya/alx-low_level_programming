#include "main.h"
/**
* times_table- to create 9x9 table
*
* Return: value 0
*
*/
void times_table(void)
{
int i;
int j;
int k;
for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 1; j <= 9; j++)
{
_putchar(',');
_putchar(' ');
k = i * j;
if (k <= 9)
_putchar(' ');
if (k <= 9)
{
_putchar((k % 10) + '0');
if (j % 10 == 9)
continue;
}
else
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
if (k / i == 9)
continue;
}
}
_putchar('\n');
}
return;
}
