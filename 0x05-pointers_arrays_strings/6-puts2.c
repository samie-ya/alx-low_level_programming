#include "main.h"
/**
* puts2- prints everyother character
*
* @str: parameter used
*
* Return: Nothing
*
*/
void puts2(char *str)
{
int i = 0;
int j;
while (str[i] != '\0')
{
i++;
}
for (j = 0; j < i; j = (j + 2))
_putchar(str[j]);
_putchar('\n');
}
