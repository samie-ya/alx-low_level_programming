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
int a = 0;
while (a < 10)
{
int b = 0;
while (b < 10)
{
_putchar((b % 10) + '0');
b++;
}
_putchar('\n');
a++;
}
}
