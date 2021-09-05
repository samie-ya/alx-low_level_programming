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
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
int k = i * j;
if (k <= 9)
{
_putchar((k % 10) + '0');
if (j % 10 == 9)
{
continue;
}
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
if (k / i == 9)
{
continue;
}
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
return;
}
