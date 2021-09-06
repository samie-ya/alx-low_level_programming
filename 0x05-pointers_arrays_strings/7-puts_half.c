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
int j;
int n;
while (str[i] != '\0')
{
i++;
}
if ((i % 2) == 0)
{
n = i / 2;
for (j = n; j < i; j++)
{
_putchar(str[j]);
}
}
else
{
n = ((i - 1) / 2);
n = n + 1;
for (j = n; j < i; j++)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
