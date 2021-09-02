#include "main.h"
/**
* more_numbers- repeates 10 times
*
* @a: parameter used
*
* @b: parameter used
*
* Return: nothing
*/
void more_numbers(void)
{
int a;
int b = 0;
while (b < 9)
{
for (a = '0'; a <= 14; a++)
{
_putchar(a + '0');
}
_putchar(b);
b++;
}
_putchar('\n');
return;
}
