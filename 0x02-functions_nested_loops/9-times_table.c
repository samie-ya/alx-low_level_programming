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
int r = 0;
while (r < 10)
{
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
_putchar(',');
_putchar(' ');
}
_putchar(r);
_putchar('\n');
r++;
}
_putchar('\n');
return;
}
