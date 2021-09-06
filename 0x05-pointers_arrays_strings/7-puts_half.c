#include "main.h"
/**
* puts_half- prints half of string
*
* @str: parameter used
*
* Return: value nothing
*
*/
void puts_half(char *str)
{
int i = 0;
int n;
int k;
while (str[i] != '\0')
{
i++;
}
n = i / 2;
for (k = n; k <= i; k++)
{
_putchar(str[k]);
}
_putchar('\n');
}
