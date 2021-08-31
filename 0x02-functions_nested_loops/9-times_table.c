#include "main.h"
/**
* times_table- to create 9x9 table
*
* Return: value 0
*
*/
void times_table(void)
{
int i, j;
int r = 0;
while (r < 10)
{
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
int k = i * j;
_putchar(k);
_putchar(',');
_putchar(' ');
}
_putchar('\n');
r++;
}
return;
}
